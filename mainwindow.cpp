#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(cnt::container<Instruments*> instrumentList, cnt::container<Instruments*>::customiterator it, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //caricamento del custom font
    QFontDatabase::addApplicationFont(":/progect_resources/font/Roland.otf");
    QFont Roland("Roland", 11, QFont::Normal);
    ui->trackControlPanel->setFont(Roland);
    ui->channelControlPanel->setFont(Roland);
    ui->credits->setFont(Roland);

    t.getChannels()[0].instrument = instrumentList[0];
    t.getChannels()[1].instrument = instrumentList[1];
    t.getChannels()[2].instrument = instrumentList[2];
    t.getChannels()[3].instrument = instrumentList[3];

    //riempimento dell'instrumentBox con tutti gli strumenti nel container
    for(it=instrumentList.begin(); it<instrumentList.end(); it++)
    {
        ui->instrumentBox->addItem((*it)->getName());
    }
    instrumentList_=instrumentList;


    //connessione del timer alla funzione timerSlot
    connect(t.trackTimer, SIGNAL(timeout()), this, SLOT(timerSlot()));

    //connessione dei buttonGroups, SIGNAL quando uno dei bottoni del gruppo viene cliccato
    connect(ui->notes_0, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup0Clicked(int)));
    connect(ui->notes_1, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup1Clicked(int)));
    connect(ui->notes_2, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup2Clicked(int)));
    connect(ui->notes_3, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup3Clicked(int)));
    connect(ui->notes_4, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup4Clicked(int)));
    connect(ui->notes_5, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup5Clicked(int)));
    connect(ui->notes_6, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup6Clicked(int)));
    connect(ui->notes_7, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup7Clicked(int)));
    connect(ui->notes_8, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup8Clicked(int)));
    connect(ui->notes_9, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup9Clicked(int)));
    connect(ui->notes_10, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup10Clicked(int)));
    connect(ui->notes_11, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup11Clicked(int)));
    connect(ui->notes_12, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup12Clicked(int)));
    connect(ui->notes_13, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup13Clicked(int)));
    connect(ui->notes_14, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup14Clicked(int)));
    connect(ui->notes_15, SIGNAL(buttonClicked(int)), this, SLOT(buttonGroup15Clicked(int)));
    connect(ui->pianoButtons, SIGNAL(buttonClicked(int)), this, SLOT(pianoButtonGroupClicked(int)));
    connect(ui->channelButtons, SIGNAL(buttonClicked(int)), this, SLOT(channelButtonGroupClicked(int)));

    //assicura che le progress bar e la texture del piano a sinistra siano in background
    ui->progress->lower();
    ui->progress_2->lower();
    ui->piano->lower();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerSlot()    {
    //scorrimento delle progress bar + avanzamento e caricamento delle bar mentre isPlaying
    if(t.isPlaying())    {
        ui->progress->raise();
        ui->progress_2->raise();
        ui->progress->setValue(progress);
        ui->progress_2->setValue(progress_2);
        progress++;
        progress_2++;
        if (progress > 15)  {
            progress = 0;
            currentBar++;
            if (currentBar >7)  {
                currentBar = 0;
            }
            loadNotes();
            ui->channelButtons->button((-currentBar-2)-(currentChannel*8))->setChecked(true);
        }
        if (progress_2 > 127)  {
            progress_2 = 0;
        }
    }
    //reset progress bars quando stop
    if((!t.isPlaying()) && (progress != 0)) {
        ui->progress->lower();
        ui->progress_2->lower();
        progress = 0;
        progress_2 = startBar * 16;
        ui->progress->setValue(progress);
        ui->progress_2->setValue(progress_2);
    }
}

/*
 ██████  ██████  ███    ██ ████████ ██████   ██████  ██          ██████   █████  ███    ██ ███████ ██
██      ██    ██ ████   ██    ██    ██   ██ ██    ██ ██          ██   ██ ██   ██ ████   ██ ██      ██
██      ██    ██ ██ ██  ██    ██    ██████  ██    ██ ██          ██████  ███████ ██ ██  ██ █████   ██
██      ██    ██ ██  ██ ██    ██    ██   ██ ██    ██ ██          ██      ██   ██ ██  ██ ██ ██      ██
 ██████  ██████  ██   ████    ██    ██   ██  ██████  ███████     ██      ██   ██ ██   ████ ███████ ███████
*/

//play button
void MainWindow::on_play_button_clicked()
{
    if (!t.isPlaying())   {
        updateNotes();
        t.setStartSection(startBar);
        currentBar = startBar;
        loadNotes();
        ui->channelButtons->button((-currentBar-2)-(currentChannel*8))->setChecked(true);
        t.start();
        ui->progress->raise();
        ui->progress_2->raise();
    }
}

