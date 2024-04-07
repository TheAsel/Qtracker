#include "sequencer.h"

//funzioni di Track

//funzione di start del timer che e' connesso a playSequence
void Track::start(){
    if(!playing)
    {
        trackTimer->start(15000/tempo);
        playing=true;
    }
}

cnt::container<Track::channel>& Track::getChannels(){
    return channels;
}

void Track::setTempo(int temp){
    tempo=temp;
}

void Track::addChannel(){
    channel temp;
    channels.push_back(temp);
}

bool Track::isPlaying(){
    return playing;
}

void Track::setStartSection(int section){
    if(section >= 0 && section <= 7)
    {
        sectionNum = section;
    }
}

//funzione di stop
void Track::stop(){
    trackTimer->stop();
    for(int i=0; i<channels.getSize(); i++)
    {
        channels[i].instrument->stop();
    }
    playing = false;
    sectionNum=0;
    noteNum=0;
}

//funzione di play principale
void Track::playSequence(){
    for(int i=0; i<channels.getSize(); i++)
    {
        Notes_t note = channels[i].bar_[sectionNum].notes[noteNum];

        switch(note){
            case C3:
                channels[i].instrument->play(130.81/440, note);

            break;

            case Cs3:
                channels[i].instrument->play(138.59/440, note);

            break;

            case D3:
                channels[i].instrument->play(146.83/440, note);

            break;

            case Ds3:
                channels[i].instrument->play(155.56/440, note);

            break;

            case E3:
                channels[i].instrument->play(164.81/440, note);

            break;

            case F3:
                channels[i].instrument->play(174.61/440, note);

            break;

            case Fs3:
                channels[i].instrument->play(185.00/440, note);

            break;

            case G3:
                channels[i].instrument->play(196.00/440, note);

            break;

            case Gs3:
                channels[i].instrument->play(207.65/440, note);

            break;

            case A4:
                channels[i].instrument->play(220.00/440, note);

            break;

            case As4:
                channels[i].instrument->play(233.08/440, note);

            break;

            case B4:
                channels[i].instrument->play(246.94/440, note);

            break;

            case C4:
                channels[i].instrument->play(261.63/440, note);

            break;

            case Cs4:
                channels[i].instrument->play(277.18/440, note);

            break;

            case D4:
                channels[i].instrument->play(293.66/440, note);

            break;

            case Ds4:
                channels[i].instrument->play(311.13/440, note);

            break;

            case E4:
                channels[i].instrument->play(329.63/440, note);

            break;

            case F4:
                channels[i].instrument->play(349.23/440, note);

            break;

            case Fs4:
                channels[i].instrument->play(369.99/440, note);

            break;

            case G4:
                channels[i].instrument->play(392.00/440, note);

            break;

            case Gs4:
                channels[i].instrument->play(415.30/440, note);

            break;

            case A5:
                channels[i].instrument->play(440/440, note);

            break;

            case As5:
                channels[i].instrument->play(466.16/440, note);

            break;

            case B5:
                channels[i].instrument->play(493.88/440, note);

            break;

            case C5:
                channels[i].instrument->play(523.25/440, note);

            break;

            case Cs5:
                channels[i].instrument->play(554.37/440, note);

            break;

            case D5:
                channels[i].instrument->play(587.33/440, note);

            break;

            case Ds5:
                channels[i].instrument->play(622.25/440, note);

            break;

            case E5:
                channels[i].instrument->play(659.25/440, note);

            break;

            case F5:
                channels[i].instrument->play(698.46/440, note);

            break;

            case Fs5:
                channels[i].instrument->play(739.99/440, note);

            break;

            case G5:
                channels[i].instrument->play(783.99/440, note);

            break;

            case Gs5:
                channels[i].instrument->play(830.61/440, note);

            break;

            case A6:
                channels[i].instrument->play(880.00/440, note);

            break;

            case As6:
                channels[i].instrument->play(932.33/440, note);

            break;

            case B6:
                channels[i].instrument->play(987.77/440, note);

            break;

            case EMPTY:
                //channels[i].instrument->stop();
            break;

            case STOP:
                if(dynamic_cast<Stoppable*>(channels[i].instrument)!=nullptr)
                {
                    dynamic_cast<Stoppable*>(channels[i].instrument)->stop();
                }
            break;
        }

    }
    if(noteNum==15)
    {
        sectionNum++;
        noteNum=0;
    }
    else
    {
        noteNum++;
    }

    if(sectionNum==8)
    {
        sectionNum=0;
    }
}

