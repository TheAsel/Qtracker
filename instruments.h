#ifndef INSTRUMENTS_H
#define INSTRUMENTS_H

#include <QUrl>
#include <QMediaPlayer>

#include "container.h"


enum Notes_t {

    EMPTY = -39,
    C3 = -38, Cs3 = -37, D3 = -36, Ds3 = -35, E3 = -34, F3 = -33, Fs3 = -32, G3 = -31, Gs3 = -30, A4 = -29, As4 = -28, B4 = -27,
    C4 = -26, Cs4 = -25, D4 = -24, Ds4 = -23, E4 = -22, F4 = -21, Fs4 = -20, G4 = -19, Gs4 = -18, A5 = -17, As5 = -16, B5 = -15,
    C5 = -14, Cs5 = -13, D5 = -12, Ds5 = -11, E5 = -10, F5 = -9, Fs5 = -8, G5 = -7, Gs5 = -6, A6 = -5, As6 = -4, B6 = -3,
    STOP = -2
};

class Instruments{
protected:
    cnt::container<QUrl> path;
    QMediaPlayer* instrumentPlayer;
    QString name;

public:
    Instruments(): path(8), instrumentPlayer(new QMediaPlayer), name(""){
        for(int i=0; i<8; i++)
        {
            path.push_back(QUrl(""));
        }
    }

    Instruments(const Instruments& other): path(other.path), instrumentPlayer(new QMediaPlayer(other.instrumentPlayer)) ,name(other.name){}

    virtual ~Instruments(){
        delete instrumentPlayer;
    }

    virtual void setPath(QUrl newPath, int);

    virtual QUrl& getPath();

    virtual void setVolume(int volume);

    virtual void setMuted(bool muted);

    virtual Instruments& operator=(const Instruments& inst);

    virtual void play(float pitch, Notes_t sample);

    virtual void stop();

    void setName(QString newName);

    QString getName();
};



class Kit: virtual public Instruments {
private:
    cnt::container<int> volume;
protected:

    QMediaPlayer* instrumentPlayer1;

    QMediaPlayer* instrumentPlayer2;

    QMediaPlayer* instrumentPlayer3;

    QMediaPlayer* instrumentPlayer4;

    QMediaPlayer* instrumentPlayer5;

    QMediaPlayer* instrumentPlayer6;

    QMediaPlayer* instrumentPlayer7;


public:

    Kit(): volume(8), instrumentPlayer1(new QMediaPlayer), instrumentPlayer2(new QMediaPlayer), instrumentPlayer3(new QMediaPlayer), instrumentPlayer4(new QMediaPlayer), instrumentPlayer5(new QMediaPlayer), instrumentPlayer6(new QMediaPlayer), instrumentPlayer7(new QMediaPlayer){}

    ~Kit() {
        delete instrumentPlayer1;
        delete instrumentPlayer2;
        delete instrumentPlayer3;
        delete instrumentPlayer4;
        delete instrumentPlayer5;
        delete instrumentPlayer6;
        delete instrumentPlayer7;
    }

    virtual void play(float, Notes_t sample);

    virtual void setPath(QUrl newPath, int sampleNum);

    virtual void setVolume(int volume);

    virtual void setMuted(bool muted);
};

class Stoppable: virtual public Instruments{
public:

    ~Stoppable() = default;

    virtual void stop();

};

class StoppableKit: public Stoppable, public Kit{
public:
    void stop();

    ~StoppableKit() = default;

};

#endif // INSTRUMENTS_H