//stop button
void MainWindow::on_stop_button_clicked()
{
    ui->progress->lower();
    ui->progress_2->lower();
    progress = 0;
    progress_2 = startBar * 16;
    ui->progress->setValue(progress);
    ui->progress_2->setValue(progress_2);
    t.stop();
}

//bottone previous per indietreggiare la startBar
void MainWindow::on_prev_button_clicked()
{
    if (!t.isPlaying())   {
        startBar--;
        if  (startBar<0)    {
            startBar=7;
        }
        progress_2 = startBar * 16;
        ui->progress_2->setValue(progress_2);
        ui->progress_3->setValue(startBar);
    }
}

//bottone next per avanzare la startBar
void MainWindow::on_next_button_clicked()
{
    if (!t.isPlaying())  {
        startBar++;
        if  (startBar>7)    {
            startBar=0;
        }
        progress_2 = startBar * 16;
        ui->progress_2->setValue(progress_2);
        ui->progress_3->setValue(startBar);
    }
}

//modifica del volume principale da slider/spinBox
void MainWindow::on_volumeSlider_valueChanged(int value)
{
    ui->volumeSpinBox->setValue(value);
    qreal real_value0 = ui->channelVolume1->value();
    t.getChannels()[0].instrument->setVolume(value*real_value0/100);
    qreal real_value1 = ui->channelVolume2->value();
    t.getChannels()[1].instrument->setVolume(value*real_value1/100);
    qreal real_value2 = ui->channelVolume3->value();
    t.getChannels()[2].instrument->setVolume(value*real_value2/100);
    qreal real_value3 = ui->channelVolume4->value();
    t.getChannels()[3].instrument->setVolume(value*real_value3/100);
}

void MainWindow::on_volumeSpinBox_valueChanged(int arg1)
{
    ui->volumeSlider->setValue(arg1);
}

//modifica del tempo da slider/spinBox
void MainWindow::on_tempoSlider_valueChanged(int value)
{
    on_stop_button_clicked();
    ui->tempoSpinBox->setValue(value);
    t.setTempo(value);
}

void MainWindow::on_tempoSpinBox_valueChanged(int arg1)
{
    ui->tempoSlider->setValue(arg1);
}

void MainWindow::on_instrumentBox_currentTextChanged(const QString &arg1)
{
    if (!channelChange)  {
        on_stop_button_clicked();
        bool isSet=false, isChanging=false;
        cnt::container<Instruments*>::customiterator it;
        //controllo unicita' dello strumento
        for (int i=0; i<4; i++) {
            if ((t.getChannels()[i].instrument->getName() == arg1) && (arg1 != ""))  {
                if  (currentChannel != i)   {
                    QMessageBox::warning(this, "Warning", "This instrument was already selected. \nChoose another");
                    ui->instrumentBox->setCurrentText(t.getChannels()[currentChannel].instrument->getName());
                    return;
                }
            }
        }
        for(it=instrumentList_.begin(); it<instrumentList_.end() && isSet==false; it++)
        {
            if((*it)->getName()==arg1)
                //cerca lo strumento nel container
            {
                if(dynamic_cast<Kit*>(*it))  {
                    //warning cambiamento di instrument type per kit
                    if (!ui->kit_light->isChecked())    {
                        QMessageBox::StandardButton warning = QMessageBox::question(this, "Warning", "Changing instrument type will reset all the notes. \nContinue?", QMessageBox::Yes | QMessageBox::No);
                        if(warning == QMessageBox::Yes)   {
                            resetChannel();
                            ui->kit_light->setChecked(true);
                            toggleKits(false);
                            isChanging=true;
                        }
                        if(warning == QMessageBox::No)    {
                            ui->instrumentBox->setCurrentText(t.getChannels()[currentChannel].instrument->getName());
                            return;
                        }
                    }
                }
                else    {
                    ui->kit_light->setChecked(false);
                    toggleKits(true);
                }
                if(!dynamic_cast<Stoppable*>(*it))  {
                    //warning cambiamento di instrument type per stoppable
                    if (ui->stop_light->isChecked() && isChanging)    {
                        resetChannel();
                        ui->stop_light->setChecked(false);
                        toggleStoppables(false);
                    }
                    else if (ui->stop_light->isChecked() && !isChanging)    {
                        QMessageBox::StandardButton warning = QMessageBox::question(this, "Warning", "Changing instrument type will reset all the notes. \nContinue?", QMessageBox::Yes | QMessageBox::No);
                        if(warning == QMessageBox::Yes)   {
                            resetChannel();
                            ui->stop_light->setChecked(false);
                            toggleStoppables(false);
                        }
                        if(warning == QMessageBox::No)    {
                            ui->instrumentBox->setCurrentText(t.getChannels()[currentChannel].instrument->getName());
                            return;
                        }
                    }
                }
                else    {
                    ui->stop_light->setChecked(true);
                    toggleStoppables(true);
                }
                t.getChannels()[currentChannel].instrument = *it;
                //set del volume + muted se quando viene cambiato instrument
                if  (currentChannel == 0) {
                    qreal real_value = ui->channelVolume1->value();
                    t.getChannels()[0].instrument->setVolume(ui->volumeSlider->value()*real_value/100);
                    if  (ui->muted1->isChecked())   {
                        t.getChannels()[0].instrument->setMuted(true);
                    }
                }
                if  (currentChannel == 1) {
                    qreal real_value = ui->channelVolume2->value();
                    t.getChannels()[1].instrument->setVolume(ui->volumeSlider->value()*real_value/100);
                    if  (ui->muted2->isChecked())   {
                        t.getChannels()[1].instrument->setMuted(true);
                    }
                }
                if  (currentChannel == 2) {
                    qreal real_value = ui->channelVolume3->value();
                    t.getChannels()[2].instrument->setVolume(ui->volumeSlider->value()*real_value/100);
                    if  (ui->muted3->isChecked())   {
                        t.getChannels()[2].instrument->setMuted(true);
                    }
                }
                if  (currentChannel == 3) {
                    qreal real_value = ui->channelVolume4->value();
                    t.getChannels()[3].instrument->setVolume(ui->volumeSlider->value()*real_value/100);
                    if  (ui->muted4->isChecked())   {
                        t.getChannels()[3].instrument->setMuted(true);
                    }
                }
                isSet = true;
            }
        }
    }
}