//funzione di play delle note quando vengono cliccate
void Track::playNote(Notes_t note, int i)  {
    switch(note){
        case C3: {
            auto x = channels[i].instrument;
            x->play(3, note);
            channels[i].instrument->play(130.81/440, note);

        break;

        }case Cs3:
            channels[i].instrument->play(138.59/440, note);

        break;

        case D3:
            channels[i].instrument->play(146.83/440, note);

        break;

        case Ds3:
            channels[i].instrument->play(155.56/440, note);

        break;

        case E3:
            channels[i].instrument->play(164.81/440, note);

        break;

        case F3:
            channels[i].instrument->play(174.61/440, note);

        break;

        case Fs3:
            channels[i].instrument->play(185.00/440, note);

        break;

        case G3:
            channels[i].instrument->play(196.00/440, note);

        break;

        case Gs3:
            channels[i].instrument->play(207.65/440, note);

        break;

        case A4:
            channels[i].instrument->play(220.00/440, note);

        break;

        case As4:
            channels[i].instrument->play(233.08/440, note);

        break;

        case B4:
            channels[i].instrument->play(246.94/440, note);

        break;

        case C4:
            channels[i].instrument->play(261.63/440, note);

        break;

        case Cs4:
            channels[i].instrument->play(277.18/440, note);

        break;

        case D4:
            channels[i].instrument->play(293.66/440, note);

        break;

        case Ds4:
            channels[i].instrument->play(311.13/440, note);

        break;

        case E4:
            channels[i].instrument->play(329.63/440, note);

        break;

        case F4:
            channels[i].instrument->play(349.23/440, note);

        break;

        case Fs4:
            channels[i].instrument->play(369.99/440, note);

        break;

        case G4:
            channels[i].instrument->play(392.00/440, note);

        break;

        case Gs4:
            channels[i].instrument->play(415.30/440, note);

        break;

        case A5:
            channels[i].instrument->play(440/440, note);

        break;

        case As5:
            channels[i].instrument->play(466.16/440, note);

        break;

        case B5:
            channels[i].instrument->play(493.88/440, note);

        break;

        case C5:
            channels[i].instrument->play(523.25/440, note);

        break;

        case Cs5:
            channels[i].instrument->play(554.37/440, note);

        break;

        case D5:
            channels[i].instrument->play(587.33/440, note);

        break;

        case Ds5:
            channels[i].instrument->play(622.25/440, note);

        break;

        case E5:
            channels[i].instrument->play(659.25/440, note);

        break;

        case F5:
            channels[i].instrument->play(698.46/440, note);

        break;

        case Fs5:
            channels[i].instrument->play(739.99/440, note);

        break;

        case G5:
            channels[i].instrument->play(783.99/440, note);

        break;

        case Gs5:
            channels[i].instrument->play(830.61/440, note);

        break;

        case A6:
            channels[i].instrument->play(880.00/440, note);

        break;

        case As6:
            channels[i].instrument->play(932.33/440, note);

        break;

        case B6:
            channels[i].instrument->play(987.77/440, note);

        break;

        case EMPTY:

        break;

        case STOP:

        break;
    }
    QTimer::singleShot(300, [=](){
        channels[i].instrument->stop();
    });
}

void Track::setNote(int channel, int bar, int note, Notes_t pitch) {
    channels[channel].bar_[bar].notes[note]=pitch;
}

void Track::reset() {
    for (int i=0; i<4; i++)    {
        for (int j=0; j<8; j++) {
            for (int k=0; k<16; k++)    {
                channels[i].bar_[j].notes[k]=EMPTY;
            }
        }
    }
}

void Track::reset(int channel) {
    for (int j=0; j<8; j++) {
        for (int k=0; k<16; k++)    {
            channels[channel].bar_[j].notes[k]=EMPTY;
        }
    }
}

void Track::reset(int channel, int bar) {
    for (int i=0; i<16; i++)    {
        channels[channel].bar_[bar].notes[i]=EMPTY;
    }
}

//funzioni di bar

cnt::container<Notes_t>& Track::bar::getNote(){
    return notes;
}

void Track::bar::addNote(Notes_t note){
    notes.push_back(note);
}

//funzioni di channel

cnt::container<Track::bar>& Track::channel::getBar(){
    return bar_;
}

void Track::channel::addBar(){
    bar temp;
    bar_.push_back(temp);
}

