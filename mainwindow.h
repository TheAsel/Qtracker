#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFontDatabase>
#include <QFont>

#include "sequencer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(cnt::container<Instruments*> instrumentList, cnt::container<Instruments*>::customiterator it, QWidget *parent = nullptr);
    ~MainWindow();
    Track t;

private slots:

    void timerSlot();

    //CONTROL PANEL

    void on_play_button_clicked();

    void on_stop_button_clicked();

    void on_prev_button_clicked();

    void on_next_button_clicked();

    void on_volumeSlider_valueChanged(int value);

    void on_volumeSpinBox_valueChanged(int arg1);

    void on_tempoSlider_valueChanged(int value);

    void on_tempoSpinBox_valueChanged(int arg1);

    void on_instrumentBox_currentTextChanged(const QString &arg1);

    //MUTE

    void on_muted1_stateChanged(int state);

    void on_muted2_stateChanged(int state);

    void on_muted3_stateChanged(int state);

    void on_muted4_stateChanged(int state);

    //VOLUMES

    void on_channelVolume1_valueChanged(int value);

    void on_channelVolume2_valueChanged(int value);

    void on_channelVolume3_valueChanged(int value);

    void on_channelVolume4_valueChanged(int value);

    //SELECTED NOTES

    void buttonGroup0Clicked(int buttonID);

    void buttonGroup1Clicked(int buttonID);

    void buttonGroup2Clicked(int buttonID);

    void buttonGroup3Clicked(int buttonID);

    void buttonGroup4Clicked(int buttonID);

    void buttonGroup5Clicked(int buttonID);

    void buttonGroup6Clicked(int buttonID);

    void buttonGroup7Clicked(int buttonID);

    void buttonGroup8Clicked(int buttonID);

    void buttonGroup9Clicked(int buttonID);

    void buttonGroup10Clicked(int buttonID);

    void buttonGroup11Clicked(int buttonID);

    void buttonGroup12Clicked(int buttonID);

    void buttonGroup13Clicked(int buttonID);

    void buttonGroup14Clicked(int buttonID);

    void buttonGroup15Clicked(int buttonID);

    void pianoButtonGroupClicked(int buttonID);

    void channelButtonGroupClicked(int buttonID);

    //FUNCTIONS

    void updateNotes();

    void loadNotes();

    void toggleKits(bool toggle);

    void toggleStoppables(bool toggle);

    void on_resetBar_triggered();

    void on_resetChannel_triggered();

    void on_resetAll_triggered();

    void resetChannel();

    //LOAD EXAMPLE

    void on_loadExample_triggered();

private:
    Ui::MainWindow *ui;

    int progress = 0;
    int progress_2 = 0;
    int startBar = 0;
    int currentBar = 0;
    int currentChannel = 0;
    bool channelChange = false; //blocca esecuzione di on_instrumentBox_currentTextChanged quando necessario
    cnt::container<Instruments*> instrumentList_;
};

#endif // MAINWINDOW_H