/*
███    ███ ██    ██ ████████ ███████
████  ████ ██    ██    ██    ██
██ ████ ██ ██    ██    ██    █████
██  ██  ██ ██    ██    ██    ██
██      ██  ██████     ██    ███████
*/

//bottoni mute
void MainWindow::on_muted1_stateChanged(int state)
{
    if (state == 2)  {
        t.getChannels()[0].instrument->setMuted(true);
    }
    if (state == 0) {
        t.getChannels()[0].instrument->setMuted(false);
    }
}

void MainWindow::on_muted2_stateChanged(int state)
{
    if (state == 2)  {
        t.getChannels()[1].instrument->setMuted(true);
    }
    if (state == 0) {
        t.getChannels()[1].instrument->setMuted(false);
    }
}

void MainWindow::on_muted3_stateChanged(int state)
{
    if (state == 2)  {
        t.getChannels()[2].instrument->setMuted(true);
    }
    if (state == 0) {
        t.getChannels()[2].instrument->setMuted(false);
    }
}

void MainWindow::on_muted4_stateChanged(int state)
{
    if (state == 2)  {
        t.getChannels()[3].instrument->setMuted(true);
    }
    if (state == 0) {
        t.getChannels()[3].instrument->setMuted(false);
    }
}

/*
██    ██  ██████  ██      ██    ██ ███    ███ ███████
██    ██ ██    ██ ██      ██    ██ ████  ████ ██
██    ██ ██    ██ ██      ██    ██ ██ ████ ██ █████
 ██  ██  ██    ██ ██      ██    ██ ██  ██  ██ ██
  ████    ██████  ███████  ██████  ██      ██ ███████
*/

//volumi dei canali, sono moltiplicatori 0-1 del main volume
void MainWindow::on_channelVolume1_valueChanged(int value)
{
    qreal real_value = value;
    t.getChannels()[0].instrument->setVolume(ui->volumeSlider->value()*real_value/100);
}

void MainWindow::on_channelVolume2_valueChanged(int value)
{
    qreal real_value = value;
    t.getChannels()[1].instrument->setVolume(ui->volumeSlider->value()*real_value/100);
}

void MainWindow::on_channelVolume3_valueChanged(int value)
{
    qreal real_value = value;
    t.getChannels()[2].instrument->setVolume(ui->volumeSlider->value()*real_value/100);
}

void MainWindow::on_channelVolume4_valueChanged(int value)
{
    qreal real_value = value;
    t.getChannels()[3].instrument->setVolume(ui->volumeSlider->value()*real_value/100);
}

/*
 ██████ ██   ██  █████  ███    ██ ███    ██ ███████ ██      ███████
██      ██   ██ ██   ██ ████   ██ ████   ██ ██      ██      ██
██      ███████ ███████ ██ ██  ██ ██ ██  ██ █████   ██      ███████
██      ██   ██ ██   ██ ██  ██ ██ ██  ██ ██ ██      ██           ██
 ██████ ██   ██ ██   ██ ██   ████ ██   ████ ███████ ███████ ███████
*/

