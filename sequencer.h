#ifndef SEQUENCER_H
#define SEQUENCER_H

#include <QTimer>

#include "container.h"
#include "instruments.h"

class Track: public QObject{
Q_OBJECT
private:
    class bar{
    public:
        ~bar() = default;
        cnt::container<Notes_t> notes;

        bar(): notes(16){
            for(int i=0; i<16; i++)
            {
                notes.push_back(EMPTY);
            }

        }

        cnt::container<Notes_t>& getNote();

        void addNote(Notes_t note);

    };

    class channel{
    public:

        cnt::container<bar> bar_;
        Instruments* instrument;

        channel(int numOfBars): bar_(numOfBars), instrument(nullptr) {}
        channel(): bar_(8), instrument(nullptr){}
        channel(const channel& oldChan): bar_(oldChan.bar_), instrument(new Instruments(*oldChan.instrument)) {}

        ~channel(){
            delete instrument;
        }

        cnt::container<bar>& getBar();

        void addBar();
    };


    cnt::container<channel> channels;
    int tempo;
    int volume;

    int noteNum;
    int sectionNum;

    bool playing;

public:
    friend class bar;
    QTimer* trackTimer;

    Track(int temp): channels(), tempo(temp), volume(100), noteNum(0), sectionNum(0), playing(false), trackTimer(new QTimer(this)){
                connect(trackTimer, SIGNAL(timeout()), this, SLOT(playSequence()));
    }
    Track(): channels(4),tempo(120),volume(100),noteNum(0),sectionNum(0), playing(false), trackTimer(new QTimer(this)){
                connect(trackTimer, SIGNAL(timeout()), this, SLOT(playSequence()));
    }
    ~Track(){
        delete trackTimer;
    }

    void start();

    cnt::container<channel>& getChannels();

    void setTempo(int temp);

    void stop();

    void addChannel();

    bool isPlaying();

    void setStartSection(int section);

    void playNote(Notes_t note, int i);

    void setNote(int channel, int bar, int note, Notes_t pitch);

    void reset ();

    void reset(int channel);

    void reset(int channel, int bar);

public slots:
    void playSequence();
};

#endif // SEQUENCER_H
