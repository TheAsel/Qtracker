#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cnt::container<Instruments*> instrumentList;
    cnt::container<Instruments*>::customiterator it;

    //inizializzazione degli strumenti

    Instruments* Piano = new Instruments;
    Piano->setPath(QUrl("qrc:/progect_resources/samples/Piano.wav"),0);
    Piano->setName("Piano");

    Instruments* Square = new Stoppable;
    Square->setPath(QUrl("qrc:/progect_resources/samples/Squarewave.wav"),0);
    Square->setName("Squarewave");

    Instruments* Pulse25 = new Stoppable;
    Pulse25->setPath(QUrl("qrc:/progect_resources/samples/Pulsewave25.wav"),0);
    Pulse25->setName("Pulsewave 25%");

    Instruments* Pulse12_5 = new Stoppable;
    Pulse12_5->setPath(QUrl("qrc:/progect_resources/samples/Pulsewave12,5.wav"),0);
    Pulse12_5->setName("Pulsewave 12,5%");

    Instruments* Sine = new Stoppable;
    Sine->setPath(QUrl("qrc:/progect_resources/samples/Sinewave.wav"),0);
    Sine->setName("Sinewave");

    Instruments* Triangle = new Stoppable;
    Triangle->setPath(QUrl("qrc:/progect_resources/samples/Trianglewave.wav"),0);
    Triangle->setName("Trianglewave");

    Instruments* Saw = new Stoppable;
    Saw->setPath(QUrl("qrc:/progect_resources/samples/Sawwave.wav"),0);
    Saw->setName("Sawwave");

    Instruments* Noise = new Stoppable;
    Noise->setPath(QUrl("qrc:/progect_resources/samples/Noise.wav"),0);
    Noise->setName("Noise");

    Instruments* drumKit = new Kit;
    drumKit->setPath(QUrl("qrc:/progect_resources/samples/Kick.wav"), 1);
    drumKit->setPath(QUrl("qrc:/progect_resources/samples/Snare.wav"), 2);
    drumKit->setPath(QUrl("qrc:/progect_resources/samples/Hat.wav"), 3);
    drumKit->setPath(QUrl("qrc:/progect_resources/samples/Ride.wav"), 4);
    drumKit->setPath(QUrl("qrc:/progect_resources/samples/perc1.wav"), 5);
    drumKit->setPath(QUrl("qrc:/progect_resources/samples/perc2.wav"), 6);
    drumKit->setPath(QUrl("qrc:/progect_resources/samples/perc3.wav"), 7);
    drumKit->setPath(QUrl("qrc:/progect_resources/samples/perc4.wav"), 8);
    drumKit->setName("Drum Kit");

    Instruments* Bells = new StoppableKit;
    Bells->setPath(QUrl("qrc:/progect_resources/samples/Chinese_Gong.wav"), 1);
    Bells->setPath(QUrl("qrc:/progect_resources/samples/Indian_Bell.wav"), 2);
    Bells->setPath(QUrl("qrc:/progect_resources/samples/Japanese_Bell.wav"), 3);
    Bells->setPath(QUrl("qrc:/progect_resources/samples/Metal_Gong.wav"), 4);
    Bells->setPath(QUrl("qrc:/progect_resources/samples/Temple_Bell_Big.wav"), 5);
    Bells->setPath(QUrl("qrc:/progect_resources/samples/Temple_Bell.wav"), 6);
    Bells->setPath(QUrl("qrc:/progect_resources/samples/Zen_Bell_Big.wav"), 7);
    Bells->setPath(QUrl("qrc:/progect_resources/samples/Zen_Bell.wav"), 8);
    Bells->setName("Bells and Gongs");

    //inserimento nel container degli strumenti, scorribile tramite iteratore
    instrumentList.push_back(Piano);
    instrumentList.push_back(Square);
    instrumentList.push_back(Pulse25);
    instrumentList.push_back(Pulse12_5);
    instrumentList.push_back(Sine);
    instrumentList.push_back(Triangle);
    instrumentList.push_back(Saw);
    instrumentList.push_back(Noise);
    instrumentList.push_back(drumKit);
    instrumentList.push_back(Bells);


    MainWindow w(instrumentList, it);

    //creazione dei 4 canali e 8 bar ciascuno
    for(int i=0; i<4;i++)
    {
        w.t.addChannel();
        for(int j=0; j<8; j++)
        {
            w.t.getChannels()[i].addBar();
        }
    }

    w.t.getChannels()[0].instrument = instrumentList[0];
    w.t.getChannels()[1].instrument = instrumentList[1];
    w.t.getChannels()[2].instrument = instrumentList[2];
    w.t.getChannels()[3].instrument = instrumentList[3];


    w.show();
    int result =0;
    result = a.exec();


    bool isInUse=false;
    for(it=instrumentList.begin(); it<instrumentList.end(); it++)
    {
        isInUse = false;
        for(int j=0; j<4 && isInUse == false; j++)
        {
            if((*it)->getName()==w.t.getChannels()[j].instrument->getName())
            {
                isInUse=true;
            }
        }
        if(!isInUse)
        {
            delete *it;
        }
    }

    return result;
}