void MainWindow::channelButtonGroupClicked(int buttonID)
{
    //funzione per il cambio di canale/bar, i buttonID partono da -2 in alto sinistra fino a -33 in basso a destra
    updateNotes();
    currentChannel = (-(buttonID+2)/8); //calcolo del canale
    currentBar = (-(buttonID+2)-(currentChannel*8));    //calcolo della bar
    channelChange = true;
    ui->instrumentBox->setCurrentText(t.getChannels()[currentChannel].instrument->getName());   //cambio solo del text dell'instrumentBox
    channelChange = false;
    //update delle luci kit/stop
    if(dynamic_cast<Kit*>(t.getChannels()[currentChannel].instrument)) {
        ui->kit_light->setChecked(true);
        toggleKits(false);
    }
    else    {
        ui->kit_light->setChecked(false);
        toggleKits(true);
    }
    if (dynamic_cast<Stoppable*>(t.getChannels()[currentChannel].instrument)) {
        ui->stop_light->setChecked(true);
        toggleStoppables(true);
    }
    else {
        ui->stop_light->setChecked(false);
        toggleStoppables(false);
    }
    loadNotes();
}

/*
███████ ███████ ██      ███████  ██████ ████████ ███████ ██████      ███    ██  ██████  ████████ ███████ ███████
██      ██      ██      ██      ██         ██    ██      ██   ██     ████   ██ ██    ██    ██    ██      ██
███████ █████   ██      █████   ██         ██    █████   ██   ██     ██ ██  ██ ██    ██    ██    █████   ███████
     ██ ██      ██      ██      ██         ██    ██      ██   ██     ██  ██ ██ ██    ██    ██    ██           ██
███████ ███████ ███████ ███████  ██████    ██    ███████ ██████      ██   ████  ██████     ██    ███████ ███████
*/

//play della nota corretta quando viene cliccato il bottone
//i buttonGroups sono raggruppati per colonne e i buttonID vanno da -2 in alto fino a -39 in basso
void MainWindow::buttonGroup0Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup1Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup2Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup3Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup4Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup5Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup6Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup7Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup8Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup9Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup10Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup11Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup12Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup13Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup14Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::buttonGroup15Clicked(int buttonID)
{
    Notes_t note = static_cast<Notes_t>(buttonID);
    t.playNote(note, currentChannel);
}

void MainWindow::pianoButtonGroupClicked(int buttonID)
{
    if(!t.isPlaying())  {
        Notes_t note = static_cast<Notes_t>(buttonID-1);
        t.playNote(note, currentChannel);
    }
}

/*
███████ ██    ██ ███    ██  ██████ ████████ ██  ██████  ███    ██ ███████
██      ██    ██ ████   ██ ██         ██    ██ ██    ██ ████   ██ ██
█████   ██    ██ ██ ██  ██ ██         ██    ██ ██    ██ ██ ██  ██ ███████
██      ██    ██ ██  ██ ██ ██         ██    ██ ██    ██ ██  ██ ██      ██
██       ██████  ██   ████  ██████    ██    ██  ██████  ██   ████ ███████
*/

//funzione di update delle note dalla UI alla Track
void MainWindow::updateNotes()
{
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[0] = static_cast<Notes_t>(ui->notes_0->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[1] = static_cast<Notes_t>(ui->notes_1->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[2] = static_cast<Notes_t>(ui->notes_2->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[3] = static_cast<Notes_t>(ui->notes_3->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[4] = static_cast<Notes_t>(ui->notes_4->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[5] = static_cast<Notes_t>(ui->notes_5->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[6] = static_cast<Notes_t>(ui->notes_6->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[7] = static_cast<Notes_t>(ui->notes_7->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[8] = static_cast<Notes_t>(ui->notes_8->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[9] = static_cast<Notes_t>(ui->notes_9->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[10] = static_cast<Notes_t>(ui->notes_10->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[11] = static_cast<Notes_t>(ui->notes_11->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[12] = static_cast<Notes_t>(ui->notes_12->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[13] = static_cast<Notes_t>(ui->notes_13->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[14] = static_cast<Notes_t>(ui->notes_14->checkedId());
    t.getChannels()[currentChannel].getBar()[currentBar].getNote()[15] = static_cast<Notes_t>(ui->notes_15->checkedId());
}

//funzione di caricamento delle note dalla Track alla UI
void MainWindow::loadNotes()
{
    ui->notes_0->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[0])->setChecked(true);
    ui->notes_1->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[1])->setChecked(true);
    ui->notes_2->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[2])->setChecked(true);
    ui->notes_3->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[3])->setChecked(true);
    ui->notes_4->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[4])->setChecked(true);
    ui->notes_5->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[5])->setChecked(true);
    ui->notes_6->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[6])->setChecked(true);
    ui->notes_7->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[7])->setChecked(true);
    ui->notes_8->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[8])->setChecked(true);
    ui->notes_9->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[9])->setChecked(true);
    ui->notes_10->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[10])->setChecked(true);
    ui->notes_11->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[11])->setChecked(true);
    ui->notes_12->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[12])->setChecked(true);
    ui->notes_13->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[13])->setChecked(true);
    ui->notes_14->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[14])->setChecked(true);
    ui->notes_15->button(t.getChannels()[currentChannel].getBar()[currentBar].getNote()[15])->setChecked(true);
}

