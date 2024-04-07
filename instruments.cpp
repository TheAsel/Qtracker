#include "instruments.h"


//funzioni di Instruments

void Instruments::setPath(QUrl newPath, int) {
    path[0]=newPath;
    instrumentPlayer->setMedia(path[0]);
}

QUrl& Instruments::getPath(){
    return path[0];
}

void Instruments::setVolume(int volume) {
    instrumentPlayer->setVolume(volume);
}

void Instruments::setMuted(bool muted) {
    instrumentPlayer->setMuted(muted);
}

Instruments& Instruments::operator=(const Instruments& inst){
    path=inst.path;
    delete [] instrumentPlayer;
    instrumentPlayer=inst.instrumentPlayer;
    return *this;
}

void Instruments::play(float pitch, Notes_t){
    instrumentPlayer->stop();
    instrumentPlayer->setPlaybackRate(pitch);
    instrumentPlayer->play();
}

void Instruments::stop() {
    instrumentPlayer->stop();
}

void Instruments::setName(QString newName){
    name=newName;
}

QString Instruments::getName(){
    return name;
}

//Funzioni di Kit

void Kit::play(float, Notes_t sample){
    if(sample+39>=1 && sample+39<=8)
    {
        switch (sample+39) {

        case 1:
            instrumentPlayer->stop();
            instrumentPlayer->play();
            break;

        case 2:
            instrumentPlayer1->stop();
            instrumentPlayer1->play();
            break;

        case 3:
            instrumentPlayer2->stop();
            instrumentPlayer2->play();
            break;

        case 4:
            instrumentPlayer3->stop();
            instrumentPlayer3->play();
            break;

        case 5:
            instrumentPlayer4->stop();
            instrumentPlayer4->play();
            break;

        case 6:
            instrumentPlayer5->stop();
            instrumentPlayer5->play();
            break;

        case 7:
            instrumentPlayer6->stop();
            instrumentPlayer6->play();
            break;

        case 8:
            instrumentPlayer7->stop();
            instrumentPlayer7->play();
            break;

        }
    }
}

void Kit::setPath(QUrl newPath, int sampleNum){
    if(sampleNum>=1 && sampleNum<=8)
    {
        path[sampleNum-1]=newPath;
        switch (sampleNum) {

        case 1:
            instrumentPlayer->setMedia(path[sampleNum-1]);
            break;

        case 2:
            instrumentPlayer1->setMedia(path[sampleNum-1]);
            break;

        case 3:
            instrumentPlayer2->setMedia(path[sampleNum-1]);
            break;

        case 4:
            instrumentPlayer3->setMedia(path[sampleNum-1]);
            break;

        case 5:
            instrumentPlayer4->setMedia(path[sampleNum-1]);
            break;

        case 6:
            instrumentPlayer5->setMedia(path[sampleNum-1]);
            break;

        case 7:
            instrumentPlayer6->setMedia(path[sampleNum-1]);
            break;

        case 8:
            instrumentPlayer7->setMedia(path[sampleNum-1]);
            break;

        }
    }
}

void Kit::setVolume(int volume) {
    instrumentPlayer->setVolume(volume);
    instrumentPlayer1->setVolume(volume);
    instrumentPlayer2->setVolume(volume);
    instrumentPlayer3->setVolume(volume);
    instrumentPlayer4->setVolume(volume);
    instrumentPlayer5->setVolume(volume);
    instrumentPlayer6->setVolume(volume);
    instrumentPlayer7->setVolume(volume);
}

void Kit::setMuted(bool muted) {
    instrumentPlayer->setMuted(muted);
    instrumentPlayer1->setMuted(muted);
    instrumentPlayer2->setMuted(muted);
    instrumentPlayer3->setMuted(muted);
    instrumentPlayer4->setMuted(muted);
    instrumentPlayer5->setMuted(muted);
    instrumentPlayer6->setMuted(muted);
    instrumentPlayer7->setMuted(muted);
}

//Funzioni di Stoppable

void Stoppable::stop(){
    instrumentPlayer->stop();
}

//Funzioni di StoppableKit

void StoppableKit::stop(){
    instrumentPlayer->stop();
    instrumentPlayer1->stop();
    instrumentPlayer2->stop();
    instrumentPlayer3->stop();
    instrumentPlayer4->stop();
    instrumentPlayer5->stop();
    instrumentPlayer6->stop();
    instrumentPlayer7->stop();
}