//funzione che attiva/disattiva le note non utilizzate dai kit
void MainWindow::toggleKits(bool toggle)  {
    for (int i=-3; i>-31; i--) {
        ui->notes_0->button(i)->setEnabled(toggle);
        ui->notes_1->button(i)->setEnabled(toggle);
        ui->notes_2->button(i)->setEnabled(toggle);
        ui->notes_3->button(i)->setEnabled(toggle);
        ui->notes_4->button(i)->setEnabled(toggle);
        ui->notes_5->button(i)->setEnabled(toggle);
        ui->notes_6->button(i)->setEnabled(toggle);
        ui->notes_7->button(i)->setEnabled(toggle);
        ui->notes_8->button(i)->setEnabled(toggle);
        ui->notes_9->button(i)->setEnabled(toggle);
        ui->notes_10->button(i)->setEnabled(toggle);
        ui->notes_11->button(i)->setEnabled(toggle);
        ui->notes_12->button(i)->setEnabled(toggle);
        ui->notes_13->button(i)->setEnabled(toggle);
        ui->notes_14->button(i)->setEnabled(toggle);
        ui->notes_15->button(i)->setEnabled(toggle);
    }
}

//funzione che attiva/disattiva gli stop per gli strumenti non-stoppabili
void MainWindow::toggleStoppables(bool toggle)  {
    ui->notes_0->button(-2)->setEnabled(toggle);
    ui->notes_1->button(-2)->setEnabled(toggle);
    ui->notes_2->button(-2)->setEnabled(toggle);
    ui->notes_3->button(-2)->setEnabled(toggle);
    ui->notes_4->button(-2)->setEnabled(toggle);
    ui->notes_5->button(-2)->setEnabled(toggle);
    ui->notes_6->button(-2)->setEnabled(toggle);
    ui->notes_7->button(-2)->setEnabled(toggle);
    ui->notes_8->button(-2)->setEnabled(toggle);
    ui->notes_9->button(-2)->setEnabled(toggle);
    ui->notes_10->button(-2)->setEnabled(toggle);
    ui->notes_11->button(-2)->setEnabled(toggle);
    ui->notes_12->button(-2)->setEnabled(toggle);
    ui->notes_13->button(-2)->setEnabled(toggle);
    ui->notes_14->button(-2)->setEnabled(toggle);
    ui->notes_15->button(-2)->setEnabled(toggle);
}

//funzione di reset della bar attuale
void MainWindow::on_resetBar_triggered()
{
    ui->notes_0->button(-39)->setChecked(true);
    ui->notes_1->button(-39)->setChecked(true);
    ui->notes_2->button(-39)->setChecked(true);
    ui->notes_3->button(-39)->setChecked(true);
    ui->notes_4->button(-39)->setChecked(true);
    ui->notes_5->button(-39)->setChecked(true);
    ui->notes_6->button(-39)->setChecked(true);
    ui->notes_7->button(-39)->setChecked(true);
    ui->notes_8->button(-39)->setChecked(true);
    ui->notes_9->button(-39)->setChecked(true);
    ui->notes_10->button(-39)->setChecked(true);
    ui->notes_11->button(-39)->setChecked(true);
    ui->notes_12->button(-39)->setChecked(true);
    ui->notes_13->button(-39)->setChecked(true);
    ui->notes_14->button(-39)->setChecked(true);
    ui->notes_15->button(-39)->setChecked(true);
    t.reset(currentChannel, currentBar);
    updateNotes();
}

//funzione di reset delle note del canale attuale
void MainWindow::on_resetChannel_triggered()
{
    QMessageBox::StandardButton warning = QMessageBox::question(this, "Warning", "This will reset all the channel notes. \nContinue?", QMessageBox::Yes | QMessageBox::No);
    if(warning == QMessageBox::Yes)   {
        resetChannel();
    }
}

//funzione di reset delle note del canale attuale senza warning
void MainWindow::resetChannel() {
    ui->notes_0->button(-39)->setChecked(true);
    ui->notes_1->button(-39)->setChecked(true);
    ui->notes_2->button(-39)->setChecked(true);
    ui->notes_3->button(-39)->setChecked(true);
    ui->notes_4->button(-39)->setChecked(true);
    ui->notes_5->button(-39)->setChecked(true);
    ui->notes_6->button(-39)->setChecked(true);
    ui->notes_7->button(-39)->setChecked(true);
    ui->notes_8->button(-39)->setChecked(true);
    ui->notes_9->button(-39)->setChecked(true);
    ui->notes_10->button(-39)->setChecked(true);
    ui->notes_11->button(-39)->setChecked(true);
    ui->notes_12->button(-39)->setChecked(true);
    ui->notes_13->button(-39)->setChecked(true);
    ui->notes_14->button(-39)->setChecked(true);
    ui->notes_15->button(-39)->setChecked(true);
    t.reset(currentChannel);
    updateNotes();
}

//funzione di reset delle note di tutte le bar di tutti i canali
void MainWindow::on_resetAll_triggered()
{
    QMessageBox::StandardButton warning = QMessageBox::question(this, "Warning", "This will reset all the notes. \nContinue?", QMessageBox::Yes | QMessageBox::No);
    if(warning == QMessageBox::Yes)   {
        ui->notes_0->button(-39)->setChecked(true);
        ui->notes_1->button(-39)->setChecked(true);
        ui->notes_2->button(-39)->setChecked(true);
        ui->notes_3->button(-39)->setChecked(true);
        ui->notes_4->button(-39)->setChecked(true);
        ui->notes_5->button(-39)->setChecked(true);
        ui->notes_6->button(-39)->setChecked(true);
        ui->notes_7->button(-39)->setChecked(true);
        ui->notes_8->button(-39)->setChecked(true);
        ui->notes_9->button(-39)->setChecked(true);
        ui->notes_10->button(-39)->setChecked(true);
        ui->notes_11->button(-39)->setChecked(true);
        ui->notes_12->button(-39)->setChecked(true);
        ui->notes_13->button(-39)->setChecked(true);
        ui->notes_14->button(-39)->setChecked(true);
        ui->notes_15->button(-39)->setChecked(true);
        t.reset();
        updateNotes();
    }
}

/*
██       ██████   █████  ██████      ███████ ██   ██  █████  ███    ███ ██████  ██      ███████
██      ██    ██ ██   ██ ██   ██     ██       ██ ██  ██   ██ ████  ████ ██   ██ ██      ██
██      ██    ██ ███████ ██   ██     █████     ███   ███████ ██ ████ ██ ██████  ██      █████
██      ██    ██ ██   ██ ██   ██     ██       ██ ██  ██   ██ ██  ██  ██ ██      ██      ██
███████  ██████  ██   ██ ██████      ███████ ██   ██ ██   ██ ██      ██ ██      ███████ ███████
*/

void MainWindow::on_loadExample_triggered()
{
    //funzione di load della musica esempio "The Legend of Zelda - Main Theme" by Antonio Osele
    QMessageBox::StandardButton warning = QMessageBox::question(this, "Warning", "This will reset all the notes. \nContinue?", QMessageBox::Yes | QMessageBox::No);
    if(warning == QMessageBox::Yes)   {
        //Reset All
        ui->notes_0->button(-39)->setChecked(true);
        ui->notes_1->button(-39)->setChecked(true);
        ui->notes_2->button(-39)->setChecked(true);
        ui->notes_3->button(-39)->setChecked(true);
        ui->notes_4->button(-39)->setChecked(true);
        ui->notes_5->button(-39)->setChecked(true);
        ui->notes_6->button(-39)->setChecked(true);
        ui->notes_7->button(-39)->setChecked(true);
        ui->notes_8->button(-39)->setChecked(true);
        ui->notes_9->button(-39)->setChecked(true);
        ui->notes_10->button(-39)->setChecked(true);
        ui->notes_11->button(-39)->setChecked(true);
        ui->notes_12->button(-39)->setChecked(true);
        ui->notes_13->button(-39)->setChecked(true);
        ui->notes_14->button(-39)->setChecked(true);
        ui->notes_15->button(-39)->setChecked(true);
        t.reset();
        //Select Instrument
        t.getChannels()[0].instrument = instrumentList_[2];
        t.getChannels()[1].instrument = instrumentList_[1];
        t.getChannels()[2].instrument = instrumentList_[5];
        t.getChannels()[3].instrument = instrumentList_[8];
        channelChange = true;
        ui->instrumentBox->setCurrentText(t.getChannels()[currentChannel].instrument->getName());
        channelChange = false;
        //Set volumes
        ui->volumeSlider->setValue(80);
        ui->channelVolume1->setValue(75);
        t.getChannels()[0].instrument->setVolume(60);
        ui->channelVolume2->setValue(60);
        t.getChannels()[1].instrument->setVolume(48);
        ui->channelVolume3->setValue(90);
        t.getChannels()[2].instrument->setVolume(72);
        ui->channelVolume4->setValue(100);
        t.getChannels()[3].instrument->setVolume(100);
        //Unmute
        ui->muted1->setChecked(false);
        t.getChannels()[0].instrument->setMuted(false);
        ui->muted2->setChecked(false);
        t.getChannels()[1].instrument->setMuted(false);
        ui->muted3->setChecked(false);
        t.getChannels()[2].instrument->setMuted(false);
        ui->muted4->setChecked(false);
        t.getChannels()[3].instrument->setMuted(false);
        //Set Tempo
        ui->tempoSlider->setValue(120);
        t.setTempo(120);
        //Set lights
        if(dynamic_cast<Kit*>(t.getChannels()[currentChannel].instrument)) {
            ui->kit_light->setChecked(true);
            toggleKits(false);
        }
        else    {
            ui->kit_light->setChecked(false);
            toggleKits(true);
        }
        if (dynamic_cast<Stoppable*>(t.getChannels()[currentChannel].instrument)) {
            ui->stop_light->setChecked(true);
            toggleStoppables(true);
        }
        else {
            ui->stop_light->setChecked(false);
            toggleStoppables(false);
        }

        //Channel 1
        t.setNote(0,0,0,As5);
        t.setNote(0,0,4,F4);
        t.setNote(0,0,10,As5);
        t.setNote(0,0,12,As5);
        t.setNote(0,0,13,C5);
        t.setNote(0,0,14,D5);
        t.setNote(0,0,15,Ds5);
        t.setNote(0,1,0,F5);
        t.setNote(0,1,8,STOP);
        t.setNote(0,1,10,F5);
        t.setNote(0,1,12,F5);
        t.setNote(0,1,14,Fs5);
        t.setNote(0,1,15,Gs5);
        t.setNote(0,2,0,As6);
        t.setNote(0,2,9,STOP);
        t.setNote(0,2,11,As6);
        t.setNote(0,2,12,As6);
        t.setNote(0,2,14,Gs5);
        t.setNote(0,2,15,Fs5);
        t.setNote(0,3,0,Gs5);
        t.setNote(0,3,3,Fs5);
        t.setNote(0,3,4,F5);
        t.setNote(0,3,12,F5);
        t.setNote(0,4,0,Ds5);
        t.setNote(0,4,2,Ds5);
        t.setNote(0,4,3,F5);
        t.setNote(0,4,4,Fs5);
        t.setNote(0,4,12,F5);
        t.setNote(0,4,14,Ds5);
        t.setNote(0,5,0,Cs5);
        t.setNote(0,5,2,Cs5);
        t.setNote(0,5,3,Ds5);
        t.setNote(0,5,4,F5);
        t.setNote(0,5,12,Ds5);
        t.setNote(0,5,14,Cs5);
        t.setNote(0,6,0,C5);
        t.setNote(0,6,2,C5);
        t.setNote(0,6,3,D5);
        t.setNote(0,6,4,E5);
        t.setNote(0,6,12,G5);
        t.setNote(0,7,0,F5);
        t.setNote(0,7,2,F4);
        t.setNote(0,7,3,F4);
        t.setNote(0,7,4,F4);
        t.setNote(0,7,6,F4);
        t.setNote(0,7,7,F4);
        t.setNote(0,7,8,F4);
        t.setNote(0,7,10,F4);
        t.setNote(0,7,11,F4);
        t.setNote(0,7,12,F4);
        t.setNote(0,7,14,F4);

        //Channel 2
        t.setNote(1,0,0,D4);
        t.setNote(1,0,4,D4);
        t.setNote(1,0,6,D4);
        t.setNote(1,0,7,C4);
        t.setNote(1,0,8,D4);
        t.setNote(1,0,11,D4);
        t.setNote(1,0,12,D4);
        t.setNote(1,0,13,Ds4);
        t.setNote(1,0,14,F4);
        t.setNote(1,0,15,G4);
        t.setNote(1,1,0,Gs4);
        t.setNote(1,1,3,As5);
        t.setNote(1,1,4,As5);
        t.setNote(1,1,5,C5);
        t.setNote(1,1,6,D5);
        t.setNote(1,1,7,Ds5);
        t.setNote(1,1,8,F5);
        t.setNote(1,1,12,Gs4);
        t.setNote(1,1,14,As5);
        t.setNote(1,1,15,C5);
        t.setNote(1,2,0,Cs4);
        t.setNote(1,2,3,Fs4);
        t.setNote(1,2,4,Fs4);
        t.setNote(1,2,5,Gs4);
        t.setNote(1,2,6,As5);
        t.setNote(1,2,7,C5);
        t.setNote(1,2,8,Cs5);
        t.setNote(1,2,10,Cs5);
        t.setNote(1,2,12,Cs5);
        t.setNote(1,2,14,C5);
        t.setNote(1,2,15,As5);
        t.setNote(1,3,0,Cs5);
        t.setNote(1,3,3,Gs4);
        t.setNote(1,3,4,Gs4);
        t.setNote(1,3,6,Gs4);
        t.setNote(1,3,7,Fs4);
        t.setNote(1,3,8,Gs4);
        t.setNote(1,3,11,Gs4);
        t.setNote(1,3,12,Gs4);
        t.setNote(1,3,14,Fs4);
        t.setNote(1,3,15,Gs4);
        t.setNote(1,4,0,Fs4);
        t.setNote(1,4,2,Fs4);
        t.setNote(1,4,3,F4);
        t.setNote(1,4,4,Fs4);
        t.setNote(1,4,6,Fs4);
        t.setNote(1,4,7,Gs4);
        t.setNote(1,4,8,As5);
        t.setNote(1,4,12,Gs4);
        t.setNote(1,4,14,Fs4);
        t.setNote(1,5,0,F4);
        t.setNote(1,5,2,F4);
        t.setNote(1,5,3,Ds4);
        t.setNote(1,5,4,F4);
        t.setNote(1,5,6,F4);
        t.setNote(1,5,7,Fs4);
        t.setNote(1,5,8,Gs4);
        t.setNote(1,5,12,Fs4);
        t.setNote(1,5,14, F4);
        t.setNote(1,6,0,E4);
        t.setNote(1,6,4,E4);
        t.setNote(1,6,6,E4);
        t.setNote(1,6,7,F4);
        t.setNote(1,6,8,G4);
        t.setNote(1,6,10,G4);
        t.setNote(1,6,11,A5);
        t.setNote(1,6,12,As5);
        t.setNote(1,6,14,C5);
        t.setNote(1,7,0,A5);
        t.setNote(1,7,2,A4);
        t.setNote(1,7,3,A4);
        t.setNote(1,7,4,A4);
        t.setNote(1,7,6,A4);
        t.setNote(1,7,7,A4);
        t.setNote(1,7,8,A4);
        t.setNote(1,7,10,A4);
        t.setNote(1,7,11,A4);
        t.setNote(1,7,12,A4);
        t.setNote(1,7,14,A4);

        //Channel 3
        t.setNote(2,0,0,As4);
        t.setNote(2,1,0,Gs3);
        t.setNote(2,2,0,Fs3);
        t.setNote(2,3,0,Cs4);
        t.setNote(2,4,0,B4);
        t.setNote(2,5,0,As4);
        t.setNote(2,6,0,C4);
        t.setNote(2,7,0,F4);

        //Channel 4
        t.setNote(3,0,0,C3);
        t.setNote(3,0,4,D3);
        t.setNote(3,0,6,C3);
        t.setNote(3,0,7,C3);
        t.setNote(3,0,8,C3);
        t.setNote(3,0,12,D3);
        t.setNote(3,1,0,C3);
        t.setNote(3,1,4,D3);
        t.setNote(3,1,6,C3);
        t.setNote(3,1,7,C3);
        t.setNote(3,1,8,C3);
        t.setNote(3,1,12,D3);
        t.setNote(3,2,0,C3);
        t.setNote(3,2,4,D3);
        t.setNote(3,2,6,C3);
        t.setNote(3,2,7,C3);
        t.setNote(3,2,8,C3);
        t.setNote(3,2,12,D3);
        t.setNote(3,3,0,C3);
        t.setNote(3,3,4,D3);
        t.setNote(3,3,6,C3);
        t.setNote(3,3,7,C3);
        t.setNote(3,3,8,C3);
        t.setNote(3,3,12,D3);
        t.setNote(3,4,0,C3);
        t.setNote(3,4,4,D3);
        t.setNote(3,4,6,C3);
        t.setNote(3,4,7,C3);
        t.setNote(3,4,8,C3);
        t.setNote(3,4,12,D3);
        t.setNote(3,5,0,C3);
        t.setNote(3,5,4,D3);
        t.setNote(3,5,6,C3);
        t.setNote(3,5,7,C3);
        t.setNote(3,5,8,C3);
        t.setNote(3,5,12,D3);
        t.setNote(3,6,0,C3);
        t.setNote(3,6,4,D3);
        t.setNote(3,6,6,C3);
        t.setNote(3,6,7,C3);
        t.setNote(3,6,8,C3);
        t.setNote(3,6,12,D3);
        t.setNote(3,7,0,C3);
        t.setNote(3,7,4,D3);
        t.setNote(3,7,6,C3);
        t.setNote(3,7,7,C3);
        t.setNote(3,7,8,C3);
        t.setNote(3,7,12,D3);

        loadNotes();
    }
}
