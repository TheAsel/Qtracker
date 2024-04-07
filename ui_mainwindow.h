#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *resetBar;
    QAction *resetAll;
    QAction *resetChannel;
    QAction *loadExample;
    QWidget *centralwidget;
    QGroupBox *trackControlPanel;
    QGridLayout *controlPanel_2;
    QLabel *label_volume;
    QSpinBox *volumeSpinBox;
    QSlider *tempoSlider;
    QLabel *label_tempo;
    QSpinBox *tempoSpinBox;
    QSlider *volumeSlider;
    QPushButton *stop_button;
    QPushButton *play_button;
    QPushButton *prev_button;
    QPushButton *next_button;
    QLabel *piano;
    QSlider *progress;
    QSlider *progress_2;
    QWidget *layoutWidget2;
    QFormLayout *formLayout;
    QPushButton *pushButton_36;
    QPushButton *pushButton_35;
    QPushButton *pushButton_34;
    QPushButton *pushButton_33;
    QPushButton *pushButton_32;
    QPushButton *pushButton_31;
    QPushButton *pushButton_30;
    QPushButton *pushButton_29;
    QPushButton *pushButton_28;
    QPushButton *pushButton_27;
    QPushButton *pushButton_26;
    QPushButton *pushButton_25;
    QPushButton *pushButton_24;
    QPushButton *pushButton_23;
    QPushButton *pushButton_22;
    QPushButton *pushButton_21;
    QPushButton *pushButton_20;
    QPushButton *pushButton_19;
    QPushButton *pushButton_18;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QWidget *layoutWidget4;
    QGridLayout *channels;
    QRadioButton *channel1_1;
    QRadioButton *channel1_2;
    QRadioButton *channel1_3;
    QRadioButton *channel1_4;
    QRadioButton *channel1_5;
    QRadioButton *channel1_6;
    QRadioButton *channel1_7;
    QRadioButton *channel1_8;
    QRadioButton *channel2_1;
    QRadioButton *channel2_2;
    QRadioButton *channel2_3;
    QRadioButton *channel2_4;
    QRadioButton *channel2_5;
    QRadioButton *channel2_6;
    QRadioButton *channel2_7;
    QRadioButton *channel2_8;
    QRadioButton *channel3_1;
    QRadioButton *channel3_2;
    QRadioButton *channel3_3;
    QRadioButton *channel3_4;
    QRadioButton *channel3_5;
    QRadioButton *channel3_6;
    QRadioButton *channel3_7;
    QRadioButton *channel3_8;
    QRadioButton *channel4_1;
    QRadioButton *channel4_2;
    QRadioButton *channel4_3;
    QRadioButton *channel4_4;
    QRadioButton *channel4_5;
    QRadioButton *channel4_6;
    QRadioButton *channel4_7;
    QRadioButton *channel4_8;
    QCheckBox *muted1;
    QCheckBox *muted2;
    QCheckBox *muted3;
    QCheckBox *muted4;
    QSlider *channelVolume1;
    QSlider *channelVolume2;
    QSlider *channelVolume3;
    QSlider *channelVolume4;
    QLabel *credits;
    QGroupBox *channelControlPanel;
    QLabel *label_instrument;
    QComboBox *instrumentBox;
    QCheckBox *kit_light;
    QCheckBox *stop_light;
    QWidget *layoutWidget;
    QGridLayout *gridNotes;
    QRadioButton *stop_0;
    QRadioButton *stop_1;
    QRadioButton *stop_2;
    QRadioButton *stop_3;
    QRadioButton *stop_4;
    QRadioButton *stop_5;
    QRadioButton *stop_6;
    QRadioButton *stop_7;
    QRadioButton *stop_8;
    QRadioButton *stop_9;
    QRadioButton *stop_10;
    QRadioButton *stop_11;
    QRadioButton *stop_12;
    QRadioButton *stop_13;
    QRadioButton *stop_14;
    QRadioButton *stop_15;
    QRadioButton *note36_0;
    QRadioButton *note36_1;
    QRadioButton *note36_2;
    QRadioButton *note36_3;
    QRadioButton *note36_4;
    QRadioButton *note36_5;
    QRadioButton *note36_6;
    QRadioButton *note36_7;
    QRadioButton *note36_8;
    QRadioButton *note36_9;
    QRadioButton *note36_10;
    QRadioButton *note36_11;
    QRadioButton *note36_12;
    QRadioButton *note36_13;
    QRadioButton *note36_14;
    QRadioButton *note36_15;
    QRadioButton *note35_0;
    QRadioButton *note35_1;
    QRadioButton *note35_2;
    QRadioButton *note35_3;
    QRadioButton *note35_4;
    QRadioButton *note35_5;
    QRadioButton *note35_6;
    QRadioButton *note35_7;
    QRadioButton *note35_8;
    QRadioButton *note35_9;
    QRadioButton *note35_10;
    QRadioButton *note35_11;
    QRadioButton *note35_12;
    QRadioButton *note35_13;
    QRadioButton *note35_14;
    QRadioButton *note35_15;
    QRadioButton *note34_0;
    QRadioButton *note34_1;
    QRadioButton *note34_2;
    QRadioButton *note34_3;
    QRadioButton *note34_4;
    QRadioButton *note34_5;
    QRadioButton *note34_6;
    QRadioButton *note34_7;
    QRadioButton *note34_8;
    QRadioButton *note34_9;
    QRadioButton *note34_10;
    QRadioButton *note34_11;
    QRadioButton *note34_12;
    QRadioButton *note34_13;
    QRadioButton *note34_14;
    QRadioButton *note34_15;
    QRadioButton *note33_0;
    QRadioButton *note33_1;
    QRadioButton *note33_2;
    QRadioButton *note33_3;
    QRadioButton *note33_4;
    QRadioButton *note33_5;
    QRadioButton *note33_6;
    QRadioButton *note33_7;
    QRadioButton *note33_8;
    QRadioButton *note33_9;
    QRadioButton *note33_10;
    QRadioButton *note33_11;
    QRadioButton *note33_12;
    QRadioButton *note33_13;
    QRadioButton *note33_14;
    QRadioButton *note33_15;
    QRadioButton *note32_0;
    QRadioButton *note32_1;
    QRadioButton *note32_2;
    QRadioButton *note32_3;
    QRadioButton *note32_4;
    QRadioButton *note32_5;
    QRadioButton *note32_6;
    QRadioButton *note32_7;
    QRadioButton *note32_8;
    QRadioButton *note32_9;
    QRadioButton *note32_10;
    QRadioButton *note32_11;
    QRadioButton *note32_12;
    QRadioButton *note32_13;
    QRadioButton *note32_14;
    QRadioButton *note32_15;
    QRadioButton *note31_0;
    QRadioButton *note31_1;
    QRadioButton *note31_2;
    QRadioButton *note31_3;
    QRadioButton *note31_4;
    QRadioButton *note31_5;
    QRadioButton *note31_6;
    QRadioButton *note31_7;
    QRadioButton *note31_8;
    QRadioButton *note31_9;
    QRadioButton *note31_10;
    QRadioButton *note31_11;
    QRadioButton *note31_12;
    QRadioButton *note31_13;
    QRadioButton *note31_14;
    QRadioButton *note31_15;
    QRadioButton *note30_0;
    QRadioButton *note30_1;
    QRadioButton *note30_2;
    QRadioButton *note30_3;
    QRadioButton *note30_4;
    QRadioButton *note30_5;
    QRadioButton *note30_6;
    QRadioButton *note30_7;
    QRadioButton *note30_8;
    QRadioButton *note30_9;
    QRadioButton *note30_10;
    QRadioButton *note30_11;
    QRadioButton *note30_12;
    QRadioButton *note30_13;
    QRadioButton *note30_14;
    QRadioButton *note30_15;
    QRadioButton *note29_0;
    QRadioButton *note29_1;
    QRadioButton *note29_2;
    QRadioButton *note29_3;
    QRadioButton *note29_4;
    QRadioButton *note29_5;
    QRadioButton *note29_6;
    QRadioButton *note29_7;
    QRadioButton *note29_8;
    QRadioButton *note29_9;
    QRadioButton *note29_10;
    QRadioButton *note29_11;
    QRadioButton *note29_12;
    QRadioButton *note29_13;
    QRadioButton *note29_14;
    QRadioButton *note29_15;
    QRadioButton *note28_0;
    QRadioButton *note28_1;
    QRadioButton *note28_2;
    QRadioButton *note28_3;
    QRadioButton *note28_4;
    QRadioButton *note28_5;
    QRadioButton *note28_6;
    QRadioButton *note28_7;
    QRadioButton *note28_8;
    QRadioButton *note28_9;
    QRadioButton *note28_10;
    QRadioButton *note28_11;
    QRadioButton *note28_12;
    QRadioButton *note28_13;
    QRadioButton *note28_14;
    QRadioButton *note28_15;
    QRadioButton *note27_0;
    QRadioButton *note27_1;
    QRadioButton *note27_2;
    QRadioButton *note27_3;
    QRadioButton *note27_4;
    QRadioButton *note27_5;
    QRadioButton *note27_6;
    QRadioButton *note27_7;
    QRadioButton *note27_8;
    QRadioButton *note27_9;
    QRadioButton *note27_10;
    QRadioButton *note27_11;
    QRadioButton *note27_12;
    QRadioButton *note27_13;
    QRadioButton *note27_14;
    QRadioButton *note27_15;
    QRadioButton *note26_0;
    QRadioButton *note26_1;
    QRadioButton *note26_2;
    QRadioButton *note26_3;
    QRadioButton *note26_4;
    QRadioButton *note26_5;
    QRadioButton *note26_6;
    QRadioButton *note26_7;
    QRadioButton *note26_8;
    QRadioButton *note26_9;
    QRadioButton *note26_10;
    QRadioButton *note26_11;
    QRadioButton *note26_12;
    QRadioButton *note26_13;
    QRadioButton *note26_14;
    QRadioButton *note26_15;
    QRadioButton *note25_0;
    QRadioButton *note25_1;
    QRadioButton *note25_2;
    QRadioButton *note25_3;
    QRadioButton *note25_4;
    QRadioButton *note25_5;
    QRadioButton *note25_6;
    QRadioButton *note25_7;
    QRadioButton *note25_8;
    QRadioButton *note25_9;
    QRadioButton *note25_10;
    QRadioButton *note25_11;
    QRadioButton *note25_12;
    QRadioButton *note25_13;
    QRadioButton *note25_14;
    QRadioButton *note25_15;
    QRadioButton *note24_0;
    QRadioButton *note24_1;
    QRadioButton *note24_2;
    QRadioButton *note24_3;
    QRadioButton *note24_4;
    QRadioButton *note24_5;
    QRadioButton *note24_6;
    QRadioButton *note24_7;
    QRadioButton *note24_8;
    QRadioButton *note24_9;
    QRadioButton *note24_10;
    QRadioButton *note24_11;
    QRadioButton *note24_12;
    QRadioButton *note24_13;
    QRadioButton *note24_14;
    QRadioButton *note24_15;
    QRadioButton *note23_0;
    QRadioButton *note23_1;
    QRadioButton *note23_2;
    QRadioButton *note23_3;
    QRadioButton *note23_4;
    QRadioButton *note23_5;
    QRadioButton *note23_6;
    QRadioButton *note23_7;
    QRadioButton *note23_8;
    QRadioButton *note23_9;
    QRadioButton *note23_10;
    QRadioButton *note23_11;
    QRadioButton *note23_12;
    QRadioButton *note23_13;
    QRadioButton *note23_14;
    QRadioButton *note23_15;
    QRadioButton *note22_0;
    QRadioButton *note22_1;
    QRadioButton *note22_2;
    QRadioButton *note22_3;
    QRadioButton *note22_4;
    QRadioButton *note22_5;
    QRadioButton *note22_6;
    QRadioButton *note22_7;
    QRadioButton *note22_8;
    QRadioButton *note22_9;
    QRadioButton *note22_10;
    QRadioButton *note22_11;
    QRadioButton *note22_12;
    QRadioButton *note22_13;
    QRadioButton *note22_14;
    QRadioButton *note22_15;
    QRadioButton *note21_0;
    QRadioButton *note21_1;
    QRadioButton *note21_2;
    QRadioButton *note21_3;
    QRadioButton *note21_4;
    QRadioButton *note21_5;
    QRadioButton *note21_6;
    QRadioButton *note21_7;
    QRadioButton *note21_8;
    QRadioButton *note21_9;
    QRadioButton *note21_10;
    QRadioButton *note21_11;
    QRadioButton *note21_12;
    QRadioButton *note21_13;
    QRadioButton *note21_14;
    QRadioButton *note21_15;
    QRadioButton *note20_0;
    QRadioButton *note20_1;
    QRadioButton *note20_2;
    QRadioButton *note20_3;
    QRadioButton *note20_4;
    QRadioButton *note20_5;
    QRadioButton *note20_6;
    QRadioButton *note20_7;
    QRadioButton *note20_8;
    QRadioButton *note20_9;
    QRadioButton *note20_10;
    QRadioButton *note20_11;
    QRadioButton *note20_12;
    QRadioButton *note20_13;
    QRadioButton *note20_14;
    QRadioButton *note20_15;
    QRadioButton *note19_0;
    QRadioButton *note19_1;
    QRadioButton *note19_2;
    QRadioButton *note19_3;
    QRadioButton *note19_4;
    QRadioButton *note19_5;
    QRadioButton *note19_6;
    QRadioButton *note19_7;
    QRadioButton *note19_8;
    QRadioButton *note19_9;
    QRadioButton *note19_10;
    QRadioButton *note19_11;
    QRadioButton *note19_12;
    QRadioButton *note19_13;
    QRadioButton *note19_14;
    QRadioButton *note19_15;
    QRadioButton *note18_0;
    QRadioButton *note18_1;
    QRadioButton *note18_2;
    QRadioButton *note18_3;
    QRadioButton *note18_4;
    QRadioButton *note18_5;
    QRadioButton *note18_6;
    QRadioButton *note18_7;
    QRadioButton *note18_8;
    QRadioButton *note18_9;
    QRadioButton *note18_10;
    QRadioButton *note18_11;
    QRadioButton *note18_12;
    QRadioButton *note18_13;
    QRadioButton *note18_14;
    QRadioButton *note18_15;
    QRadioButton *note17_0;
    QRadioButton *note17_1;
    QRadioButton *note17_2;
    QRadioButton *note17_3;
    QRadioButton *note17_4;
    QRadioButton *note17_5;
    QRadioButton *note17_6;
    QRadioButton *note17_7;
    QRadioButton *note17_8;
    QRadioButton *note17_9;
    QRadioButton *note17_10;
    QRadioButton *note17_11;
    QRadioButton *note17_12;
    QRadioButton *note17_13;
    QRadioButton *note17_14;
    QRadioButton *note17_15;
    QRadioButton *note16_0;
    QRadioButton *note16_1;
    QRadioButton *note16_2;
    QRadioButton *note16_3;
    QRadioButton *note16_4;
    QRadioButton *note16_5;
    QRadioButton *note16_6;
    QRadioButton *note16_7;
    QRadioButton *note16_8;
    QRadioButton *note16_9;
    QRadioButton *note16_10;
    QRadioButton *note16_11;
    QRadioButton *note16_12;
    QRadioButton *note16_13;
    QRadioButton *note16_14;
    QRadioButton *note16_15;
    QRadioButton *note15_0;
    QRadioButton *note15_1;
    QRadioButton *note15_2;
    QRadioButton *note15_3;
    QRadioButton *note15_4;
    QRadioButton *note15_5;
    QRadioButton *note15_6;
    QRadioButton *note15_7;
    QRadioButton *note15_8;
    QRadioButton *note15_9;
    QRadioButton *note15_10;
    QRadioButton *note15_11;
    QRadioButton *note15_12;
    QRadioButton *note15_13;
    QRadioButton *note15_14;
    QRadioButton *note15_15;
    QRadioButton *note14_0;
    QRadioButton *note14_1;
    QRadioButton *note14_2;
    QRadioButton *note14_3;
    QRadioButton *note14_4;
    QRadioButton *note14_5;
    QRadioButton *note14_6;
    QRadioButton *note14_7;
    QRadioButton *note14_8;
    QRadioButton *note14_9;
    QRadioButton *note14_10;
    QRadioButton *note14_11;
    QRadioButton *note14_12;
    QRadioButton *note14_13;
    QRadioButton *note14_14;
    QRadioButton *note14_15;
    QRadioButton *note13_0;
    QRadioButton *note13_1;
    QRadioButton *note13_2;
    QRadioButton *note13_3;
    QRadioButton *note13_4;
    QRadioButton *note13_5;
    QRadioButton *note13_6;
    QRadioButton *note13_7;
    QRadioButton *note13_8;
    QRadioButton *note13_9;
    QRadioButton *note13_10;
    QRadioButton *note13_11;
    QRadioButton *note13_12;
    QRadioButton *note13_13;
    QRadioButton *note13_14;
    QRadioButton *note13_15;
    QRadioButton *note12_0;
    QRadioButton *note12_1;
    QRadioButton *note12_2;
    QRadioButton *note12_3;
    QRadioButton *note12_4;
    QRadioButton *note12_5;
    QRadioButton *note12_6;
    QRadioButton *note12_7;
    QRadioButton *note12_8;
    QRadioButton *note12_9;
    QRadioButton *note12_10;
    QRadioButton *note12_11;
    QRadioButton *note12_12;
    QRadioButton *note12_13;
    QRadioButton *note12_14;
    QRadioButton *note12_15;
    QRadioButton *note11_0;
    QRadioButton *note11_1;
    QRadioButton *note11_2;
    QRadioButton *note11_3;
    QRadioButton *note11_4;
    QRadioButton *note11_5;
    QRadioButton *note11_6;
    QRadioButton *note11_7;
    QRadioButton *note11_8;
    QRadioButton *note11_9;
    QRadioButton *note11_10;
    QRadioButton *note11_11;
    QRadioButton *note11_12;
    QRadioButton *note11_13;
    QRadioButton *note11_14;
    QRadioButton *note11_15;
    QRadioButton *note10_0;
    QRadioButton *note10_1;
    QRadioButton *note10_2;
    QRadioButton *note10_3;
    QRadioButton *note10_4;
    QRadioButton *note10_5;
    QRadioButton *note10_6;
    QRadioButton *note10_7;
    QRadioButton *note10_8;
    QRadioButton *note10_9;
    QRadioButton *note10_10;
    QRadioButton *note10_11;
    QRadioButton *note10_12;
    QRadioButton *note10_13;
    QRadioButton *note10_14;
    QRadioButton *note10_15;
    QRadioButton *note9_0;
    QRadioButton *note9_1;
    QRadioButton *note9_2;
    QRadioButton *note9_3;
    QRadioButton *note9_4;
    QRadioButton *note9_5;
    QRadioButton *note9_6;
    QRadioButton *note9_7;
    QRadioButton *note9_8;
    QRadioButton *note9_9;
    QRadioButton *note9_10;
    QRadioButton *note9_11;
    QRadioButton *note9_12;
    QRadioButton *note9_13;
    QRadioButton *note9_14;
    QRadioButton *note9_15;
    QRadioButton *note8_0;
    QRadioButton *note8_1;
    QRadioButton *note8_2;
    QRadioButton *note8_3;
    QRadioButton *note8_4;
    QRadioButton *note8_5;
    QRadioButton *note8_6;
    QRadioButton *note8_7;
    QRadioButton *note8_8;
    QRadioButton *note8_9;
    QRadioButton *note8_10;
    QRadioButton *note8_11;
    QRadioButton *note8_12;
    QRadioButton *note8_13;
    QRadioButton *note8_14;
    QRadioButton *note8_15;
    QRadioButton *note7_0;
    QRadioButton *note7_1;
    QRadioButton *note7_2;
    QRadioButton *note7_3;
    QRadioButton *note7_4;
    QRadioButton *note7_5;
    QRadioButton *note7_6;
    QRadioButton *note7_7;
    QRadioButton *note7_8;
    QRadioButton *note7_9;
    QRadioButton *note7_10;
    QRadioButton *note7_11;
    QRadioButton *note7_12;
    QRadioButton *note7_13;
    QRadioButton *note7_14;
    QRadioButton *note7_15;
    QRadioButton *note6_0;
    QRadioButton *note6_1;
    QRadioButton *note6_2;
    QRadioButton *note6_3;
    QRadioButton *note6_4;
    QRadioButton *note6_5;
    QRadioButton *note6_6;
    QRadioButton *note6_7;
    QRadioButton *note6_8;
    QRadioButton *note6_9;
    QRadioButton *note6_10;
    QRadioButton *note6_11;
    QRadioButton *note6_12;
    QRadioButton *note6_13;
    QRadioButton *note6_14;
    QRadioButton *note6_15;
    QRadioButton *note5_0;
    QRadioButton *note5_1;
    QRadioButton *note5_2;
    QRadioButton *note5_3;
    QRadioButton *note5_4;
    QRadioButton *note5_5;
    QRadioButton *note5_6;
    QRadioButton *note5_7;
    QRadioButton *note5_8;
    QRadioButton *note5_9;
    QRadioButton *note5_10;
    QRadioButton *note5_11;
    QRadioButton *note5_12;
    QRadioButton *note5_13;
    QRadioButton *note5_14;
    QRadioButton *note5_15;
    QRadioButton *note4_0;
    QRadioButton *note4_1;
    QRadioButton *note4_2;
    QRadioButton *note4_3;
    QRadioButton *note4_4;
    QRadioButton *note4_5;
    QRadioButton *note4_6;
    QRadioButton *note4_7;
    QRadioButton *note4_8;
    QRadioButton *note4_9;
    QRadioButton *note4_10;
    QRadioButton *note4_11;
    QRadioButton *note4_12;
    QRadioButton *note4_13;
    QRadioButton *note4_14;
    QRadioButton *note4_15;
    QRadioButton *note3_0;
    QRadioButton *note3_1;
    QRadioButton *note3_2;
    QRadioButton *note3_3;
    QRadioButton *note3_4;
    QRadioButton *note3_5;
    QRadioButton *note3_6;
    QRadioButton *note3_7;
    QRadioButton *note3_8;
    QRadioButton *note3_9;
    QRadioButton *note3_10;
    QRadioButton *note3_11;
    QRadioButton *note3_12;
    QRadioButton *note3_13;
    QRadioButton *note3_14;
    QRadioButton *note3_15;
    QRadioButton *note2_0;
    QRadioButton *note2_1;
    QRadioButton *note2_2;
    QRadioButton *note2_3;
    QRadioButton *note2_4;
    QRadioButton *note2_5;
    QRadioButton *note2_6;
    QRadioButton *note2_7;
    QRadioButton *note2_8;
    QRadioButton *note2_9;
    QRadioButton *note2_10;
    QRadioButton *note2_11;
    QRadioButton *note2_12;
    QRadioButton *note2_13;
    QRadioButton *note2_14;
    QRadioButton *note2_15;
    QRadioButton *note1_0;
    QRadioButton *note1_1;
    QRadioButton *note1_2;
    QRadioButton *note1_3;
    QRadioButton *note1_4;
    QRadioButton *note1_5;
    QRadioButton *note1_6;
    QRadioButton *note1_7;
    QRadioButton *note1_8;
    QRadioButton *note1_9;
    QRadioButton *note1_10;
    QRadioButton *note1_11;
    QRadioButton *note1_12;
    QRadioButton *note1_13;
    QRadioButton *note1_14;
    QRadioButton *note1_15;
    QRadioButton *note0_0;
    QRadioButton *note0_1;
    QRadioButton *note0_2;
    QRadioButton *note0_3;
    QRadioButton *note0_4;
    QRadioButton *note0_5;
    QRadioButton *note0_6;
    QRadioButton *note0_7;
    QRadioButton *note0_8;
    QRadioButton *note0_9;
    QRadioButton *note0_10;
    QRadioButton *note0_11;
    QRadioButton *note0_12;
    QRadioButton *note0_13;
    QRadioButton *note0_14;
    QRadioButton *note0_15;
    QSlider *progress_3;
    QMenuBar *menuBar;
    QMenu *menuOption;
    QButtonGroup *notes_0;
    QButtonGroup *notes_5;
    QButtonGroup *notes_15;
    QButtonGroup *notes_11;
    QButtonGroup *notes_2;
    QButtonGroup *notes_12;
    QButtonGroup *notes_3;
    QButtonGroup *notes_9;
    QButtonGroup *notes_6;
    QButtonGroup *notes_14;
    QButtonGroup *notes_4;
    QButtonGroup *notes_7;
    QButtonGroup *notes_1;
    QButtonGroup *notes_8;
    QButtonGroup *notes_13;
    QButtonGroup *pianoButtons;
    QButtonGroup *notes_10;
    QButtonGroup *channelButtons;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1170, 713);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1170, 713));
        MainWindow->setMaximumSize(QSize(1170, 713));
        resetBar = new QAction(MainWindow);
        resetBar->setObjectName(QStringLiteral("resetBar"));
        resetAll = new QAction(MainWindow);
        resetAll->setObjectName(QStringLiteral("resetAll"));
        resetChannel = new QAction(MainWindow);
        resetChannel->setObjectName(QStringLiteral("resetChannel"));
        loadExample = new QAction(MainWindow);
        loadExample->setObjectName(QStringLiteral("loadExample"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        trackControlPanel = new QGroupBox(centralwidget);
        trackControlPanel->setObjectName(QStringLiteral("trackControlPanel"));
        trackControlPanel->setGeometry(QRect(760, 10, 370, 171));
        trackControlPanel->setStyleSheet(QStringLiteral(""));
        trackControlPanel->setAlignment(Qt::AlignCenter);
        controlPanel_2 = new QGridLayout(trackControlPanel);
        controlPanel_2->setSpacing(6);
        controlPanel_2->setContentsMargins(11, 11, 11, 11);
        controlPanel_2->setObjectName(QStringLiteral("controlPanel_2"));
        label_volume = new QLabel(trackControlPanel);
        label_volume->setObjectName(QStringLiteral("label_volume"));
        label_volume->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        controlPanel_2->addWidget(label_volume, 2, 0, 1, 1);

        volumeSpinBox = new QSpinBox(trackControlPanel);
        volumeSpinBox->setObjectName(QStringLiteral("volumeSpinBox"));
        volumeSpinBox->setMinimum(0);
        volumeSpinBox->setMaximum(100);
        volumeSpinBox->setValue(100);

        controlPanel_2->addWidget(volumeSpinBox, 2, 6, 1, 1);

        tempoSlider = new QSlider(trackControlPanel);
        tempoSlider->setObjectName(QStringLiteral("tempoSlider"));
        tempoSlider->setMinimum(30);
        tempoSlider->setMaximum(200);
        tempoSlider->setSingleStep(1);
        tempoSlider->setPageStep(10);
        tempoSlider->setValue(120);
        tempoSlider->setSliderPosition(120);
        tempoSlider->setOrientation(Qt::Horizontal);

        controlPanel_2->addWidget(tempoSlider, 1, 1, 1, 5);

        label_tempo = new QLabel(trackControlPanel);
        label_tempo->setObjectName(QStringLiteral("label_tempo"));
        label_tempo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        controlPanel_2->addWidget(label_tempo, 1, 0, 1, 1);

        tempoSpinBox = new QSpinBox(trackControlPanel);
        tempoSpinBox->setObjectName(QStringLiteral("tempoSpinBox"));
        tempoSpinBox->setMinimum(30);
        tempoSpinBox->setMaximum(200);
        tempoSpinBox->setSingleStep(1);
        tempoSpinBox->setValue(120);

        controlPanel_2->addWidget(tempoSpinBox, 1, 6, 1, 1);

        volumeSlider = new QSlider(trackControlPanel);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setMinimum(0);
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(100);
        volumeSlider->setSliderPosition(100);
        volumeSlider->setOrientation(Qt::Horizontal);

        controlPanel_2->addWidget(volumeSlider, 2, 1, 1, 5);

        stop_button = new QPushButton(trackControlPanel);
        stop_button->setObjectName(QStringLiteral("stop_button"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/progect_resources/textures/stop.png"), QSize(), QIcon::Normal, QIcon::On);
        stop_button->setIcon(icon);

        controlPanel_2->addWidget(stop_button, 0, 1, 1, 1);

        play_button = new QPushButton(trackControlPanel);
        play_button->setObjectName(QStringLiteral("play_button"));
        play_button->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/progect_resources/textures/play.png"), QSize(), QIcon::Normal, QIcon::On);
        play_button->setIcon(icon1);
        play_button->setFlat(false);

        controlPanel_2->addWidget(play_button, 0, 0, 1, 1);

        prev_button = new QPushButton(trackControlPanel);
        prev_button->setObjectName(QStringLiteral("prev_button"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/progect_resources/textures/prev.png"), QSize(), QIcon::Normal, QIcon::On);
        prev_button->setIcon(icon2);

        controlPanel_2->addWidget(prev_button, 0, 2, 1, 2);

        next_button = new QPushButton(trackControlPanel);
        next_button->setObjectName(QStringLiteral("next_button"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/progect_resources/textures/next.png"), QSize(), QIcon::Normal, QIcon::On);
        next_button->setIcon(icon3);

        controlPanel_2->addWidget(next_button, 0, 4, 1, 2);

        piano = new QLabel(centralwidget);
        piano->setObjectName(QStringLiteral("piano"));
        piano->setGeometry(QRect(0, 17, 70, 650));
        piano->setStyleSheet(QStringLiteral("image: url(:/progect_resources/textures/piano.png)"));
        piano->setTextFormat(Qt::RichText);
        piano->setPixmap(QPixmap(QString::fromUtf8(":/textures/progect_resources/textures/piano.png")));
        progress = new QSlider(centralwidget);
        progress->setObjectName(QStringLiteral("progress"));
        progress->setEnabled(false);
        progress->setGeometry(QRect(80, 0, 610, 701));
        progress->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"	border: 1px;\n"
"	padding-top: 18px;\n"
"	padding-bottom: 35px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: #FFFF00;\n"
"	border: 1px solid #000000;\n"
"	width: 8px;\n"
"	height: 720px;\n"
"}"));
        progress->setMinimum(0);
        progress->setMaximum(15);
        progress->setSingleStep(0);
        progress->setPageStep(0);
        progress->setOrientation(Qt::Horizontal);
        progress->setTickInterval(0);
        progress_2 = new QSlider(centralwidget);
        progress_2->setObjectName(QStringLiteral("progress_2"));
        progress_2->setEnabled(false);
        progress_2->setGeometry(QRect(795, 527, 244, 120));
        progress_2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"	border: 1px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background: #FFFF00;\n"
"	border: 1px solid #000000;\n"
"	width: 4px;\n"
"}"));
        progress_2->setMinimum(0);
        progress_2->setMaximum(127);
        progress_2->setSingleStep(0);
        progress_2->setPageStep(0);
        progress_2->setValue(0);
        progress_2->setOrientation(Qt::Horizontal);
        progress_2->setTickInterval(0);
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 19, 72, 860));
        formLayout = new QFormLayout(layoutWidget2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_36 = new QPushButton(layoutWidget2);
        pianoButtons = new QButtonGroup(MainWindow);
        pianoButtons->setObjectName(QStringLiteral("pianoButtons"));
        pianoButtons->addButton(pushButton_36);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        sizePolicy.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy);
        pushButton_36->setMinimumSize(QSize(70, 18));
        pushButton_36->setMaximumSize(QSize(70, 18));
        pushButton_36->setFlat(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_36);

        pushButton_35 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_35);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        sizePolicy.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy);
        pushButton_35->setMinimumSize(QSize(70, 18));
        pushButton_35->setMaximumSize(QSize(70, 18));
        pushButton_35->setFlat(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_35);

        pushButton_34 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_34);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        sizePolicy.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy);
        pushButton_34->setMinimumSize(QSize(70, 18));
        pushButton_34->setMaximumSize(QSize(70, 18));
        pushButton_34->setFlat(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_34);

        pushButton_33 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_33);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        sizePolicy.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy);
        pushButton_33->setMinimumSize(QSize(70, 18));
        pushButton_33->setMaximumSize(QSize(70, 18));
        pushButton_33->setFlat(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_33);

        pushButton_32 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_32);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        sizePolicy.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy);
        pushButton_32->setMinimumSize(QSize(70, 18));
        pushButton_32->setMaximumSize(QSize(70, 18));
        pushButton_32->setFlat(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_32);

        pushButton_31 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_31);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        sizePolicy.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy);
        pushButton_31->setMinimumSize(QSize(70, 18));
        pushButton_31->setMaximumSize(QSize(70, 18));
        pushButton_31->setFlat(true);

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButton_31);

        pushButton_30 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_30);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        sizePolicy.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy);
        pushButton_30->setMinimumSize(QSize(70, 18));
        pushButton_30->setMaximumSize(QSize(70, 18));
        pushButton_30->setFlat(true);

        formLayout->setWidget(6, QFormLayout::LabelRole, pushButton_30);

        pushButton_29 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_29);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        sizePolicy.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy);
        pushButton_29->setMinimumSize(QSize(70, 18));
        pushButton_29->setMaximumSize(QSize(70, 18));
        pushButton_29->setFlat(true);

        formLayout->setWidget(7, QFormLayout::LabelRole, pushButton_29);

        pushButton_28 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_28);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        sizePolicy.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy);
        pushButton_28->setMinimumSize(QSize(70, 18));
        pushButton_28->setMaximumSize(QSize(70, 18));
        pushButton_28->setFlat(true);

        formLayout->setWidget(8, QFormLayout::LabelRole, pushButton_28);

        pushButton_27 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_27);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        sizePolicy.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy);
        pushButton_27->setMinimumSize(QSize(70, 18));
        pushButton_27->setMaximumSize(QSize(70, 18));
        pushButton_27->setFlat(true);

        formLayout->setWidget(9, QFormLayout::LabelRole, pushButton_27);

        pushButton_26 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_26);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        sizePolicy.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy);
        pushButton_26->setMinimumSize(QSize(70, 18));
        pushButton_26->setMaximumSize(QSize(70, 18));
        pushButton_26->setFlat(true);

        formLayout->setWidget(10, QFormLayout::LabelRole, pushButton_26);

        pushButton_25 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_25);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        sizePolicy.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy);
        pushButton_25->setMinimumSize(QSize(70, 18));
        pushButton_25->setMaximumSize(QSize(70, 18));
        pushButton_25->setFlat(true);

        formLayout->setWidget(11, QFormLayout::LabelRole, pushButton_25);

        pushButton_24 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_24);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        sizePolicy.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy);
        pushButton_24->setMinimumSize(QSize(70, 18));
        pushButton_24->setMaximumSize(QSize(70, 18));
        pushButton_24->setFlat(true);

        formLayout->setWidget(12, QFormLayout::LabelRole, pushButton_24);

        pushButton_23 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_23);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);
        pushButton_23->setMinimumSize(QSize(70, 18));
        pushButton_23->setMaximumSize(QSize(70, 18));
        pushButton_23->setFlat(true);

        formLayout->setWidget(13, QFormLayout::LabelRole, pushButton_23);

        pushButton_22 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_22);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);
        pushButton_22->setMinimumSize(QSize(70, 18));
        pushButton_22->setMaximumSize(QSize(70, 18));
        pushButton_22->setFlat(true);

        formLayout->setWidget(14, QFormLayout::LabelRole, pushButton_22);

        pushButton_21 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_21);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);
        pushButton_21->setMinimumSize(QSize(70, 18));
        pushButton_21->setMaximumSize(QSize(70, 18));
        pushButton_21->setFlat(true);

        formLayout->setWidget(15, QFormLayout::LabelRole, pushButton_21);

        pushButton_20 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_20);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setMinimumSize(QSize(70, 18));
        pushButton_20->setMaximumSize(QSize(70, 18));
        pushButton_20->setFlat(true);

        formLayout->setWidget(16, QFormLayout::LabelRole, pushButton_20);

        pushButton_19 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_19);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setMinimumSize(QSize(70, 18));
        pushButton_19->setMaximumSize(QSize(70, 18));
        pushButton_19->setFlat(true);

        formLayout->setWidget(17, QFormLayout::LabelRole, pushButton_19);

        pushButton_18 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_18);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setMinimumSize(QSize(70, 18));
        pushButton_18->setMaximumSize(QSize(70, 18));
        pushButton_18->setFlat(true);

        formLayout->setWidget(18, QFormLayout::LabelRole, pushButton_18);

        pushButton_17 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_17);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setMinimumSize(QSize(70, 18));
        pushButton_17->setMaximumSize(QSize(70, 18));
        pushButton_17->setFlat(true);

        formLayout->setWidget(19, QFormLayout::LabelRole, pushButton_17);

        pushButton_16 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_16);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setMinimumSize(QSize(70, 18));
        pushButton_16->setMaximumSize(QSize(70, 18));
        pushButton_16->setFlat(true);

        formLayout->setWidget(20, QFormLayout::LabelRole, pushButton_16);

        pushButton_15 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_15);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(70, 18));
        pushButton_15->setMaximumSize(QSize(70, 18));
        pushButton_15->setFlat(true);

        formLayout->setWidget(21, QFormLayout::LabelRole, pushButton_15);

        pushButton_14 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_14);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setMinimumSize(QSize(70, 18));
        pushButton_14->setMaximumSize(QSize(70, 18));
        pushButton_14->setFlat(true);

        formLayout->setWidget(22, QFormLayout::LabelRole, pushButton_14);

        pushButton_13 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_13);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setMinimumSize(QSize(70, 18));
        pushButton_13->setMaximumSize(QSize(70, 18));
        pushButton_13->setFlat(true);

        formLayout->setWidget(23, QFormLayout::LabelRole, pushButton_13);

        pushButton_12 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_12);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(70, 18));
        pushButton_12->setMaximumSize(QSize(70, 18));
        pushButton_12->setFlat(true);

        formLayout->setWidget(24, QFormLayout::LabelRole, pushButton_12);

        pushButton_11 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_11);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setMinimumSize(QSize(70, 18));
        pushButton_11->setMaximumSize(QSize(70, 18));
        pushButton_11->setFlat(true);

        formLayout->setWidget(25, QFormLayout::LabelRole, pushButton_11);

        pushButton_10 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_10);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(70, 18));
        pushButton_10->setMaximumSize(QSize(70, 18));
        pushButton_10->setFlat(true);

        formLayout->setWidget(26, QFormLayout::LabelRole, pushButton_10);

        pushButton_9 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(70, 18));
        pushButton_9->setMaximumSize(QSize(70, 18));
        pushButton_9->setFlat(true);

        formLayout->setWidget(27, QFormLayout::LabelRole, pushButton_9);

        pushButton_8 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_8);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(70, 18));
        pushButton_8->setMaximumSize(QSize(70, 18));
        pushButton_8->setFlat(true);

        formLayout->setWidget(28, QFormLayout::LabelRole, pushButton_8);

        pushButton_7 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(70, 18));
        pushButton_7->setMaximumSize(QSize(70, 18));
        pushButton_7->setFlat(true);

        formLayout->setWidget(29, QFormLayout::LabelRole, pushButton_7);

        pushButton_6 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(70, 18));
        pushButton_6->setMaximumSize(QSize(70, 18));
        pushButton_6->setFlat(true);

        formLayout->setWidget(30, QFormLayout::LabelRole, pushButton_6);

        pushButton_5 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(70, 18));
        pushButton_5->setMaximumSize(QSize(70, 18));
        pushButton_5->setFlat(true);

        formLayout->setWidget(31, QFormLayout::LabelRole, pushButton_5);

        pushButton_4 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(70, 18));
        pushButton_4->setMaximumSize(QSize(70, 18));
        pushButton_4->setFlat(true);

        formLayout->setWidget(32, QFormLayout::LabelRole, pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(70, 18));
        pushButton_3->setMaximumSize(QSize(70, 18));
        pushButton_3->setFlat(true);

        formLayout->setWidget(33, QFormLayout::LabelRole, pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(70, 18));
        pushButton_2->setMaximumSize(QSize(70, 18));
        pushButton_2->setFlat(true);

        formLayout->setWidget(34, QFormLayout::LabelRole, pushButton_2);

        pushButton_1 = new QPushButton(layoutWidget2);
        pianoButtons->addButton(pushButton_1);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(70, 18));
        pushButton_1->setMaximumSize(QSize(70, 18));
        pushButton_1->setFlat(true);

        formLayout->setWidget(35, QFormLayout::LabelRole, pushButton_1);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(795, 527, 242, 122));
        channels = new QGridLayout(layoutWidget4);
        channels->setSpacing(0);
        channels->setContentsMargins(11, 11, 11, 11);
        channels->setObjectName(QStringLiteral("channels"));
        channels->setContentsMargins(0, 0, 0, 0);
        channel1_1 = new QRadioButton(layoutWidget4);
        channelButtons = new QButtonGroup(MainWindow);
        channelButtons->setObjectName(QStringLiteral("channelButtons"));
        channelButtons->addButton(channel1_1);
        channel1_1->setObjectName(QStringLiteral("channel1_1"));
        sizePolicy.setHeightForWidth(channel1_1->sizePolicy().hasHeightForWidth());
        channel1_1->setSizePolicy(sizePolicy);
        channel1_1->setMinimumSize(QSize(30, 30));
        channel1_1->setMaximumSize(QSize(30, 30));
        channel1_1->setStyleSheet(QLatin1String("QRadioButton {\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_1.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed_hover.png);\n"
"}"));
        channel1_1->setChecked(true);
        channel1_1->setAutoExclusive(true);

        channels->addWidget(channel1_1, 0, 0, 1, 1);

        channel1_2 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel1_2);
        channel1_2->setObjectName(QStringLiteral("channel1_2"));
        sizePolicy.setHeightForWidth(channel1_2->sizePolicy().hasHeightForWidth());
        channel1_2->setSizePolicy(sizePolicy);
        channel1_2->setMinimumSize(QSize(30, 30));
        channel1_2->setMaximumSize(QSize(30, 30));
        channel1_2->setStyleSheet(QLatin1String("QRadioButton {\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_1.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed_hover.png);\n"
"}"));
        channel1_2->setAutoExclusive(true);

        channels->addWidget(channel1_2, 0, 1, 1, 1);

        channel1_3 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel1_3);
        channel1_3->setObjectName(QStringLiteral("channel1_3"));
        sizePolicy.setHeightForWidth(channel1_3->sizePolicy().hasHeightForWidth());
        channel1_3->setSizePolicy(sizePolicy);
        channel1_3->setMinimumSize(QSize(30, 30));
        channel1_3->setMaximumSize(QSize(30, 30));
        channel1_3->setStyleSheet(QLatin1String("QRadioButton {\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_1.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed_hover.png);\n"
"}"));
        channel1_3->setAutoExclusive(true);

        channels->addWidget(channel1_3, 0, 2, 1, 1);

        channel1_4 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel1_4);
        channel1_4->setObjectName(QStringLiteral("channel1_4"));
        sizePolicy.setHeightForWidth(channel1_4->sizePolicy().hasHeightForWidth());
        channel1_4->setSizePolicy(sizePolicy);
        channel1_4->setMinimumSize(QSize(30, 30));
        channel1_4->setMaximumSize(QSize(30, 30));
        channel1_4->setStyleSheet(QLatin1String("QRadioButton {\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_1.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed_hover.png);\n"
"}"));
        channel1_4->setAutoExclusive(true);

        channels->addWidget(channel1_4, 0, 3, 1, 1);

        channel1_5 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel1_5);
        channel1_5->setObjectName(QStringLiteral("channel1_5"));
        sizePolicy.setHeightForWidth(channel1_5->sizePolicy().hasHeightForWidth());
        channel1_5->setSizePolicy(sizePolicy);
        channel1_5->setMinimumSize(QSize(30, 30));
        channel1_5->setMaximumSize(QSize(30, 30));
        channel1_5->setStyleSheet(QLatin1String("QRadioButton {\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_1.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed_hover.png);\n"
"}"));
        channel1_5->setAutoExclusive(true);

        channels->addWidget(channel1_5, 0, 4, 1, 1);

        channel1_6 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel1_6);
        channel1_6->setObjectName(QStringLiteral("channel1_6"));
        sizePolicy.setHeightForWidth(channel1_6->sizePolicy().hasHeightForWidth());
        channel1_6->setSizePolicy(sizePolicy);
        channel1_6->setMinimumSize(QSize(30, 30));
        channel1_6->setMaximumSize(QSize(30, 30));
        channel1_6->setStyleSheet(QLatin1String("QRadioButton {\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_1.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed_hover.png);\n"
"}"));
        channel1_6->setAutoExclusive(true);

        channels->addWidget(channel1_6, 0, 5, 1, 1);

        channel1_7 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel1_7);
        channel1_7->setObjectName(QStringLiteral("channel1_7"));
        sizePolicy.setHeightForWidth(channel1_7->sizePolicy().hasHeightForWidth());
        channel1_7->setSizePolicy(sizePolicy);
        channel1_7->setMinimumSize(QSize(30, 30));
        channel1_7->setMaximumSize(QSize(30, 30));
        channel1_7->setStyleSheet(QLatin1String("QRadioButton {\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_1.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed_hover.png);\n"
"}"));
        channel1_7->setAutoExclusive(true);

        channels->addWidget(channel1_7, 0, 6, 1, 1);

        channel1_8 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel1_8);
        channel1_8->setObjectName(QStringLiteral("channel1_8"));
        sizePolicy.setHeightForWidth(channel1_8->sizePolicy().hasHeightForWidth());
        channel1_8->setSizePolicy(sizePolicy);
        channel1_8->setMinimumSize(QSize(30, 30));
        channel1_8->setMaximumSize(QSize(30, 30));
        channel1_8->setStyleSheet(QLatin1String("QRadioButton {\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_1.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_1_pressed_hover.png);\n"
"}"));
        channel1_8->setAutoExclusive(true);

        channels->addWidget(channel1_8, 0, 7, 1, 1);

        channel2_1 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel2_1);
        channel2_1->setObjectName(QStringLiteral("channel2_1"));
        sizePolicy.setHeightForWidth(channel2_1->sizePolicy().hasHeightForWidth());
        channel2_1->setSizePolicy(sizePolicy);
        channel2_1->setMinimumSize(QSize(30, 30));
        channel2_1->setMaximumSize(QSize(30, 30));
        channel2_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_2.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed_hover.png);\n"
"}"));
        channel2_1->setAutoExclusive(true);

        channels->addWidget(channel2_1, 1, 0, 1, 1);

        channel2_2 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel2_2);
        channel2_2->setObjectName(QStringLiteral("channel2_2"));
        sizePolicy.setHeightForWidth(channel2_2->sizePolicy().hasHeightForWidth());
        channel2_2->setSizePolicy(sizePolicy);
        channel2_2->setMinimumSize(QSize(30, 30));
        channel2_2->setMaximumSize(QSize(30, 30));
        channel2_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_2.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed_hover.png);\n"
"}"));
        channel2_2->setAutoExclusive(true);

        channels->addWidget(channel2_2, 1, 1, 1, 1);

        channel2_3 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel2_3);
        channel2_3->setObjectName(QStringLiteral("channel2_3"));
        sizePolicy.setHeightForWidth(channel2_3->sizePolicy().hasHeightForWidth());
        channel2_3->setSizePolicy(sizePolicy);
        channel2_3->setMinimumSize(QSize(30, 30));
        channel2_3->setMaximumSize(QSize(30, 30));
        channel2_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_2.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed_hover.png);\n"
"}"));
        channel2_3->setAutoExclusive(true);

        channels->addWidget(channel2_3, 1, 2, 1, 1);

        channel2_4 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel2_4);
        channel2_4->setObjectName(QStringLiteral("channel2_4"));
        sizePolicy.setHeightForWidth(channel2_4->sizePolicy().hasHeightForWidth());
        channel2_4->setSizePolicy(sizePolicy);
        channel2_4->setMinimumSize(QSize(30, 30));
        channel2_4->setMaximumSize(QSize(30, 30));
        channel2_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_2.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed_hover.png);\n"
"}"));
        channel2_4->setAutoExclusive(true);

        channels->addWidget(channel2_4, 1, 3, 1, 1);

        channel2_5 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel2_5);
        channel2_5->setObjectName(QStringLiteral("channel2_5"));
        sizePolicy.setHeightForWidth(channel2_5->sizePolicy().hasHeightForWidth());
        channel2_5->setSizePolicy(sizePolicy);
        channel2_5->setMinimumSize(QSize(30, 30));
        channel2_5->setMaximumSize(QSize(30, 30));
        channel2_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_2.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed_hover.png);\n"
"}"));
        channel2_5->setAutoExclusive(true);

        channels->addWidget(channel2_5, 1, 4, 1, 1);

        channel2_6 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel2_6);
        channel2_6->setObjectName(QStringLiteral("channel2_6"));
        sizePolicy.setHeightForWidth(channel2_6->sizePolicy().hasHeightForWidth());
        channel2_6->setSizePolicy(sizePolicy);
        channel2_6->setMinimumSize(QSize(30, 30));
        channel2_6->setMaximumSize(QSize(30, 30));
        channel2_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_2.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed_hover.png);\n"
"}"));
        channel2_6->setAutoExclusive(true);

        channels->addWidget(channel2_6, 1, 5, 1, 1);

        channel2_7 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel2_7);
        channel2_7->setObjectName(QStringLiteral("channel2_7"));
        sizePolicy.setHeightForWidth(channel2_7->sizePolicy().hasHeightForWidth());
        channel2_7->setSizePolicy(sizePolicy);
        channel2_7->setMinimumSize(QSize(30, 30));
        channel2_7->setMaximumSize(QSize(30, 30));
        channel2_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_2.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed_hover.png);\n"
"}"));
        channel2_7->setAutoExclusive(true);

        channels->addWidget(channel2_7, 1, 6, 1, 1);

        channel2_8 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel2_8);
        channel2_8->setObjectName(QStringLiteral("channel2_8"));
        sizePolicy.setHeightForWidth(channel2_8->sizePolicy().hasHeightForWidth());
        channel2_8->setSizePolicy(sizePolicy);
        channel2_8->setMinimumSize(QSize(30, 30));
        channel2_8->setMaximumSize(QSize(30, 30));
        channel2_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_2.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_2_pressed_hover.png);\n"
"}"));
        channel2_8->setAutoExclusive(true);

        channels->addWidget(channel2_8, 1, 7, 1, 1);

        channel3_1 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel3_1);
        channel3_1->setObjectName(QStringLiteral("channel3_1"));
        sizePolicy.setHeightForWidth(channel3_1->sizePolicy().hasHeightForWidth());
        channel3_1->setSizePolicy(sizePolicy);
        channel3_1->setMinimumSize(QSize(30, 30));
        channel3_1->setMaximumSize(QSize(30, 30));
        channel3_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_3.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed_hover.png);\n"
"}"));
        channel3_1->setAutoExclusive(true);

        channels->addWidget(channel3_1, 2, 0, 1, 1);

        channel3_2 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel3_2);
        channel3_2->setObjectName(QStringLiteral("channel3_2"));
        sizePolicy.setHeightForWidth(channel3_2->sizePolicy().hasHeightForWidth());
        channel3_2->setSizePolicy(sizePolicy);
        channel3_2->setMinimumSize(QSize(30, 30));
        channel3_2->setMaximumSize(QSize(30, 30));
        channel3_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_3.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed_hover.png);\n"
"}"));
        channel3_2->setAutoExclusive(true);

        channels->addWidget(channel3_2, 2, 1, 1, 1);

        channel3_3 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel3_3);
        channel3_3->setObjectName(QStringLiteral("channel3_3"));
        sizePolicy.setHeightForWidth(channel3_3->sizePolicy().hasHeightForWidth());
        channel3_3->setSizePolicy(sizePolicy);
        channel3_3->setMinimumSize(QSize(30, 30));
        channel3_3->setMaximumSize(QSize(30, 30));
        channel3_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_3.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed_hover.png);\n"
"}"));
        channel3_3->setAutoExclusive(true);

        channels->addWidget(channel3_3, 2, 2, 1, 1);

        channel3_4 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel3_4);
        channel3_4->setObjectName(QStringLiteral("channel3_4"));
        sizePolicy.setHeightForWidth(channel3_4->sizePolicy().hasHeightForWidth());
        channel3_4->setSizePolicy(sizePolicy);
        channel3_4->setMinimumSize(QSize(30, 30));
        channel3_4->setMaximumSize(QSize(30, 30));
        channel3_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_3.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed_hover.png);\n"
"}"));
        channel3_4->setAutoExclusive(true);

        channels->addWidget(channel3_4, 2, 3, 1, 1);

        channel3_5 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel3_5);
        channel3_5->setObjectName(QStringLiteral("channel3_5"));
        sizePolicy.setHeightForWidth(channel3_5->sizePolicy().hasHeightForWidth());
        channel3_5->setSizePolicy(sizePolicy);
        channel3_5->setMinimumSize(QSize(30, 30));
        channel3_5->setMaximumSize(QSize(30, 30));
        channel3_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_3.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed_hover.png);\n"
"}"));
        channel3_5->setAutoExclusive(true);

        channels->addWidget(channel3_5, 2, 4, 1, 1);

        channel3_6 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel3_6);
        channel3_6->setObjectName(QStringLiteral("channel3_6"));
        sizePolicy.setHeightForWidth(channel3_6->sizePolicy().hasHeightForWidth());
        channel3_6->setSizePolicy(sizePolicy);
        channel3_6->setMinimumSize(QSize(30, 30));
        channel3_6->setMaximumSize(QSize(30, 30));
        channel3_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_3.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed_hover.png);\n"
"}"));
        channel3_6->setAutoExclusive(true);

        channels->addWidget(channel3_6, 2, 5, 1, 1);

        channel3_7 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel3_7);
        channel3_7->setObjectName(QStringLiteral("channel3_7"));
        sizePolicy.setHeightForWidth(channel3_7->sizePolicy().hasHeightForWidth());
        channel3_7->setSizePolicy(sizePolicy);
        channel3_7->setMinimumSize(QSize(30, 30));
        channel3_7->setMaximumSize(QSize(30, 30));
        channel3_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_3.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed_hover.png);\n"
"}"));
        channel3_7->setAutoExclusive(true);

        channels->addWidget(channel3_7, 2, 6, 1, 1);

        channel3_8 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel3_8);
        channel3_8->setObjectName(QStringLiteral("channel3_8"));
        sizePolicy.setHeightForWidth(channel3_8->sizePolicy().hasHeightForWidth());
        channel3_8->setSizePolicy(sizePolicy);
        channel3_8->setMinimumSize(QSize(30, 30));
        channel3_8->setMaximumSize(QSize(30, 30));
        channel3_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_3.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_3_pressed_hover.png);\n"
"}"));
        channel3_8->setAutoExclusive(true);

        channels->addWidget(channel3_8, 2, 7, 1, 1);

        channel4_1 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel4_1);
        channel4_1->setObjectName(QStringLiteral("channel4_1"));
        sizePolicy.setHeightForWidth(channel4_1->sizePolicy().hasHeightForWidth());
        channel4_1->setSizePolicy(sizePolicy);
        channel4_1->setMinimumSize(QSize(30, 30));
        channel4_1->setMaximumSize(QSize(30, 30));
        channel4_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_4.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed_hover.png);\n"
"}"));
        channel4_1->setAutoExclusive(true);

        channels->addWidget(channel4_1, 3, 0, 1, 1);

        channel4_2 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel4_2);
        channel4_2->setObjectName(QStringLiteral("channel4_2"));
        sizePolicy.setHeightForWidth(channel4_2->sizePolicy().hasHeightForWidth());
        channel4_2->setSizePolicy(sizePolicy);
        channel4_2->setMinimumSize(QSize(30, 30));
        channel4_2->setMaximumSize(QSize(30, 30));
        channel4_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_4.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed_hover.png);\n"
"}"));
        channel4_2->setAutoExclusive(true);

        channels->addWidget(channel4_2, 3, 1, 1, 1);

        channel4_3 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel4_3);
        channel4_3->setObjectName(QStringLiteral("channel4_3"));
        sizePolicy.setHeightForWidth(channel4_3->sizePolicy().hasHeightForWidth());
        channel4_3->setSizePolicy(sizePolicy);
        channel4_3->setMinimumSize(QSize(30, 30));
        channel4_3->setMaximumSize(QSize(30, 30));
        channel4_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_4.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed_hover.png);\n"
"}"));
        channel4_3->setAutoExclusive(true);

        channels->addWidget(channel4_3, 3, 2, 1, 1);

        channel4_4 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel4_4);
        channel4_4->setObjectName(QStringLiteral("channel4_4"));
        sizePolicy.setHeightForWidth(channel4_4->sizePolicy().hasHeightForWidth());
        channel4_4->setSizePolicy(sizePolicy);
        channel4_4->setMinimumSize(QSize(30, 30));
        channel4_4->setMaximumSize(QSize(30, 30));
        channel4_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_4.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed_hover.png);\n"
"}"));
        channel4_4->setAutoExclusive(true);

        channels->addWidget(channel4_4, 3, 3, 1, 1);

        channel4_5 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel4_5);
        channel4_5->setObjectName(QStringLiteral("channel4_5"));
        sizePolicy.setHeightForWidth(channel4_5->sizePolicy().hasHeightForWidth());
        channel4_5->setSizePolicy(sizePolicy);
        channel4_5->setMinimumSize(QSize(30, 30));
        channel4_5->setMaximumSize(QSize(30, 30));
        channel4_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_4.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed_hover.png);\n"
"}"));
        channel4_5->setAutoExclusive(true);

        channels->addWidget(channel4_5, 3, 4, 1, 1);

        channel4_6 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel4_6);
        channel4_6->setObjectName(QStringLiteral("channel4_6"));
        sizePolicy.setHeightForWidth(channel4_6->sizePolicy().hasHeightForWidth());
        channel4_6->setSizePolicy(sizePolicy);
        channel4_6->setMinimumSize(QSize(30, 30));
        channel4_6->setMaximumSize(QSize(30, 30));
        channel4_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_4.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed_hover.png);\n"
"}"));
        channel4_6->setAutoExclusive(true);

        channels->addWidget(channel4_6, 3, 5, 1, 1);

        channel4_7 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel4_7);
        channel4_7->setObjectName(QStringLiteral("channel4_7"));
        sizePolicy.setHeightForWidth(channel4_7->sizePolicy().hasHeightForWidth());
        channel4_7->setSizePolicy(sizePolicy);
        channel4_7->setMinimumSize(QSize(30, 30));
        channel4_7->setMaximumSize(QSize(30, 30));
        channel4_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_4.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed_hover.png);\n"
"}"));
        channel4_7->setAutoExclusive(true);

        channels->addWidget(channel4_7, 3, 6, 1, 1);

        channel4_8 = new QRadioButton(layoutWidget4);
        channelButtons->addButton(channel4_8);
        channel4_8->setObjectName(QStringLiteral("channel4_8"));
        sizePolicy.setHeightForWidth(channel4_8->sizePolicy().hasHeightForWidth());
        channel4_8->setSizePolicy(sizePolicy);
        channel4_8->setMinimumSize(QSize(30, 30));
        channel4_8->setMaximumSize(QSize(30, 30));
        channel4_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 2px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/channel_4.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/channel_4_pressed_hover.png);\n"
"}"));
        channel4_8->setAutoExclusive(true);

        channels->addWidget(channel4_8, 3, 7, 1, 1);

        muted1 = new QCheckBox(centralwidget);
        muted1->setObjectName(QStringLiteral("muted1"));
        muted1->setGeometry(QRect(755, 532, 38, 18));
        muted1->setStyleSheet(QLatin1String("QCheckBox	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QCheckBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_mute.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_mute_pressed.png);\n"
"}"));
        muted2 = new QCheckBox(centralwidget);
        muted2->setObjectName(QStringLiteral("muted2"));
        muted2->setGeometry(QRect(755, 562, 38, 18));
        muted2->setStyleSheet(QLatin1String("QCheckBox	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QCheckBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_mute.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_mute_pressed.png);\n"
"}"));
        muted3 = new QCheckBox(centralwidget);
        muted3->setObjectName(QStringLiteral("muted3"));
        muted3->setGeometry(QRect(755, 592, 38, 18));
        muted3->setStyleSheet(QLatin1String("QCheckBox	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QCheckBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_mute.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_mute_pressed.png);\n"
"}"));
        muted4 = new QCheckBox(centralwidget);
        muted4->setObjectName(QStringLiteral("muted4"));
        muted4->setGeometry(QRect(755, 622, 38, 18));
        muted4->setStyleSheet(QLatin1String("QCheckBox	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QCheckBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_mute.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_mute_pressed.png);\n"
"}"));
        channelVolume1 = new QSlider(centralwidget);
        channelVolume1->setObjectName(QStringLiteral("channelVolume1"));
        channelVolume1->setGeometry(QRect(1045, 532, 120, 20));
        channelVolume1->setMinimum(0);
        channelVolume1->setMaximum(100);
        channelVolume1->setValue(100);
        channelVolume1->setSliderPosition(100);
        channelVolume1->setOrientation(Qt::Horizontal);
        channelVolume2 = new QSlider(centralwidget);
        channelVolume2->setObjectName(QStringLiteral("channelVolume2"));
        channelVolume2->setGeometry(QRect(1045, 562, 120, 20));
        channelVolume2->setMinimum(0);
        channelVolume2->setMaximum(100);
        channelVolume2->setValue(100);
        channelVolume2->setSliderPosition(100);
        channelVolume2->setOrientation(Qt::Horizontal);
        channelVolume3 = new QSlider(centralwidget);
        channelVolume3->setObjectName(QStringLiteral("channelVolume3"));
        channelVolume3->setGeometry(QRect(1045, 592, 120, 20));
        channelVolume3->setMinimum(0);
        channelVolume3->setMaximum(100);
        channelVolume3->setValue(100);
        channelVolume3->setSliderPosition(100);
        channelVolume3->setOrientation(Qt::Horizontal);
        channelVolume4 = new QSlider(centralwidget);
        channelVolume4->setObjectName(QStringLiteral("channelVolume4"));
        channelVolume4->setGeometry(QRect(1045, 622, 120, 20));
        channelVolume4->setMinimum(0);
        channelVolume4->setMaximum(100);
        channelVolume4->setValue(100);
        channelVolume4->setSliderPosition(100);
        channelVolume4->setOrientation(Qt::Horizontal);
        credits = new QLabel(centralwidget);
        credits->setObjectName(QStringLiteral("credits"));
        credits->setGeometry(QRect(1080, 670, 81, 20));
        channelControlPanel = new QGroupBox(centralwidget);
        channelControlPanel->setObjectName(QStringLiteral("channelControlPanel"));
        channelControlPanel->setGeometry(QRect(760, 190, 371, 71));
        channelControlPanel->setAlignment(Qt::AlignCenter);
        label_instrument = new QLabel(channelControlPanel);
        label_instrument->setObjectName(QStringLiteral("label_instrument"));
        label_instrument->setGeometry(QRect(10, 35, 101, 20));
        label_instrument->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        instrumentBox = new QComboBox(channelControlPanel);
        instrumentBox->setObjectName(QStringLiteral("instrumentBox"));
        instrumentBox->setGeometry(QRect(120, 30, 181, 31));
        kit_light = new QCheckBox(channelControlPanel);
        kit_light->setObjectName(QStringLiteral("kit_light"));
        kit_light->setEnabled(false);
        kit_light->setGeometry(QRect(320, 30, 51, 16));
        kit_light->setStyleSheet(QLatin1String("QCheckBox	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QCheckBox::indicator	{\n"
"	width: 8px;\n"
"	height: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/light_off.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/light_on.png);\n"
"}"));
        kit_light->setCheckable(true);
        kit_light->setChecked(false);
        stop_light = new QCheckBox(channelControlPanel);
        stop_light->setObjectName(QStringLiteral("stop_light"));
        stop_light->setEnabled(false);
        stop_light->setGeometry(QRect(320, 50, 51, 16));
        stop_light->setStyleSheet(QLatin1String("QCheckBox	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QCheckBox::indicator	{\n"
"	width: 8px;\n"
"	height: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/light_off.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/light_on.png);\n"
"}"));
        stop_light->setChecked(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 0, 641, 701));
        gridNotes = new QGridLayout(layoutWidget);
        gridNotes->setSpacing(6);
        gridNotes->setContentsMargins(11, 11, 11, 11);
        gridNotes->setObjectName(QStringLiteral("gridNotes"));
        gridNotes->setHorizontalSpacing(2);
        gridNotes->setVerticalSpacing(0);
        gridNotes->setContentsMargins(0, 0, 0, 0);
        stop_0 = new QRadioButton(layoutWidget);
        notes_0 = new QButtonGroup(MainWindow);
        notes_0->setObjectName(QStringLiteral("notes_0"));
        notes_0->addButton(stop_0);
        stop_0->setObjectName(QStringLiteral("stop_0"));
        stop_0->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_0->sizePolicy().hasHeightForWidth());
        stop_0->setSizePolicy(sizePolicy);
        stop_0->setMinimumSize(QSize(38, 18));
        stop_0->setMaximumSize(QSize(38, 18));
        stop_0->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_0, 0, 0, 1, 1);

        stop_1 = new QRadioButton(layoutWidget);
        notes_1 = new QButtonGroup(MainWindow);
        notes_1->setObjectName(QStringLiteral("notes_1"));
        notes_1->addButton(stop_1);
        stop_1->setObjectName(QStringLiteral("stop_1"));
        stop_1->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_1->sizePolicy().hasHeightForWidth());
        stop_1->setSizePolicy(sizePolicy);
        stop_1->setMinimumSize(QSize(38, 18));
        stop_1->setMaximumSize(QSize(38, 18));
        stop_1->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_1, 0, 1, 1, 1);

        stop_2 = new QRadioButton(layoutWidget);
        notes_2 = new QButtonGroup(MainWindow);
        notes_2->setObjectName(QStringLiteral("notes_2"));
        notes_2->addButton(stop_2);
        stop_2->setObjectName(QStringLiteral("stop_2"));
        stop_2->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_2->sizePolicy().hasHeightForWidth());
        stop_2->setSizePolicy(sizePolicy);
        stop_2->setMinimumSize(QSize(38, 18));
        stop_2->setMaximumSize(QSize(38, 18));
        stop_2->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_2, 0, 2, 1, 1);

        stop_3 = new QRadioButton(layoutWidget);
        notes_3 = new QButtonGroup(MainWindow);
        notes_3->setObjectName(QStringLiteral("notes_3"));
        notes_3->addButton(stop_3);
        stop_3->setObjectName(QStringLiteral("stop_3"));
        stop_3->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_3->sizePolicy().hasHeightForWidth());
        stop_3->setSizePolicy(sizePolicy);
        stop_3->setMinimumSize(QSize(38, 18));
        stop_3->setMaximumSize(QSize(38, 18));
        stop_3->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_3, 0, 3, 1, 1);

        stop_4 = new QRadioButton(layoutWidget);
        notes_4 = new QButtonGroup(MainWindow);
        notes_4->setObjectName(QStringLiteral("notes_4"));
        notes_4->addButton(stop_4);
        stop_4->setObjectName(QStringLiteral("stop_4"));
        stop_4->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_4->sizePolicy().hasHeightForWidth());
        stop_4->setSizePolicy(sizePolicy);
        stop_4->setMinimumSize(QSize(38, 18));
        stop_4->setMaximumSize(QSize(38, 18));
        stop_4->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_4, 0, 4, 1, 1);

        stop_5 = new QRadioButton(layoutWidget);
        notes_5 = new QButtonGroup(MainWindow);
        notes_5->setObjectName(QStringLiteral("notes_5"));
        notes_5->addButton(stop_5);
        stop_5->setObjectName(QStringLiteral("stop_5"));
        stop_5->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_5->sizePolicy().hasHeightForWidth());
        stop_5->setSizePolicy(sizePolicy);
        stop_5->setMinimumSize(QSize(38, 18));
        stop_5->setMaximumSize(QSize(38, 18));
        stop_5->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_5, 0, 5, 1, 1);

        stop_6 = new QRadioButton(layoutWidget);
        notes_6 = new QButtonGroup(MainWindow);
        notes_6->setObjectName(QStringLiteral("notes_6"));
        notes_6->addButton(stop_6);
        stop_6->setObjectName(QStringLiteral("stop_6"));
        stop_6->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_6->sizePolicy().hasHeightForWidth());
        stop_6->setSizePolicy(sizePolicy);
        stop_6->setMinimumSize(QSize(38, 18));
        stop_6->setMaximumSize(QSize(38, 18));
        stop_6->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_6, 0, 6, 1, 1);

        stop_7 = new QRadioButton(layoutWidget);
        notes_7 = new QButtonGroup(MainWindow);
        notes_7->setObjectName(QStringLiteral("notes_7"));
        notes_7->addButton(stop_7);
        stop_7->setObjectName(QStringLiteral("stop_7"));
        stop_7->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_7->sizePolicy().hasHeightForWidth());
        stop_7->setSizePolicy(sizePolicy);
        stop_7->setMinimumSize(QSize(38, 18));
        stop_7->setMaximumSize(QSize(38, 18));
        stop_7->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_7, 0, 7, 1, 1);

        stop_8 = new QRadioButton(layoutWidget);
        notes_8 = new QButtonGroup(MainWindow);
        notes_8->setObjectName(QStringLiteral("notes_8"));
        notes_8->addButton(stop_8);
        stop_8->setObjectName(QStringLiteral("stop_8"));
        stop_8->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_8->sizePolicy().hasHeightForWidth());
        stop_8->setSizePolicy(sizePolicy);
        stop_8->setMinimumSize(QSize(38, 18));
        stop_8->setMaximumSize(QSize(38, 18));
        stop_8->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_8, 0, 8, 1, 1);

        stop_9 = new QRadioButton(layoutWidget);
        notes_9 = new QButtonGroup(MainWindow);
        notes_9->setObjectName(QStringLiteral("notes_9"));
        notes_9->addButton(stop_9);
        stop_9->setObjectName(QStringLiteral("stop_9"));
        stop_9->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_9->sizePolicy().hasHeightForWidth());
        stop_9->setSizePolicy(sizePolicy);
        stop_9->setMinimumSize(QSize(38, 18));
        stop_9->setMaximumSize(QSize(38, 18));
        stop_9->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_9, 0, 9, 1, 1);

        stop_10 = new QRadioButton(layoutWidget);
        notes_10 = new QButtonGroup(MainWindow);
        notes_10->setObjectName(QStringLiteral("notes_10"));
        notes_10->addButton(stop_10);
        stop_10->setObjectName(QStringLiteral("stop_10"));
        stop_10->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_10->sizePolicy().hasHeightForWidth());
        stop_10->setSizePolicy(sizePolicy);
        stop_10->setMinimumSize(QSize(38, 18));
        stop_10->setMaximumSize(QSize(38, 18));
        stop_10->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_10, 0, 10, 1, 1);

        stop_11 = new QRadioButton(layoutWidget);
        notes_11 = new QButtonGroup(MainWindow);
        notes_11->setObjectName(QStringLiteral("notes_11"));
        notes_11->addButton(stop_11);
        stop_11->setObjectName(QStringLiteral("stop_11"));
        stop_11->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_11->sizePolicy().hasHeightForWidth());
        stop_11->setSizePolicy(sizePolicy);
        stop_11->setMinimumSize(QSize(38, 18));
        stop_11->setMaximumSize(QSize(38, 18));
        stop_11->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_11, 0, 11, 1, 1);

        stop_12 = new QRadioButton(layoutWidget);
        notes_12 = new QButtonGroup(MainWindow);
        notes_12->setObjectName(QStringLiteral("notes_12"));
        notes_12->addButton(stop_12);
        stop_12->setObjectName(QStringLiteral("stop_12"));
        stop_12->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_12->sizePolicy().hasHeightForWidth());
        stop_12->setSizePolicy(sizePolicy);
        stop_12->setMinimumSize(QSize(38, 18));
        stop_12->setMaximumSize(QSize(38, 18));
        stop_12->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_12, 0, 12, 1, 1);

        stop_13 = new QRadioButton(layoutWidget);
        notes_13 = new QButtonGroup(MainWindow);
        notes_13->setObjectName(QStringLiteral("notes_13"));
        notes_13->addButton(stop_13);
        stop_13->setObjectName(QStringLiteral("stop_13"));
        stop_13->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_13->sizePolicy().hasHeightForWidth());
        stop_13->setSizePolicy(sizePolicy);
        stop_13->setMinimumSize(QSize(38, 18));
        stop_13->setMaximumSize(QSize(38, 18));
        stop_13->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_13, 0, 13, 1, 1);

        stop_14 = new QRadioButton(layoutWidget);
        notes_14 = new QButtonGroup(MainWindow);
        notes_14->setObjectName(QStringLiteral("notes_14"));
        notes_14->addButton(stop_14);
        stop_14->setObjectName(QStringLiteral("stop_14"));
        stop_14->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_14->sizePolicy().hasHeightForWidth());
        stop_14->setSizePolicy(sizePolicy);
        stop_14->setMinimumSize(QSize(38, 18));
        stop_14->setMaximumSize(QSize(38, 18));
        stop_14->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_14, 0, 14, 1, 1);

        stop_15 = new QRadioButton(layoutWidget);
        notes_15 = new QButtonGroup(MainWindow);
        notes_15->setObjectName(QStringLiteral("notes_15"));
        notes_15->addButton(stop_15);
        stop_15->setObjectName(QStringLiteral("stop_15"));
        stop_15->setEnabled(false);
        sizePolicy.setHeightForWidth(stop_15->sizePolicy().hasHeightForWidth());
        stop_15->setSizePolicy(sizePolicy);
        stop_15->setMinimumSize(QSize(38, 18));
        stop_15->setMaximumSize(QSize(38, 18));
        stop_15->setStyleSheet(QLatin1String("QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_stop.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_stop_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));

        gridNotes->addWidget(stop_15, 0, 15, 1, 1);

        note36_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note36_0);
        note36_0->setObjectName(QStringLiteral("note36_0"));
        sizePolicy.setHeightForWidth(note36_0->sizePolicy().hasHeightForWidth());
        note36_0->setSizePolicy(sizePolicy);
        note36_0->setMinimumSize(QSize(38, 18));
        note36_0->setMaximumSize(QSize(38, 18));
        note36_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_0->setAutoExclusive(true);

        gridNotes->addWidget(note36_0, 1, 0, 1, 1);

        note36_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note36_1);
        note36_1->setObjectName(QStringLiteral("note36_1"));
        sizePolicy.setHeightForWidth(note36_1->sizePolicy().hasHeightForWidth());
        note36_1->setSizePolicy(sizePolicy);
        note36_1->setMinimumSize(QSize(38, 18));
        note36_1->setMaximumSize(QSize(38, 18));
        note36_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_1->setAutoExclusive(true);

        gridNotes->addWidget(note36_1, 1, 1, 1, 1);

        note36_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note36_2);
        note36_2->setObjectName(QStringLiteral("note36_2"));
        sizePolicy.setHeightForWidth(note36_2->sizePolicy().hasHeightForWidth());
        note36_2->setSizePolicy(sizePolicy);
        note36_2->setMinimumSize(QSize(38, 18));
        note36_2->setMaximumSize(QSize(38, 18));
        note36_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_2->setAutoExclusive(true);

        gridNotes->addWidget(note36_2, 1, 2, 1, 1);

        note36_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note36_3);
        note36_3->setObjectName(QStringLiteral("note36_3"));
        sizePolicy.setHeightForWidth(note36_3->sizePolicy().hasHeightForWidth());
        note36_3->setSizePolicy(sizePolicy);
        note36_3->setMinimumSize(QSize(38, 18));
        note36_3->setMaximumSize(QSize(38, 18));
        note36_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_3->setAutoExclusive(true);

        gridNotes->addWidget(note36_3, 1, 3, 1, 1);

        note36_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note36_4);
        note36_4->setObjectName(QStringLiteral("note36_4"));
        sizePolicy.setHeightForWidth(note36_4->sizePolicy().hasHeightForWidth());
        note36_4->setSizePolicy(sizePolicy);
        note36_4->setMinimumSize(QSize(38, 18));
        note36_4->setMaximumSize(QSize(38, 18));
        note36_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_4->setAutoExclusive(true);

        gridNotes->addWidget(note36_4, 1, 4, 1, 1);

        note36_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note36_5);
        note36_5->setObjectName(QStringLiteral("note36_5"));
        sizePolicy.setHeightForWidth(note36_5->sizePolicy().hasHeightForWidth());
        note36_5->setSizePolicy(sizePolicy);
        note36_5->setMinimumSize(QSize(38, 18));
        note36_5->setMaximumSize(QSize(38, 18));
        note36_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_5->setAutoExclusive(true);

        gridNotes->addWidget(note36_5, 1, 5, 1, 1);

        note36_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note36_6);
        note36_6->setObjectName(QStringLiteral("note36_6"));
        sizePolicy.setHeightForWidth(note36_6->sizePolicy().hasHeightForWidth());
        note36_6->setSizePolicy(sizePolicy);
        note36_6->setMinimumSize(QSize(38, 18));
        note36_6->setMaximumSize(QSize(38, 18));
        note36_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_6->setAutoExclusive(true);

        gridNotes->addWidget(note36_6, 1, 6, 1, 1);

        note36_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note36_7);
        note36_7->setObjectName(QStringLiteral("note36_7"));
        sizePolicy.setHeightForWidth(note36_7->sizePolicy().hasHeightForWidth());
        note36_7->setSizePolicy(sizePolicy);
        note36_7->setMinimumSize(QSize(38, 18));
        note36_7->setMaximumSize(QSize(38, 18));
        note36_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_7->setAutoExclusive(true);

        gridNotes->addWidget(note36_7, 1, 7, 1, 1);

        note36_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note36_8);
        note36_8->setObjectName(QStringLiteral("note36_8"));
        sizePolicy.setHeightForWidth(note36_8->sizePolicy().hasHeightForWidth());
        note36_8->setSizePolicy(sizePolicy);
        note36_8->setMinimumSize(QSize(38, 18));
        note36_8->setMaximumSize(QSize(38, 18));
        note36_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_8->setAutoExclusive(true);

        gridNotes->addWidget(note36_8, 1, 8, 1, 1);

        note36_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note36_9);
        note36_9->setObjectName(QStringLiteral("note36_9"));
        sizePolicy.setHeightForWidth(note36_9->sizePolicy().hasHeightForWidth());
        note36_9->setSizePolicy(sizePolicy);
        note36_9->setMinimumSize(QSize(38, 18));
        note36_9->setMaximumSize(QSize(38, 18));
        note36_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_9->setAutoExclusive(true);

        gridNotes->addWidget(note36_9, 1, 9, 1, 1);

        note36_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note36_10);
        note36_10->setObjectName(QStringLiteral("note36_10"));
        sizePolicy.setHeightForWidth(note36_10->sizePolicy().hasHeightForWidth());
        note36_10->setSizePolicy(sizePolicy);
        note36_10->setMinimumSize(QSize(38, 18));
        note36_10->setMaximumSize(QSize(38, 18));
        note36_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_10->setAutoExclusive(true);

        gridNotes->addWidget(note36_10, 1, 10, 1, 1);

        note36_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note36_11);
        note36_11->setObjectName(QStringLiteral("note36_11"));
        sizePolicy.setHeightForWidth(note36_11->sizePolicy().hasHeightForWidth());
        note36_11->setSizePolicy(sizePolicy);
        note36_11->setMinimumSize(QSize(38, 18));
        note36_11->setMaximumSize(QSize(38, 18));
        note36_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_11->setAutoExclusive(true);

        gridNotes->addWidget(note36_11, 1, 11, 1, 1);

        note36_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note36_12);
        note36_12->setObjectName(QStringLiteral("note36_12"));
        sizePolicy.setHeightForWidth(note36_12->sizePolicy().hasHeightForWidth());
        note36_12->setSizePolicy(sizePolicy);
        note36_12->setMinimumSize(QSize(38, 18));
        note36_12->setMaximumSize(QSize(38, 18));
        note36_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_12->setAutoExclusive(true);

        gridNotes->addWidget(note36_12, 1, 12, 1, 1);

        note36_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note36_13);
        note36_13->setObjectName(QStringLiteral("note36_13"));
        sizePolicy.setHeightForWidth(note36_13->sizePolicy().hasHeightForWidth());
        note36_13->setSizePolicy(sizePolicy);
        note36_13->setMinimumSize(QSize(38, 18));
        note36_13->setMaximumSize(QSize(38, 18));
        note36_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_13->setAutoExclusive(true);

        gridNotes->addWidget(note36_13, 1, 13, 1, 1);

        note36_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note36_14);
        note36_14->setObjectName(QStringLiteral("note36_14"));
        sizePolicy.setHeightForWidth(note36_14->sizePolicy().hasHeightForWidth());
        note36_14->setSizePolicy(sizePolicy);
        note36_14->setMinimumSize(QSize(38, 18));
        note36_14->setMaximumSize(QSize(38, 18));
        note36_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_14->setAutoExclusive(true);

        gridNotes->addWidget(note36_14, 1, 14, 1, 1);

        note36_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note36_15);
        note36_15->setObjectName(QStringLiteral("note36_15"));
        sizePolicy.setHeightForWidth(note36_15->sizePolicy().hasHeightForWidth());
        note36_15->setSizePolicy(sizePolicy);
        note36_15->setMinimumSize(QSize(38, 18));
        note36_15->setMaximumSize(QSize(38, 18));
        note36_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note36_15->setAutoExclusive(true);

        gridNotes->addWidget(note36_15, 1, 15, 1, 1);

        note35_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note35_0);
        note35_0->setObjectName(QStringLiteral("note35_0"));
        sizePolicy.setHeightForWidth(note35_0->sizePolicy().hasHeightForWidth());
        note35_0->setSizePolicy(sizePolicy);
        note35_0->setMinimumSize(QSize(38, 18));
        note35_0->setMaximumSize(QSize(38, 18));
        note35_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_0->setAutoExclusive(true);

        gridNotes->addWidget(note35_0, 2, 0, 1, 1);

        note35_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note35_1);
        note35_1->setObjectName(QStringLiteral("note35_1"));
        sizePolicy.setHeightForWidth(note35_1->sizePolicy().hasHeightForWidth());
        note35_1->setSizePolicy(sizePolicy);
        note35_1->setMinimumSize(QSize(38, 18));
        note35_1->setMaximumSize(QSize(38, 18));
        note35_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_1->setAutoExclusive(true);

        gridNotes->addWidget(note35_1, 2, 1, 1, 1);

        note35_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note35_2);
        note35_2->setObjectName(QStringLiteral("note35_2"));
        sizePolicy.setHeightForWidth(note35_2->sizePolicy().hasHeightForWidth());
        note35_2->setSizePolicy(sizePolicy);
        note35_2->setMinimumSize(QSize(38, 18));
        note35_2->setMaximumSize(QSize(38, 18));
        note35_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_2->setAutoExclusive(true);

        gridNotes->addWidget(note35_2, 2, 2, 1, 1);

        note35_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note35_3);
        note35_3->setObjectName(QStringLiteral("note35_3"));
        sizePolicy.setHeightForWidth(note35_3->sizePolicy().hasHeightForWidth());
        note35_3->setSizePolicy(sizePolicy);
        note35_3->setMinimumSize(QSize(38, 18));
        note35_3->setMaximumSize(QSize(38, 18));
        note35_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_3->setAutoExclusive(true);

        gridNotes->addWidget(note35_3, 2, 3, 1, 1);

        note35_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note35_4);
        note35_4->setObjectName(QStringLiteral("note35_4"));
        sizePolicy.setHeightForWidth(note35_4->sizePolicy().hasHeightForWidth());
        note35_4->setSizePolicy(sizePolicy);
        note35_4->setMinimumSize(QSize(38, 18));
        note35_4->setMaximumSize(QSize(38, 18));
        note35_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_4->setAutoExclusive(true);

        gridNotes->addWidget(note35_4, 2, 4, 1, 1);

        note35_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note35_5);
        note35_5->setObjectName(QStringLiteral("note35_5"));
        sizePolicy.setHeightForWidth(note35_5->sizePolicy().hasHeightForWidth());
        note35_5->setSizePolicy(sizePolicy);
        note35_5->setMinimumSize(QSize(38, 18));
        note35_5->setMaximumSize(QSize(38, 18));
        note35_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_5->setAutoExclusive(true);

        gridNotes->addWidget(note35_5, 2, 5, 1, 1);

        note35_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note35_6);
        note35_6->setObjectName(QStringLiteral("note35_6"));
        sizePolicy.setHeightForWidth(note35_6->sizePolicy().hasHeightForWidth());
        note35_6->setSizePolicy(sizePolicy);
        note35_6->setMinimumSize(QSize(38, 18));
        note35_6->setMaximumSize(QSize(38, 18));
        note35_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_6->setAutoExclusive(true);

        gridNotes->addWidget(note35_6, 2, 6, 1, 1);

        note35_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note35_7);
        note35_7->setObjectName(QStringLiteral("note35_7"));
        sizePolicy.setHeightForWidth(note35_7->sizePolicy().hasHeightForWidth());
        note35_7->setSizePolicy(sizePolicy);
        note35_7->setMinimumSize(QSize(38, 18));
        note35_7->setMaximumSize(QSize(38, 18));
        note35_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_7->setAutoExclusive(true);

        gridNotes->addWidget(note35_7, 2, 7, 1, 1);

        note35_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note35_8);
        note35_8->setObjectName(QStringLiteral("note35_8"));
        sizePolicy.setHeightForWidth(note35_8->sizePolicy().hasHeightForWidth());
        note35_8->setSizePolicy(sizePolicy);
        note35_8->setMinimumSize(QSize(38, 18));
        note35_8->setMaximumSize(QSize(38, 18));
        note35_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_8->setAutoExclusive(true);

        gridNotes->addWidget(note35_8, 2, 8, 1, 1);

        note35_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note35_9);
        note35_9->setObjectName(QStringLiteral("note35_9"));
        sizePolicy.setHeightForWidth(note35_9->sizePolicy().hasHeightForWidth());
        note35_9->setSizePolicy(sizePolicy);
        note35_9->setMinimumSize(QSize(38, 18));
        note35_9->setMaximumSize(QSize(38, 18));
        note35_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_9->setAutoExclusive(true);

        gridNotes->addWidget(note35_9, 2, 9, 1, 1);

        note35_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note35_10);
        note35_10->setObjectName(QStringLiteral("note35_10"));
        sizePolicy.setHeightForWidth(note35_10->sizePolicy().hasHeightForWidth());
        note35_10->setSizePolicy(sizePolicy);
        note35_10->setMinimumSize(QSize(38, 18));
        note35_10->setMaximumSize(QSize(38, 18));
        note35_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_10->setAutoExclusive(true);

        gridNotes->addWidget(note35_10, 2, 10, 1, 1);

        note35_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note35_11);
        note35_11->setObjectName(QStringLiteral("note35_11"));
        sizePolicy.setHeightForWidth(note35_11->sizePolicy().hasHeightForWidth());
        note35_11->setSizePolicy(sizePolicy);
        note35_11->setMinimumSize(QSize(38, 18));
        note35_11->setMaximumSize(QSize(38, 18));
        note35_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_11->setAutoExclusive(true);

        gridNotes->addWidget(note35_11, 2, 11, 1, 1);

        note35_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note35_12);
        note35_12->setObjectName(QStringLiteral("note35_12"));
        sizePolicy.setHeightForWidth(note35_12->sizePolicy().hasHeightForWidth());
        note35_12->setSizePolicy(sizePolicy);
        note35_12->setMinimumSize(QSize(38, 18));
        note35_12->setMaximumSize(QSize(38, 18));
        note35_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_12->setAutoExclusive(true);

        gridNotes->addWidget(note35_12, 2, 12, 1, 1);

        note35_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note35_13);
        note35_13->setObjectName(QStringLiteral("note35_13"));
        sizePolicy.setHeightForWidth(note35_13->sizePolicy().hasHeightForWidth());
        note35_13->setSizePolicy(sizePolicy);
        note35_13->setMinimumSize(QSize(38, 18));
        note35_13->setMaximumSize(QSize(38, 18));
        note35_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_13->setAutoExclusive(true);

        gridNotes->addWidget(note35_13, 2, 13, 1, 1);

        note35_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note35_14);
        note35_14->setObjectName(QStringLiteral("note35_14"));
        sizePolicy.setHeightForWidth(note35_14->sizePolicy().hasHeightForWidth());
        note35_14->setSizePolicy(sizePolicy);
        note35_14->setMinimumSize(QSize(38, 18));
        note35_14->setMaximumSize(QSize(38, 18));
        note35_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_14->setAutoExclusive(true);

        gridNotes->addWidget(note35_14, 2, 14, 1, 1);

        note35_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note35_15);
        note35_15->setObjectName(QStringLiteral("note35_15"));
        sizePolicy.setHeightForWidth(note35_15->sizePolicy().hasHeightForWidth());
        note35_15->setSizePolicy(sizePolicy);
        note35_15->setMinimumSize(QSize(38, 18));
        note35_15->setMaximumSize(QSize(38, 18));
        note35_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note35_15->setAutoExclusive(true);

        gridNotes->addWidget(note35_15, 2, 15, 1, 1);

        note34_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note34_0);
        note34_0->setObjectName(QStringLiteral("note34_0"));
        sizePolicy.setHeightForWidth(note34_0->sizePolicy().hasHeightForWidth());
        note34_0->setSizePolicy(sizePolicy);
        note34_0->setMinimumSize(QSize(38, 18));
        note34_0->setMaximumSize(QSize(38, 18));
        note34_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_0->setAutoExclusive(true);

        gridNotes->addWidget(note34_0, 3, 0, 1, 1);

        note34_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note34_1);
        note34_1->setObjectName(QStringLiteral("note34_1"));
        sizePolicy.setHeightForWidth(note34_1->sizePolicy().hasHeightForWidth());
        note34_1->setSizePolicy(sizePolicy);
        note34_1->setMinimumSize(QSize(38, 18));
        note34_1->setMaximumSize(QSize(38, 18));
        note34_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_1->setAutoExclusive(true);

        gridNotes->addWidget(note34_1, 3, 1, 1, 1);

        note34_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note34_2);
        note34_2->setObjectName(QStringLiteral("note34_2"));
        sizePolicy.setHeightForWidth(note34_2->sizePolicy().hasHeightForWidth());
        note34_2->setSizePolicy(sizePolicy);
        note34_2->setMinimumSize(QSize(38, 18));
        note34_2->setMaximumSize(QSize(38, 18));
        note34_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_2->setAutoExclusive(true);

        gridNotes->addWidget(note34_2, 3, 2, 1, 1);

        note34_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note34_3);
        note34_3->setObjectName(QStringLiteral("note34_3"));
        sizePolicy.setHeightForWidth(note34_3->sizePolicy().hasHeightForWidth());
        note34_3->setSizePolicy(sizePolicy);
        note34_3->setMinimumSize(QSize(38, 18));
        note34_3->setMaximumSize(QSize(38, 18));
        note34_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_3->setAutoExclusive(true);

        gridNotes->addWidget(note34_3, 3, 3, 1, 1);

        note34_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note34_4);
        note34_4->setObjectName(QStringLiteral("note34_4"));
        sizePolicy.setHeightForWidth(note34_4->sizePolicy().hasHeightForWidth());
        note34_4->setSizePolicy(sizePolicy);
        note34_4->setMinimumSize(QSize(38, 18));
        note34_4->setMaximumSize(QSize(38, 18));
        note34_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_4->setAutoExclusive(true);

        gridNotes->addWidget(note34_4, 3, 4, 1, 1);

        note34_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note34_5);
        note34_5->setObjectName(QStringLiteral("note34_5"));
        sizePolicy.setHeightForWidth(note34_5->sizePolicy().hasHeightForWidth());
        note34_5->setSizePolicy(sizePolicy);
        note34_5->setMinimumSize(QSize(38, 18));
        note34_5->setMaximumSize(QSize(38, 18));
        note34_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_5->setAutoExclusive(true);

        gridNotes->addWidget(note34_5, 3, 5, 1, 1);

        note34_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note34_6);
        note34_6->setObjectName(QStringLiteral("note34_6"));
        sizePolicy.setHeightForWidth(note34_6->sizePolicy().hasHeightForWidth());
        note34_6->setSizePolicy(sizePolicy);
        note34_6->setMinimumSize(QSize(38, 18));
        note34_6->setMaximumSize(QSize(38, 18));
        note34_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_6->setAutoExclusive(true);

        gridNotes->addWidget(note34_6, 3, 6, 1, 1);

        note34_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note34_7);
        note34_7->setObjectName(QStringLiteral("note34_7"));
        sizePolicy.setHeightForWidth(note34_7->sizePolicy().hasHeightForWidth());
        note34_7->setSizePolicy(sizePolicy);
        note34_7->setMinimumSize(QSize(38, 18));
        note34_7->setMaximumSize(QSize(38, 18));
        note34_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_7->setAutoExclusive(true);

        gridNotes->addWidget(note34_7, 3, 7, 1, 1);

        note34_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note34_8);
        note34_8->setObjectName(QStringLiteral("note34_8"));
        sizePolicy.setHeightForWidth(note34_8->sizePolicy().hasHeightForWidth());
        note34_8->setSizePolicy(sizePolicy);
        note34_8->setMinimumSize(QSize(38, 18));
        note34_8->setMaximumSize(QSize(38, 18));
        note34_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_8->setAutoExclusive(true);

        gridNotes->addWidget(note34_8, 3, 8, 1, 1);

        note34_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note34_9);
        note34_9->setObjectName(QStringLiteral("note34_9"));
        sizePolicy.setHeightForWidth(note34_9->sizePolicy().hasHeightForWidth());
        note34_9->setSizePolicy(sizePolicy);
        note34_9->setMinimumSize(QSize(38, 18));
        note34_9->setMaximumSize(QSize(38, 18));
        note34_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_9->setAutoExclusive(true);

        gridNotes->addWidget(note34_9, 3, 9, 1, 1);

        note34_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note34_10);
        note34_10->setObjectName(QStringLiteral("note34_10"));
        sizePolicy.setHeightForWidth(note34_10->sizePolicy().hasHeightForWidth());
        note34_10->setSizePolicy(sizePolicy);
        note34_10->setMinimumSize(QSize(38, 18));
        note34_10->setMaximumSize(QSize(38, 18));
        note34_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_10->setAutoExclusive(true);

        gridNotes->addWidget(note34_10, 3, 10, 1, 1);

        note34_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note34_11);
        note34_11->setObjectName(QStringLiteral("note34_11"));
        sizePolicy.setHeightForWidth(note34_11->sizePolicy().hasHeightForWidth());
        note34_11->setSizePolicy(sizePolicy);
        note34_11->setMinimumSize(QSize(38, 18));
        note34_11->setMaximumSize(QSize(38, 18));
        note34_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_11->setAutoExclusive(true);

        gridNotes->addWidget(note34_11, 3, 11, 1, 1);

        note34_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note34_12);
        note34_12->setObjectName(QStringLiteral("note34_12"));
        sizePolicy.setHeightForWidth(note34_12->sizePolicy().hasHeightForWidth());
        note34_12->setSizePolicy(sizePolicy);
        note34_12->setMinimumSize(QSize(38, 18));
        note34_12->setMaximumSize(QSize(38, 18));
        note34_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_12->setAutoExclusive(true);

        gridNotes->addWidget(note34_12, 3, 12, 1, 1);

        note34_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note34_13);
        note34_13->setObjectName(QStringLiteral("note34_13"));
        sizePolicy.setHeightForWidth(note34_13->sizePolicy().hasHeightForWidth());
        note34_13->setSizePolicy(sizePolicy);
        note34_13->setMinimumSize(QSize(38, 18));
        note34_13->setMaximumSize(QSize(38, 18));
        note34_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_13->setAutoExclusive(true);

        gridNotes->addWidget(note34_13, 3, 13, 1, 1);

        note34_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note34_14);
        note34_14->setObjectName(QStringLiteral("note34_14"));
        sizePolicy.setHeightForWidth(note34_14->sizePolicy().hasHeightForWidth());
        note34_14->setSizePolicy(sizePolicy);
        note34_14->setMinimumSize(QSize(38, 18));
        note34_14->setMaximumSize(QSize(38, 18));
        note34_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_14->setAutoExclusive(true);

        gridNotes->addWidget(note34_14, 3, 14, 1, 1);

        note34_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note34_15);
        note34_15->setObjectName(QStringLiteral("note34_15"));
        sizePolicy.setHeightForWidth(note34_15->sizePolicy().hasHeightForWidth());
        note34_15->setSizePolicy(sizePolicy);
        note34_15->setMinimumSize(QSize(38, 18));
        note34_15->setMaximumSize(QSize(38, 18));
        note34_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note34_15->setAutoExclusive(true);

        gridNotes->addWidget(note34_15, 3, 15, 1, 1);

        note33_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note33_0);
        note33_0->setObjectName(QStringLiteral("note33_0"));
        sizePolicy.setHeightForWidth(note33_0->sizePolicy().hasHeightForWidth());
        note33_0->setSizePolicy(sizePolicy);
        note33_0->setMinimumSize(QSize(38, 18));
        note33_0->setMaximumSize(QSize(38, 18));
        note33_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_0->setAutoExclusive(true);

        gridNotes->addWidget(note33_0, 4, 0, 1, 1);

        note33_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note33_1);
        note33_1->setObjectName(QStringLiteral("note33_1"));
        sizePolicy.setHeightForWidth(note33_1->sizePolicy().hasHeightForWidth());
        note33_1->setSizePolicy(sizePolicy);
        note33_1->setMinimumSize(QSize(38, 18));
        note33_1->setMaximumSize(QSize(38, 18));
        note33_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_1->setAutoExclusive(true);

        gridNotes->addWidget(note33_1, 4, 1, 1, 1);

        note33_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note33_2);
        note33_2->setObjectName(QStringLiteral("note33_2"));
        sizePolicy.setHeightForWidth(note33_2->sizePolicy().hasHeightForWidth());
        note33_2->setSizePolicy(sizePolicy);
        note33_2->setMinimumSize(QSize(38, 18));
        note33_2->setMaximumSize(QSize(38, 18));
        note33_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_2->setAutoExclusive(true);

        gridNotes->addWidget(note33_2, 4, 2, 1, 1);

        note33_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note33_3);
        note33_3->setObjectName(QStringLiteral("note33_3"));
        sizePolicy.setHeightForWidth(note33_3->sizePolicy().hasHeightForWidth());
        note33_3->setSizePolicy(sizePolicy);
        note33_3->setMinimumSize(QSize(38, 18));
        note33_3->setMaximumSize(QSize(38, 18));
        note33_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_3->setAutoExclusive(true);

        gridNotes->addWidget(note33_3, 4, 3, 1, 1);

        note33_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note33_4);
        note33_4->setObjectName(QStringLiteral("note33_4"));
        sizePolicy.setHeightForWidth(note33_4->sizePolicy().hasHeightForWidth());
        note33_4->setSizePolicy(sizePolicy);
        note33_4->setMinimumSize(QSize(38, 18));
        note33_4->setMaximumSize(QSize(38, 18));
        note33_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_4->setAutoExclusive(true);

        gridNotes->addWidget(note33_4, 4, 4, 1, 1);

        note33_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note33_5);
        note33_5->setObjectName(QStringLiteral("note33_5"));
        sizePolicy.setHeightForWidth(note33_5->sizePolicy().hasHeightForWidth());
        note33_5->setSizePolicy(sizePolicy);
        note33_5->setMinimumSize(QSize(38, 18));
        note33_5->setMaximumSize(QSize(38, 18));
        note33_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_5->setAutoExclusive(true);

        gridNotes->addWidget(note33_5, 4, 5, 1, 1);

        note33_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note33_6);
        note33_6->setObjectName(QStringLiteral("note33_6"));
        sizePolicy.setHeightForWidth(note33_6->sizePolicy().hasHeightForWidth());
        note33_6->setSizePolicy(sizePolicy);
        note33_6->setMinimumSize(QSize(38, 18));
        note33_6->setMaximumSize(QSize(38, 18));
        note33_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_6->setAutoExclusive(true);

        gridNotes->addWidget(note33_6, 4, 6, 1, 1);

        note33_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note33_7);
        note33_7->setObjectName(QStringLiteral("note33_7"));
        sizePolicy.setHeightForWidth(note33_7->sizePolicy().hasHeightForWidth());
        note33_7->setSizePolicy(sizePolicy);
        note33_7->setMinimumSize(QSize(38, 18));
        note33_7->setMaximumSize(QSize(38, 18));
        note33_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_7->setAutoExclusive(true);

        gridNotes->addWidget(note33_7, 4, 7, 1, 1);

        note33_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note33_8);
        note33_8->setObjectName(QStringLiteral("note33_8"));
        sizePolicy.setHeightForWidth(note33_8->sizePolicy().hasHeightForWidth());
        note33_8->setSizePolicy(sizePolicy);
        note33_8->setMinimumSize(QSize(38, 18));
        note33_8->setMaximumSize(QSize(38, 18));
        note33_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_8->setAutoExclusive(true);

        gridNotes->addWidget(note33_8, 4, 8, 1, 1);

        note33_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note33_9);
        note33_9->setObjectName(QStringLiteral("note33_9"));
        sizePolicy.setHeightForWidth(note33_9->sizePolicy().hasHeightForWidth());
        note33_9->setSizePolicy(sizePolicy);
        note33_9->setMinimumSize(QSize(38, 18));
        note33_9->setMaximumSize(QSize(38, 18));
        note33_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_9->setAutoExclusive(true);

        gridNotes->addWidget(note33_9, 4, 9, 1, 1);

        note33_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note33_10);
        note33_10->setObjectName(QStringLiteral("note33_10"));
        sizePolicy.setHeightForWidth(note33_10->sizePolicy().hasHeightForWidth());
        note33_10->setSizePolicy(sizePolicy);
        note33_10->setMinimumSize(QSize(38, 18));
        note33_10->setMaximumSize(QSize(38, 18));
        note33_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_10->setAutoExclusive(true);

        gridNotes->addWidget(note33_10, 4, 10, 1, 1);

        note33_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note33_11);
        note33_11->setObjectName(QStringLiteral("note33_11"));
        sizePolicy.setHeightForWidth(note33_11->sizePolicy().hasHeightForWidth());
        note33_11->setSizePolicy(sizePolicy);
        note33_11->setMinimumSize(QSize(38, 18));
        note33_11->setMaximumSize(QSize(38, 18));
        note33_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_11->setAutoExclusive(true);

        gridNotes->addWidget(note33_11, 4, 11, 1, 1);

        note33_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note33_12);
        note33_12->setObjectName(QStringLiteral("note33_12"));
        sizePolicy.setHeightForWidth(note33_12->sizePolicy().hasHeightForWidth());
        note33_12->setSizePolicy(sizePolicy);
        note33_12->setMinimumSize(QSize(38, 18));
        note33_12->setMaximumSize(QSize(38, 18));
        note33_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_12->setAutoExclusive(true);

        gridNotes->addWidget(note33_12, 4, 12, 1, 1);

        note33_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note33_13);
        note33_13->setObjectName(QStringLiteral("note33_13"));
        sizePolicy.setHeightForWidth(note33_13->sizePolicy().hasHeightForWidth());
        note33_13->setSizePolicy(sizePolicy);
        note33_13->setMinimumSize(QSize(38, 18));
        note33_13->setMaximumSize(QSize(38, 18));
        note33_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_13->setAutoExclusive(true);

        gridNotes->addWidget(note33_13, 4, 13, 1, 1);

        note33_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note33_14);
        note33_14->setObjectName(QStringLiteral("note33_14"));
        sizePolicy.setHeightForWidth(note33_14->sizePolicy().hasHeightForWidth());
        note33_14->setSizePolicy(sizePolicy);
        note33_14->setMinimumSize(QSize(38, 18));
        note33_14->setMaximumSize(QSize(38, 18));
        note33_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_14->setAutoExclusive(true);

        gridNotes->addWidget(note33_14, 4, 14, 1, 1);

        note33_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note33_15);
        note33_15->setObjectName(QStringLiteral("note33_15"));
        sizePolicy.setHeightForWidth(note33_15->sizePolicy().hasHeightForWidth());
        note33_15->setSizePolicy(sizePolicy);
        note33_15->setMinimumSize(QSize(38, 18));
        note33_15->setMaximumSize(QSize(38, 18));
        note33_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note33_15->setAutoExclusive(true);

        gridNotes->addWidget(note33_15, 4, 15, 1, 1);

        note32_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note32_0);
        note32_0->setObjectName(QStringLiteral("note32_0"));
        sizePolicy.setHeightForWidth(note32_0->sizePolicy().hasHeightForWidth());
        note32_0->setSizePolicy(sizePolicy);
        note32_0->setMinimumSize(QSize(38, 18));
        note32_0->setMaximumSize(QSize(38, 18));
        note32_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_0->setAutoExclusive(true);

        gridNotes->addWidget(note32_0, 5, 0, 1, 1);

        note32_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note32_1);
        note32_1->setObjectName(QStringLiteral("note32_1"));
        sizePolicy.setHeightForWidth(note32_1->sizePolicy().hasHeightForWidth());
        note32_1->setSizePolicy(sizePolicy);
        note32_1->setMinimumSize(QSize(38, 18));
        note32_1->setMaximumSize(QSize(38, 18));
        note32_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_1->setAutoExclusive(true);

        gridNotes->addWidget(note32_1, 5, 1, 1, 1);

        note32_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note32_2);
        note32_2->setObjectName(QStringLiteral("note32_2"));
        sizePolicy.setHeightForWidth(note32_2->sizePolicy().hasHeightForWidth());
        note32_2->setSizePolicy(sizePolicy);
        note32_2->setMinimumSize(QSize(38, 18));
        note32_2->setMaximumSize(QSize(38, 18));
        note32_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_2->setAutoExclusive(true);

        gridNotes->addWidget(note32_2, 5, 2, 1, 1);

        note32_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note32_3);
        note32_3->setObjectName(QStringLiteral("note32_3"));
        sizePolicy.setHeightForWidth(note32_3->sizePolicy().hasHeightForWidth());
        note32_3->setSizePolicy(sizePolicy);
        note32_3->setMinimumSize(QSize(38, 18));
        note32_3->setMaximumSize(QSize(38, 18));
        note32_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_3->setAutoExclusive(true);

        gridNotes->addWidget(note32_3, 5, 3, 1, 1);

        note32_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note32_4);
        note32_4->setObjectName(QStringLiteral("note32_4"));
        sizePolicy.setHeightForWidth(note32_4->sizePolicy().hasHeightForWidth());
        note32_4->setSizePolicy(sizePolicy);
        note32_4->setMinimumSize(QSize(38, 18));
        note32_4->setMaximumSize(QSize(38, 18));
        note32_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_4->setAutoExclusive(true);

        gridNotes->addWidget(note32_4, 5, 4, 1, 1);

        note32_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note32_5);
        note32_5->setObjectName(QStringLiteral("note32_5"));
        sizePolicy.setHeightForWidth(note32_5->sizePolicy().hasHeightForWidth());
        note32_5->setSizePolicy(sizePolicy);
        note32_5->setMinimumSize(QSize(38, 18));
        note32_5->setMaximumSize(QSize(38, 18));
        note32_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_5->setAutoExclusive(true);

        gridNotes->addWidget(note32_5, 5, 5, 1, 1);

        note32_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note32_6);
        note32_6->setObjectName(QStringLiteral("note32_6"));
        sizePolicy.setHeightForWidth(note32_6->sizePolicy().hasHeightForWidth());
        note32_6->setSizePolicy(sizePolicy);
        note32_6->setMinimumSize(QSize(38, 18));
        note32_6->setMaximumSize(QSize(38, 18));
        note32_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_6->setAutoExclusive(true);

        gridNotes->addWidget(note32_6, 5, 6, 1, 1);

        note32_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note32_7);
        note32_7->setObjectName(QStringLiteral("note32_7"));
        sizePolicy.setHeightForWidth(note32_7->sizePolicy().hasHeightForWidth());
        note32_7->setSizePolicy(sizePolicy);
        note32_7->setMinimumSize(QSize(38, 18));
        note32_7->setMaximumSize(QSize(38, 18));
        note32_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_7->setAutoExclusive(true);

        gridNotes->addWidget(note32_7, 5, 7, 1, 1);

        note32_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note32_8);
        note32_8->setObjectName(QStringLiteral("note32_8"));
        sizePolicy.setHeightForWidth(note32_8->sizePolicy().hasHeightForWidth());
        note32_8->setSizePolicy(sizePolicy);
        note32_8->setMinimumSize(QSize(38, 18));
        note32_8->setMaximumSize(QSize(38, 18));
        note32_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_8->setAutoExclusive(true);

        gridNotes->addWidget(note32_8, 5, 8, 1, 1);

        note32_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note32_9);
        note32_9->setObjectName(QStringLiteral("note32_9"));
        sizePolicy.setHeightForWidth(note32_9->sizePolicy().hasHeightForWidth());
        note32_9->setSizePolicy(sizePolicy);
        note32_9->setMinimumSize(QSize(38, 18));
        note32_9->setMaximumSize(QSize(38, 18));
        note32_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_9->setAutoExclusive(true);

        gridNotes->addWidget(note32_9, 5, 9, 1, 1);

        note32_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note32_10);
        note32_10->setObjectName(QStringLiteral("note32_10"));
        sizePolicy.setHeightForWidth(note32_10->sizePolicy().hasHeightForWidth());
        note32_10->setSizePolicy(sizePolicy);
        note32_10->setMinimumSize(QSize(38, 18));
        note32_10->setMaximumSize(QSize(38, 18));
        note32_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_10->setAutoExclusive(true);

        gridNotes->addWidget(note32_10, 5, 10, 1, 1);

        note32_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note32_11);
        note32_11->setObjectName(QStringLiteral("note32_11"));
        sizePolicy.setHeightForWidth(note32_11->sizePolicy().hasHeightForWidth());
        note32_11->setSizePolicy(sizePolicy);
        note32_11->setMinimumSize(QSize(38, 18));
        note32_11->setMaximumSize(QSize(38, 18));
        note32_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_11->setAutoExclusive(true);

        gridNotes->addWidget(note32_11, 5, 11, 1, 1);

        note32_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note32_12);
        note32_12->setObjectName(QStringLiteral("note32_12"));
        sizePolicy.setHeightForWidth(note32_12->sizePolicy().hasHeightForWidth());
        note32_12->setSizePolicy(sizePolicy);
        note32_12->setMinimumSize(QSize(38, 18));
        note32_12->setMaximumSize(QSize(38, 18));
        note32_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_12->setAutoExclusive(true);

        gridNotes->addWidget(note32_12, 5, 12, 1, 1);

        note32_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note32_13);
        note32_13->setObjectName(QStringLiteral("note32_13"));
        sizePolicy.setHeightForWidth(note32_13->sizePolicy().hasHeightForWidth());
        note32_13->setSizePolicy(sizePolicy);
        note32_13->setMinimumSize(QSize(38, 18));
        note32_13->setMaximumSize(QSize(38, 18));
        note32_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_13->setAutoExclusive(true);

        gridNotes->addWidget(note32_13, 5, 13, 1, 1);

        note32_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note32_14);
        note32_14->setObjectName(QStringLiteral("note32_14"));
        sizePolicy.setHeightForWidth(note32_14->sizePolicy().hasHeightForWidth());
        note32_14->setSizePolicy(sizePolicy);
        note32_14->setMinimumSize(QSize(38, 18));
        note32_14->setMaximumSize(QSize(38, 18));
        note32_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_14->setAutoExclusive(true);

        gridNotes->addWidget(note32_14, 5, 14, 1, 1);

        note32_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note32_15);
        note32_15->setObjectName(QStringLiteral("note32_15"));
        sizePolicy.setHeightForWidth(note32_15->sizePolicy().hasHeightForWidth());
        note32_15->setSizePolicy(sizePolicy);
        note32_15->setMinimumSize(QSize(38, 18));
        note32_15->setMaximumSize(QSize(38, 18));
        note32_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note32_15->setAutoExclusive(true);

        gridNotes->addWidget(note32_15, 5, 15, 1, 1);

        note31_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note31_0);
        note31_0->setObjectName(QStringLiteral("note31_0"));
        sizePolicy.setHeightForWidth(note31_0->sizePolicy().hasHeightForWidth());
        note31_0->setSizePolicy(sizePolicy);
        note31_0->setMinimumSize(QSize(38, 18));
        note31_0->setMaximumSize(QSize(38, 18));
        note31_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_0->setAutoExclusive(true);

        gridNotes->addWidget(note31_0, 6, 0, 1, 1);

        note31_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note31_1);
        note31_1->setObjectName(QStringLiteral("note31_1"));
        sizePolicy.setHeightForWidth(note31_1->sizePolicy().hasHeightForWidth());
        note31_1->setSizePolicy(sizePolicy);
        note31_1->setMinimumSize(QSize(38, 18));
        note31_1->setMaximumSize(QSize(38, 18));
        note31_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_1->setAutoExclusive(true);

        gridNotes->addWidget(note31_1, 6, 1, 1, 1);

        note31_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note31_2);
        note31_2->setObjectName(QStringLiteral("note31_2"));
        sizePolicy.setHeightForWidth(note31_2->sizePolicy().hasHeightForWidth());
        note31_2->setSizePolicy(sizePolicy);
        note31_2->setMinimumSize(QSize(38, 18));
        note31_2->setMaximumSize(QSize(38, 18));
        note31_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_2->setAutoExclusive(true);

        gridNotes->addWidget(note31_2, 6, 2, 1, 1);

        note31_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note31_3);
        note31_3->setObjectName(QStringLiteral("note31_3"));
        sizePolicy.setHeightForWidth(note31_3->sizePolicy().hasHeightForWidth());
        note31_3->setSizePolicy(sizePolicy);
        note31_3->setMinimumSize(QSize(38, 18));
        note31_3->setMaximumSize(QSize(38, 18));
        note31_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_3->setAutoExclusive(true);

        gridNotes->addWidget(note31_3, 6, 3, 1, 1);

        note31_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note31_4);
        note31_4->setObjectName(QStringLiteral("note31_4"));
        sizePolicy.setHeightForWidth(note31_4->sizePolicy().hasHeightForWidth());
        note31_4->setSizePolicy(sizePolicy);
        note31_4->setMinimumSize(QSize(38, 18));
        note31_4->setMaximumSize(QSize(38, 18));
        note31_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_4->setAutoExclusive(true);

        gridNotes->addWidget(note31_4, 6, 4, 1, 1);

        note31_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note31_5);
        note31_5->setObjectName(QStringLiteral("note31_5"));
        sizePolicy.setHeightForWidth(note31_5->sizePolicy().hasHeightForWidth());
        note31_5->setSizePolicy(sizePolicy);
        note31_5->setMinimumSize(QSize(38, 18));
        note31_5->setMaximumSize(QSize(38, 18));
        note31_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_5->setAutoExclusive(true);

        gridNotes->addWidget(note31_5, 6, 5, 1, 1);

        note31_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note31_6);
        note31_6->setObjectName(QStringLiteral("note31_6"));
        sizePolicy.setHeightForWidth(note31_6->sizePolicy().hasHeightForWidth());
        note31_6->setSizePolicy(sizePolicy);
        note31_6->setMinimumSize(QSize(38, 18));
        note31_6->setMaximumSize(QSize(38, 18));
        note31_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_6->setAutoExclusive(true);

        gridNotes->addWidget(note31_6, 6, 6, 1, 1);

        note31_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note31_7);
        note31_7->setObjectName(QStringLiteral("note31_7"));
        sizePolicy.setHeightForWidth(note31_7->sizePolicy().hasHeightForWidth());
        note31_7->setSizePolicy(sizePolicy);
        note31_7->setMinimumSize(QSize(38, 18));
        note31_7->setMaximumSize(QSize(38, 18));
        note31_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_7->setAutoExclusive(true);

        gridNotes->addWidget(note31_7, 6, 7, 1, 1);

        note31_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note31_8);
        note31_8->setObjectName(QStringLiteral("note31_8"));
        sizePolicy.setHeightForWidth(note31_8->sizePolicy().hasHeightForWidth());
        note31_8->setSizePolicy(sizePolicy);
        note31_8->setMinimumSize(QSize(38, 18));
        note31_8->setMaximumSize(QSize(38, 18));
        note31_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_8->setAutoExclusive(true);

        gridNotes->addWidget(note31_8, 6, 8, 1, 1);

        note31_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note31_9);
        note31_9->setObjectName(QStringLiteral("note31_9"));
        sizePolicy.setHeightForWidth(note31_9->sizePolicy().hasHeightForWidth());
        note31_9->setSizePolicy(sizePolicy);
        note31_9->setMinimumSize(QSize(38, 18));
        note31_9->setMaximumSize(QSize(38, 18));
        note31_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_9->setAutoExclusive(true);

        gridNotes->addWidget(note31_9, 6, 9, 1, 1);

        note31_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note31_10);
        note31_10->setObjectName(QStringLiteral("note31_10"));
        sizePolicy.setHeightForWidth(note31_10->sizePolicy().hasHeightForWidth());
        note31_10->setSizePolicy(sizePolicy);
        note31_10->setMinimumSize(QSize(38, 18));
        note31_10->setMaximumSize(QSize(38, 18));
        note31_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_10->setAutoExclusive(true);

        gridNotes->addWidget(note31_10, 6, 10, 1, 1);

        note31_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note31_11);
        note31_11->setObjectName(QStringLiteral("note31_11"));
        sizePolicy.setHeightForWidth(note31_11->sizePolicy().hasHeightForWidth());
        note31_11->setSizePolicy(sizePolicy);
        note31_11->setMinimumSize(QSize(38, 18));
        note31_11->setMaximumSize(QSize(38, 18));
        note31_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_11->setAutoExclusive(true);

        gridNotes->addWidget(note31_11, 6, 11, 1, 1);

        note31_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note31_12);
        note31_12->setObjectName(QStringLiteral("note31_12"));
        sizePolicy.setHeightForWidth(note31_12->sizePolicy().hasHeightForWidth());
        note31_12->setSizePolicy(sizePolicy);
        note31_12->setMinimumSize(QSize(38, 18));
        note31_12->setMaximumSize(QSize(38, 18));
        note31_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_12->setAutoExclusive(true);

        gridNotes->addWidget(note31_12, 6, 12, 1, 1);

        note31_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note31_13);
        note31_13->setObjectName(QStringLiteral("note31_13"));
        sizePolicy.setHeightForWidth(note31_13->sizePolicy().hasHeightForWidth());
        note31_13->setSizePolicy(sizePolicy);
        note31_13->setMinimumSize(QSize(38, 18));
        note31_13->setMaximumSize(QSize(38, 18));
        note31_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_13->setAutoExclusive(true);

        gridNotes->addWidget(note31_13, 6, 13, 1, 1);

        note31_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note31_14);
        note31_14->setObjectName(QStringLiteral("note31_14"));
        sizePolicy.setHeightForWidth(note31_14->sizePolicy().hasHeightForWidth());
        note31_14->setSizePolicy(sizePolicy);
        note31_14->setMinimumSize(QSize(38, 18));
        note31_14->setMaximumSize(QSize(38, 18));
        note31_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_14->setAutoExclusive(true);

        gridNotes->addWidget(note31_14, 6, 14, 1, 1);

        note31_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note31_15);
        note31_15->setObjectName(QStringLiteral("note31_15"));
        sizePolicy.setHeightForWidth(note31_15->sizePolicy().hasHeightForWidth());
        note31_15->setSizePolicy(sizePolicy);
        note31_15->setMinimumSize(QSize(38, 18));
        note31_15->setMaximumSize(QSize(38, 18));
        note31_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note31_15->setAutoExclusive(true);

        gridNotes->addWidget(note31_15, 6, 15, 1, 1);

        note30_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note30_0);
        note30_0->setObjectName(QStringLiteral("note30_0"));
        sizePolicy.setHeightForWidth(note30_0->sizePolicy().hasHeightForWidth());
        note30_0->setSizePolicy(sizePolicy);
        note30_0->setMinimumSize(QSize(38, 18));
        note30_0->setMaximumSize(QSize(38, 18));
        note30_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_0->setAutoExclusive(true);

        gridNotes->addWidget(note30_0, 7, 0, 1, 1);

        note30_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note30_1);
        note30_1->setObjectName(QStringLiteral("note30_1"));
        sizePolicy.setHeightForWidth(note30_1->sizePolicy().hasHeightForWidth());
        note30_1->setSizePolicy(sizePolicy);
        note30_1->setMinimumSize(QSize(38, 18));
        note30_1->setMaximumSize(QSize(38, 18));
        note30_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_1->setAutoExclusive(true);

        gridNotes->addWidget(note30_1, 7, 1, 1, 1);

        note30_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note30_2);
        note30_2->setObjectName(QStringLiteral("note30_2"));
        sizePolicy.setHeightForWidth(note30_2->sizePolicy().hasHeightForWidth());
        note30_2->setSizePolicy(sizePolicy);
        note30_2->setMinimumSize(QSize(38, 18));
        note30_2->setMaximumSize(QSize(38, 18));
        note30_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_2->setAutoExclusive(true);

        gridNotes->addWidget(note30_2, 7, 2, 1, 1);

        note30_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note30_3);
        note30_3->setObjectName(QStringLiteral("note30_3"));
        sizePolicy.setHeightForWidth(note30_3->sizePolicy().hasHeightForWidth());
        note30_3->setSizePolicy(sizePolicy);
        note30_3->setMinimumSize(QSize(38, 18));
        note30_3->setMaximumSize(QSize(38, 18));
        note30_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_3->setAutoExclusive(true);

        gridNotes->addWidget(note30_3, 7, 3, 1, 1);

        note30_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note30_4);
        note30_4->setObjectName(QStringLiteral("note30_4"));
        sizePolicy.setHeightForWidth(note30_4->sizePolicy().hasHeightForWidth());
        note30_4->setSizePolicy(sizePolicy);
        note30_4->setMinimumSize(QSize(38, 18));
        note30_4->setMaximumSize(QSize(38, 18));
        note30_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_4->setAutoExclusive(true);

        gridNotes->addWidget(note30_4, 7, 4, 1, 1);

        note30_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note30_5);
        note30_5->setObjectName(QStringLiteral("note30_5"));
        sizePolicy.setHeightForWidth(note30_5->sizePolicy().hasHeightForWidth());
        note30_5->setSizePolicy(sizePolicy);
        note30_5->setMinimumSize(QSize(38, 18));
        note30_5->setMaximumSize(QSize(38, 18));
        note30_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_5->setAutoExclusive(true);

        gridNotes->addWidget(note30_5, 7, 5, 1, 1);

        note30_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note30_6);
        note30_6->setObjectName(QStringLiteral("note30_6"));
        sizePolicy.setHeightForWidth(note30_6->sizePolicy().hasHeightForWidth());
        note30_6->setSizePolicy(sizePolicy);
        note30_6->setMinimumSize(QSize(38, 18));
        note30_6->setMaximumSize(QSize(38, 18));
        note30_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_6->setAutoExclusive(true);

        gridNotes->addWidget(note30_6, 7, 6, 1, 1);

        note30_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note30_7);
        note30_7->setObjectName(QStringLiteral("note30_7"));
        sizePolicy.setHeightForWidth(note30_7->sizePolicy().hasHeightForWidth());
        note30_7->setSizePolicy(sizePolicy);
        note30_7->setMinimumSize(QSize(38, 18));
        note30_7->setMaximumSize(QSize(38, 18));
        note30_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_7->setAutoExclusive(true);

        gridNotes->addWidget(note30_7, 7, 7, 1, 1);

        note30_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note30_8);
        note30_8->setObjectName(QStringLiteral("note30_8"));
        sizePolicy.setHeightForWidth(note30_8->sizePolicy().hasHeightForWidth());
        note30_8->setSizePolicy(sizePolicy);
        note30_8->setMinimumSize(QSize(38, 18));
        note30_8->setMaximumSize(QSize(38, 18));
        note30_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_8->setAutoExclusive(true);

        gridNotes->addWidget(note30_8, 7, 8, 1, 1);

        note30_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note30_9);
        note30_9->setObjectName(QStringLiteral("note30_9"));
        sizePolicy.setHeightForWidth(note30_9->sizePolicy().hasHeightForWidth());
        note30_9->setSizePolicy(sizePolicy);
        note30_9->setMinimumSize(QSize(38, 18));
        note30_9->setMaximumSize(QSize(38, 18));
        note30_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_9->setAutoExclusive(true);

        gridNotes->addWidget(note30_9, 7, 9, 1, 1);

        note30_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note30_10);
        note30_10->setObjectName(QStringLiteral("note30_10"));
        sizePolicy.setHeightForWidth(note30_10->sizePolicy().hasHeightForWidth());
        note30_10->setSizePolicy(sizePolicy);
        note30_10->setMinimumSize(QSize(38, 18));
        note30_10->setMaximumSize(QSize(38, 18));
        note30_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_10->setAutoExclusive(true);

        gridNotes->addWidget(note30_10, 7, 10, 1, 1);

        note30_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note30_11);
        note30_11->setObjectName(QStringLiteral("note30_11"));
        sizePolicy.setHeightForWidth(note30_11->sizePolicy().hasHeightForWidth());
        note30_11->setSizePolicy(sizePolicy);
        note30_11->setMinimumSize(QSize(38, 18));
        note30_11->setMaximumSize(QSize(38, 18));
        note30_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_11->setAutoExclusive(true);

        gridNotes->addWidget(note30_11, 7, 11, 1, 1);

        note30_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note30_12);
        note30_12->setObjectName(QStringLiteral("note30_12"));
        sizePolicy.setHeightForWidth(note30_12->sizePolicy().hasHeightForWidth());
        note30_12->setSizePolicy(sizePolicy);
        note30_12->setMinimumSize(QSize(38, 18));
        note30_12->setMaximumSize(QSize(38, 18));
        note30_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_12->setAutoExclusive(true);

        gridNotes->addWidget(note30_12, 7, 12, 1, 1);

        note30_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note30_13);
        note30_13->setObjectName(QStringLiteral("note30_13"));
        sizePolicy.setHeightForWidth(note30_13->sizePolicy().hasHeightForWidth());
        note30_13->setSizePolicy(sizePolicy);
        note30_13->setMinimumSize(QSize(38, 18));
        note30_13->setMaximumSize(QSize(38, 18));
        note30_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_13->setAutoExclusive(true);

        gridNotes->addWidget(note30_13, 7, 13, 1, 1);

        note30_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note30_14);
        note30_14->setObjectName(QStringLiteral("note30_14"));
        sizePolicy.setHeightForWidth(note30_14->sizePolicy().hasHeightForWidth());
        note30_14->setSizePolicy(sizePolicy);
        note30_14->setMinimumSize(QSize(38, 18));
        note30_14->setMaximumSize(QSize(38, 18));
        note30_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_14->setAutoExclusive(true);

        gridNotes->addWidget(note30_14, 7, 14, 1, 1);

        note30_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note30_15);
        note30_15->setObjectName(QStringLiteral("note30_15"));
        sizePolicy.setHeightForWidth(note30_15->sizePolicy().hasHeightForWidth());
        note30_15->setSizePolicy(sizePolicy);
        note30_15->setMinimumSize(QSize(38, 18));
        note30_15->setMaximumSize(QSize(38, 18));
        note30_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note30_15->setAutoExclusive(true);

        gridNotes->addWidget(note30_15, 7, 15, 1, 1);

        note29_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note29_0);
        note29_0->setObjectName(QStringLiteral("note29_0"));
        sizePolicy.setHeightForWidth(note29_0->sizePolicy().hasHeightForWidth());
        note29_0->setSizePolicy(sizePolicy);
        note29_0->setMinimumSize(QSize(38, 18));
        note29_0->setMaximumSize(QSize(38, 18));
        note29_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_0->setAutoExclusive(true);

        gridNotes->addWidget(note29_0, 8, 0, 1, 1);

        note29_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note29_1);
        note29_1->setObjectName(QStringLiteral("note29_1"));
        sizePolicy.setHeightForWidth(note29_1->sizePolicy().hasHeightForWidth());
        note29_1->setSizePolicy(sizePolicy);
        note29_1->setMinimumSize(QSize(38, 18));
        note29_1->setMaximumSize(QSize(38, 18));
        note29_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_1->setAutoExclusive(true);

        gridNotes->addWidget(note29_1, 8, 1, 1, 1);

        note29_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note29_2);
        note29_2->setObjectName(QStringLiteral("note29_2"));
        sizePolicy.setHeightForWidth(note29_2->sizePolicy().hasHeightForWidth());
        note29_2->setSizePolicy(sizePolicy);
        note29_2->setMinimumSize(QSize(38, 18));
        note29_2->setMaximumSize(QSize(38, 18));
        note29_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_2->setAutoExclusive(true);

        gridNotes->addWidget(note29_2, 8, 2, 1, 1);

        note29_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note29_3);
        note29_3->setObjectName(QStringLiteral("note29_3"));
        sizePolicy.setHeightForWidth(note29_3->sizePolicy().hasHeightForWidth());
        note29_3->setSizePolicy(sizePolicy);
        note29_3->setMinimumSize(QSize(38, 18));
        note29_3->setMaximumSize(QSize(38, 18));
        note29_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_3->setAutoExclusive(true);

        gridNotes->addWidget(note29_3, 8, 3, 1, 1);

        note29_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note29_4);
        note29_4->setObjectName(QStringLiteral("note29_4"));
        sizePolicy.setHeightForWidth(note29_4->sizePolicy().hasHeightForWidth());
        note29_4->setSizePolicy(sizePolicy);
        note29_4->setMinimumSize(QSize(38, 18));
        note29_4->setMaximumSize(QSize(38, 18));
        note29_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_4->setAutoExclusive(true);

        gridNotes->addWidget(note29_4, 8, 4, 1, 1);

        note29_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note29_5);
        note29_5->setObjectName(QStringLiteral("note29_5"));
        sizePolicy.setHeightForWidth(note29_5->sizePolicy().hasHeightForWidth());
        note29_5->setSizePolicy(sizePolicy);
        note29_5->setMinimumSize(QSize(38, 18));
        note29_5->setMaximumSize(QSize(38, 18));
        note29_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_5->setAutoExclusive(true);

        gridNotes->addWidget(note29_5, 8, 5, 1, 1);

        note29_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note29_6);
        note29_6->setObjectName(QStringLiteral("note29_6"));
        sizePolicy.setHeightForWidth(note29_6->sizePolicy().hasHeightForWidth());
        note29_6->setSizePolicy(sizePolicy);
        note29_6->setMinimumSize(QSize(38, 18));
        note29_6->setMaximumSize(QSize(38, 18));
        note29_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_6->setAutoExclusive(true);

        gridNotes->addWidget(note29_6, 8, 6, 1, 1);

        note29_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note29_7);
        note29_7->setObjectName(QStringLiteral("note29_7"));
        sizePolicy.setHeightForWidth(note29_7->sizePolicy().hasHeightForWidth());
        note29_7->setSizePolicy(sizePolicy);
        note29_7->setMinimumSize(QSize(38, 18));
        note29_7->setMaximumSize(QSize(38, 18));
        note29_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_7->setAutoExclusive(true);

        gridNotes->addWidget(note29_7, 8, 7, 1, 1);

        note29_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note29_8);
        note29_8->setObjectName(QStringLiteral("note29_8"));
        sizePolicy.setHeightForWidth(note29_8->sizePolicy().hasHeightForWidth());
        note29_8->setSizePolicy(sizePolicy);
        note29_8->setMinimumSize(QSize(38, 18));
        note29_8->setMaximumSize(QSize(38, 18));
        note29_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_8->setAutoExclusive(true);

        gridNotes->addWidget(note29_8, 8, 8, 1, 1);

        note29_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note29_9);
        note29_9->setObjectName(QStringLiteral("note29_9"));
        sizePolicy.setHeightForWidth(note29_9->sizePolicy().hasHeightForWidth());
        note29_9->setSizePolicy(sizePolicy);
        note29_9->setMinimumSize(QSize(38, 18));
        note29_9->setMaximumSize(QSize(38, 18));
        note29_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_9->setAutoExclusive(true);

        gridNotes->addWidget(note29_9, 8, 9, 1, 1);

        note29_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note29_10);
        note29_10->setObjectName(QStringLiteral("note29_10"));
        sizePolicy.setHeightForWidth(note29_10->sizePolicy().hasHeightForWidth());
        note29_10->setSizePolicy(sizePolicy);
        note29_10->setMinimumSize(QSize(38, 18));
        note29_10->setMaximumSize(QSize(38, 18));
        note29_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_10->setAutoExclusive(true);

        gridNotes->addWidget(note29_10, 8, 10, 1, 1);

        note29_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note29_11);
        note29_11->setObjectName(QStringLiteral("note29_11"));
        sizePolicy.setHeightForWidth(note29_11->sizePolicy().hasHeightForWidth());
        note29_11->setSizePolicy(sizePolicy);
        note29_11->setMinimumSize(QSize(38, 18));
        note29_11->setMaximumSize(QSize(38, 18));
        note29_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_11->setAutoExclusive(true);

        gridNotes->addWidget(note29_11, 8, 11, 1, 1);

        note29_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note29_12);
        note29_12->setObjectName(QStringLiteral("note29_12"));
        sizePolicy.setHeightForWidth(note29_12->sizePolicy().hasHeightForWidth());
        note29_12->setSizePolicy(sizePolicy);
        note29_12->setMinimumSize(QSize(38, 18));
        note29_12->setMaximumSize(QSize(38, 18));
        note29_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_12->setAutoExclusive(true);

        gridNotes->addWidget(note29_12, 8, 12, 1, 1);

        note29_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note29_13);
        note29_13->setObjectName(QStringLiteral("note29_13"));
        sizePolicy.setHeightForWidth(note29_13->sizePolicy().hasHeightForWidth());
        note29_13->setSizePolicy(sizePolicy);
        note29_13->setMinimumSize(QSize(38, 18));
        note29_13->setMaximumSize(QSize(38, 18));
        note29_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_13->setAutoExclusive(true);

        gridNotes->addWidget(note29_13, 8, 13, 1, 1);

        note29_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note29_14);
        note29_14->setObjectName(QStringLiteral("note29_14"));
        sizePolicy.setHeightForWidth(note29_14->sizePolicy().hasHeightForWidth());
        note29_14->setSizePolicy(sizePolicy);
        note29_14->setMinimumSize(QSize(38, 18));
        note29_14->setMaximumSize(QSize(38, 18));
        note29_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_14->setAutoExclusive(true);

        gridNotes->addWidget(note29_14, 8, 14, 1, 1);

        note29_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note29_15);
        note29_15->setObjectName(QStringLiteral("note29_15"));
        sizePolicy.setHeightForWidth(note29_15->sizePolicy().hasHeightForWidth());
        note29_15->setSizePolicy(sizePolicy);
        note29_15->setMinimumSize(QSize(38, 18));
        note29_15->setMaximumSize(QSize(38, 18));
        note29_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note29_15->setAutoExclusive(true);

        gridNotes->addWidget(note29_15, 8, 15, 1, 1);

        note28_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note28_0);
        note28_0->setObjectName(QStringLiteral("note28_0"));
        sizePolicy.setHeightForWidth(note28_0->sizePolicy().hasHeightForWidth());
        note28_0->setSizePolicy(sizePolicy);
        note28_0->setMinimumSize(QSize(38, 18));
        note28_0->setMaximumSize(QSize(38, 18));
        note28_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_0->setAutoExclusive(true);

        gridNotes->addWidget(note28_0, 9, 0, 1, 1);

        note28_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note28_1);
        note28_1->setObjectName(QStringLiteral("note28_1"));
        sizePolicy.setHeightForWidth(note28_1->sizePolicy().hasHeightForWidth());
        note28_1->setSizePolicy(sizePolicy);
        note28_1->setMinimumSize(QSize(38, 18));
        note28_1->setMaximumSize(QSize(38, 18));
        note28_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_1->setAutoExclusive(true);

        gridNotes->addWidget(note28_1, 9, 1, 1, 1);

        note28_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note28_2);
        note28_2->setObjectName(QStringLiteral("note28_2"));
        sizePolicy.setHeightForWidth(note28_2->sizePolicy().hasHeightForWidth());
        note28_2->setSizePolicy(sizePolicy);
        note28_2->setMinimumSize(QSize(38, 18));
        note28_2->setMaximumSize(QSize(38, 18));
        note28_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_2->setAutoExclusive(true);

        gridNotes->addWidget(note28_2, 9, 2, 1, 1);

        note28_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note28_3);
        note28_3->setObjectName(QStringLiteral("note28_3"));
        sizePolicy.setHeightForWidth(note28_3->sizePolicy().hasHeightForWidth());
        note28_3->setSizePolicy(sizePolicy);
        note28_3->setMinimumSize(QSize(38, 18));
        note28_3->setMaximumSize(QSize(38, 18));
        note28_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_3->setAutoExclusive(true);

        gridNotes->addWidget(note28_3, 9, 3, 1, 1);

        note28_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note28_4);
        note28_4->setObjectName(QStringLiteral("note28_4"));
        sizePolicy.setHeightForWidth(note28_4->sizePolicy().hasHeightForWidth());
        note28_4->setSizePolicy(sizePolicy);
        note28_4->setMinimumSize(QSize(38, 18));
        note28_4->setMaximumSize(QSize(38, 18));
        note28_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_4->setAutoExclusive(true);

        gridNotes->addWidget(note28_4, 9, 4, 1, 1);

        note28_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note28_5);
        note28_5->setObjectName(QStringLiteral("note28_5"));
        sizePolicy.setHeightForWidth(note28_5->sizePolicy().hasHeightForWidth());
        note28_5->setSizePolicy(sizePolicy);
        note28_5->setMinimumSize(QSize(38, 18));
        note28_5->setMaximumSize(QSize(38, 18));
        note28_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_5->setAutoExclusive(true);

        gridNotes->addWidget(note28_5, 9, 5, 1, 1);

        note28_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note28_6);
        note28_6->setObjectName(QStringLiteral("note28_6"));
        sizePolicy.setHeightForWidth(note28_6->sizePolicy().hasHeightForWidth());
        note28_6->setSizePolicy(sizePolicy);
        note28_6->setMinimumSize(QSize(38, 18));
        note28_6->setMaximumSize(QSize(38, 18));
        note28_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_6->setAutoExclusive(true);

        gridNotes->addWidget(note28_6, 9, 6, 1, 1);

        note28_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note28_7);
        note28_7->setObjectName(QStringLiteral("note28_7"));
        sizePolicy.setHeightForWidth(note28_7->sizePolicy().hasHeightForWidth());
        note28_7->setSizePolicy(sizePolicy);
        note28_7->setMinimumSize(QSize(38, 18));
        note28_7->setMaximumSize(QSize(38, 18));
        note28_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_7->setAutoExclusive(true);

        gridNotes->addWidget(note28_7, 9, 7, 1, 1);

        note28_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note28_8);
        note28_8->setObjectName(QStringLiteral("note28_8"));
        sizePolicy.setHeightForWidth(note28_8->sizePolicy().hasHeightForWidth());
        note28_8->setSizePolicy(sizePolicy);
        note28_8->setMinimumSize(QSize(38, 18));
        note28_8->setMaximumSize(QSize(38, 18));
        note28_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_8->setAutoExclusive(true);

        gridNotes->addWidget(note28_8, 9, 8, 1, 1);

        note28_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note28_9);
        note28_9->setObjectName(QStringLiteral("note28_9"));
        sizePolicy.setHeightForWidth(note28_9->sizePolicy().hasHeightForWidth());
        note28_9->setSizePolicy(sizePolicy);
        note28_9->setMinimumSize(QSize(38, 18));
        note28_9->setMaximumSize(QSize(38, 18));
        note28_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_9->setAutoExclusive(true);

        gridNotes->addWidget(note28_9, 9, 9, 1, 1);

        note28_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note28_10);
        note28_10->setObjectName(QStringLiteral("note28_10"));
        sizePolicy.setHeightForWidth(note28_10->sizePolicy().hasHeightForWidth());
        note28_10->setSizePolicy(sizePolicy);
        note28_10->setMinimumSize(QSize(38, 18));
        note28_10->setMaximumSize(QSize(38, 18));
        note28_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_10->setAutoExclusive(true);

        gridNotes->addWidget(note28_10, 9, 10, 1, 1);

        note28_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note28_11);
        note28_11->setObjectName(QStringLiteral("note28_11"));
        sizePolicy.setHeightForWidth(note28_11->sizePolicy().hasHeightForWidth());
        note28_11->setSizePolicy(sizePolicy);
        note28_11->setMinimumSize(QSize(38, 18));
        note28_11->setMaximumSize(QSize(38, 18));
        note28_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_11->setAutoExclusive(true);

        gridNotes->addWidget(note28_11, 9, 11, 1, 1);

        note28_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note28_12);
        note28_12->setObjectName(QStringLiteral("note28_12"));
        sizePolicy.setHeightForWidth(note28_12->sizePolicy().hasHeightForWidth());
        note28_12->setSizePolicy(sizePolicy);
        note28_12->setMinimumSize(QSize(38, 18));
        note28_12->setMaximumSize(QSize(38, 18));
        note28_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_12->setAutoExclusive(true);

        gridNotes->addWidget(note28_12, 9, 12, 1, 1);

        note28_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note28_13);
        note28_13->setObjectName(QStringLiteral("note28_13"));
        sizePolicy.setHeightForWidth(note28_13->sizePolicy().hasHeightForWidth());
        note28_13->setSizePolicy(sizePolicy);
        note28_13->setMinimumSize(QSize(38, 18));
        note28_13->setMaximumSize(QSize(38, 18));
        note28_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_13->setAutoExclusive(true);

        gridNotes->addWidget(note28_13, 9, 13, 1, 1);

        note28_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note28_14);
        note28_14->setObjectName(QStringLiteral("note28_14"));
        sizePolicy.setHeightForWidth(note28_14->sizePolicy().hasHeightForWidth());
        note28_14->setSizePolicy(sizePolicy);
        note28_14->setMinimumSize(QSize(38, 18));
        note28_14->setMaximumSize(QSize(38, 18));
        note28_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_14->setAutoExclusive(true);

        gridNotes->addWidget(note28_14, 9, 14, 1, 1);

        note28_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note28_15);
        note28_15->setObjectName(QStringLiteral("note28_15"));
        sizePolicy.setHeightForWidth(note28_15->sizePolicy().hasHeightForWidth());
        note28_15->setSizePolicy(sizePolicy);
        note28_15->setMinimumSize(QSize(38, 18));
        note28_15->setMaximumSize(QSize(38, 18));
        note28_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note28_15->setAutoExclusive(true);

        gridNotes->addWidget(note28_15, 9, 15, 1, 1);

        note27_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note27_0);
        note27_0->setObjectName(QStringLiteral("note27_0"));
        sizePolicy.setHeightForWidth(note27_0->sizePolicy().hasHeightForWidth());
        note27_0->setSizePolicy(sizePolicy);
        note27_0->setMinimumSize(QSize(38, 18));
        note27_0->setMaximumSize(QSize(38, 18));
        note27_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_0->setAutoExclusive(true);

        gridNotes->addWidget(note27_0, 10, 0, 1, 1);

        note27_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note27_1);
        note27_1->setObjectName(QStringLiteral("note27_1"));
        sizePolicy.setHeightForWidth(note27_1->sizePolicy().hasHeightForWidth());
        note27_1->setSizePolicy(sizePolicy);
        note27_1->setMinimumSize(QSize(38, 18));
        note27_1->setMaximumSize(QSize(38, 18));
        note27_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_1->setAutoExclusive(true);

        gridNotes->addWidget(note27_1, 10, 1, 1, 1);

        note27_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note27_2);
        note27_2->setObjectName(QStringLiteral("note27_2"));
        sizePolicy.setHeightForWidth(note27_2->sizePolicy().hasHeightForWidth());
        note27_2->setSizePolicy(sizePolicy);
        note27_2->setMinimumSize(QSize(38, 18));
        note27_2->setMaximumSize(QSize(38, 18));
        note27_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_2->setAutoExclusive(true);

        gridNotes->addWidget(note27_2, 10, 2, 1, 1);

        note27_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note27_3);
        note27_3->setObjectName(QStringLiteral("note27_3"));
        sizePolicy.setHeightForWidth(note27_3->sizePolicy().hasHeightForWidth());
        note27_3->setSizePolicy(sizePolicy);
        note27_3->setMinimumSize(QSize(38, 18));
        note27_3->setMaximumSize(QSize(38, 18));
        note27_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_3->setAutoExclusive(true);

        gridNotes->addWidget(note27_3, 10, 3, 1, 1);

        note27_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note27_4);
        note27_4->setObjectName(QStringLiteral("note27_4"));
        sizePolicy.setHeightForWidth(note27_4->sizePolicy().hasHeightForWidth());
        note27_4->setSizePolicy(sizePolicy);
        note27_4->setMinimumSize(QSize(38, 18));
        note27_4->setMaximumSize(QSize(38, 18));
        note27_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_4->setAutoExclusive(true);

        gridNotes->addWidget(note27_4, 10, 4, 1, 1);

        note27_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note27_5);
        note27_5->setObjectName(QStringLiteral("note27_5"));
        sizePolicy.setHeightForWidth(note27_5->sizePolicy().hasHeightForWidth());
        note27_5->setSizePolicy(sizePolicy);
        note27_5->setMinimumSize(QSize(38, 18));
        note27_5->setMaximumSize(QSize(38, 18));
        note27_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_5->setAutoExclusive(true);

        gridNotes->addWidget(note27_5, 10, 5, 1, 1);

        note27_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note27_6);
        note27_6->setObjectName(QStringLiteral("note27_6"));
        sizePolicy.setHeightForWidth(note27_6->sizePolicy().hasHeightForWidth());
        note27_6->setSizePolicy(sizePolicy);
        note27_6->setMinimumSize(QSize(38, 18));
        note27_6->setMaximumSize(QSize(38, 18));
        note27_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_6->setAutoExclusive(true);

        gridNotes->addWidget(note27_6, 10, 6, 1, 1);

        note27_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note27_7);
        note27_7->setObjectName(QStringLiteral("note27_7"));
        sizePolicy.setHeightForWidth(note27_7->sizePolicy().hasHeightForWidth());
        note27_7->setSizePolicy(sizePolicy);
        note27_7->setMinimumSize(QSize(38, 18));
        note27_7->setMaximumSize(QSize(38, 18));
        note27_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_7->setAutoExclusive(true);

        gridNotes->addWidget(note27_7, 10, 7, 1, 1);

        note27_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note27_8);
        note27_8->setObjectName(QStringLiteral("note27_8"));
        sizePolicy.setHeightForWidth(note27_8->sizePolicy().hasHeightForWidth());
        note27_8->setSizePolicy(sizePolicy);
        note27_8->setMinimumSize(QSize(38, 18));
        note27_8->setMaximumSize(QSize(38, 18));
        note27_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_8->setAutoExclusive(true);

        gridNotes->addWidget(note27_8, 10, 8, 1, 1);

        note27_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note27_9);
        note27_9->setObjectName(QStringLiteral("note27_9"));
        sizePolicy.setHeightForWidth(note27_9->sizePolicy().hasHeightForWidth());
        note27_9->setSizePolicy(sizePolicy);
        note27_9->setMinimumSize(QSize(38, 18));
        note27_9->setMaximumSize(QSize(38, 18));
        note27_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_9->setAutoExclusive(true);

        gridNotes->addWidget(note27_9, 10, 9, 1, 1);

        note27_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note27_10);
        note27_10->setObjectName(QStringLiteral("note27_10"));
        sizePolicy.setHeightForWidth(note27_10->sizePolicy().hasHeightForWidth());
        note27_10->setSizePolicy(sizePolicy);
        note27_10->setMinimumSize(QSize(38, 18));
        note27_10->setMaximumSize(QSize(38, 18));
        note27_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_10->setAutoExclusive(true);

        gridNotes->addWidget(note27_10, 10, 10, 1, 1);

        note27_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note27_11);
        note27_11->setObjectName(QStringLiteral("note27_11"));
        sizePolicy.setHeightForWidth(note27_11->sizePolicy().hasHeightForWidth());
        note27_11->setSizePolicy(sizePolicy);
        note27_11->setMinimumSize(QSize(38, 18));
        note27_11->setMaximumSize(QSize(38, 18));
        note27_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_11->setAutoExclusive(true);

        gridNotes->addWidget(note27_11, 10, 11, 1, 1);

        note27_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note27_12);
        note27_12->setObjectName(QStringLiteral("note27_12"));
        sizePolicy.setHeightForWidth(note27_12->sizePolicy().hasHeightForWidth());
        note27_12->setSizePolicy(sizePolicy);
        note27_12->setMinimumSize(QSize(38, 18));
        note27_12->setMaximumSize(QSize(38, 18));
        note27_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_12->setAutoExclusive(true);

        gridNotes->addWidget(note27_12, 10, 12, 1, 1);

        note27_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note27_13);
        note27_13->setObjectName(QStringLiteral("note27_13"));
        sizePolicy.setHeightForWidth(note27_13->sizePolicy().hasHeightForWidth());
        note27_13->setSizePolicy(sizePolicy);
        note27_13->setMinimumSize(QSize(38, 18));
        note27_13->setMaximumSize(QSize(38, 18));
        note27_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_13->setAutoExclusive(true);

        gridNotes->addWidget(note27_13, 10, 13, 1, 1);

        note27_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note27_14);
        note27_14->setObjectName(QStringLiteral("note27_14"));
        sizePolicy.setHeightForWidth(note27_14->sizePolicy().hasHeightForWidth());
        note27_14->setSizePolicy(sizePolicy);
        note27_14->setMinimumSize(QSize(38, 18));
        note27_14->setMaximumSize(QSize(38, 18));
        note27_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_14->setAutoExclusive(true);

        gridNotes->addWidget(note27_14, 10, 14, 1, 1);

        note27_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note27_15);
        note27_15->setObjectName(QStringLiteral("note27_15"));
        sizePolicy.setHeightForWidth(note27_15->sizePolicy().hasHeightForWidth());
        note27_15->setSizePolicy(sizePolicy);
        note27_15->setMinimumSize(QSize(38, 18));
        note27_15->setMaximumSize(QSize(38, 18));
        note27_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note27_15->setAutoExclusive(true);

        gridNotes->addWidget(note27_15, 10, 15, 1, 1);

        note26_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note26_0);
        note26_0->setObjectName(QStringLiteral("note26_0"));
        sizePolicy.setHeightForWidth(note26_0->sizePolicy().hasHeightForWidth());
        note26_0->setSizePolicy(sizePolicy);
        note26_0->setMinimumSize(QSize(38, 18));
        note26_0->setMaximumSize(QSize(38, 18));
        note26_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_0->setAutoExclusive(true);

        gridNotes->addWidget(note26_0, 11, 0, 1, 1);

        note26_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note26_1);
        note26_1->setObjectName(QStringLiteral("note26_1"));
        sizePolicy.setHeightForWidth(note26_1->sizePolicy().hasHeightForWidth());
        note26_1->setSizePolicy(sizePolicy);
        note26_1->setMinimumSize(QSize(38, 18));
        note26_1->setMaximumSize(QSize(38, 18));
        note26_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_1->setAutoExclusive(true);

        gridNotes->addWidget(note26_1, 11, 1, 1, 1);

        note26_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note26_2);
        note26_2->setObjectName(QStringLiteral("note26_2"));
        sizePolicy.setHeightForWidth(note26_2->sizePolicy().hasHeightForWidth());
        note26_2->setSizePolicy(sizePolicy);
        note26_2->setMinimumSize(QSize(38, 18));
        note26_2->setMaximumSize(QSize(38, 18));
        note26_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_2->setAutoExclusive(true);

        gridNotes->addWidget(note26_2, 11, 2, 1, 1);

        note26_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note26_3);
        note26_3->setObjectName(QStringLiteral("note26_3"));
        sizePolicy.setHeightForWidth(note26_3->sizePolicy().hasHeightForWidth());
        note26_3->setSizePolicy(sizePolicy);
        note26_3->setMinimumSize(QSize(38, 18));
        note26_3->setMaximumSize(QSize(38, 18));
        note26_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_3->setAutoExclusive(true);

        gridNotes->addWidget(note26_3, 11, 3, 1, 1);

        note26_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note26_4);
        note26_4->setObjectName(QStringLiteral("note26_4"));
        sizePolicy.setHeightForWidth(note26_4->sizePolicy().hasHeightForWidth());
        note26_4->setSizePolicy(sizePolicy);
        note26_4->setMinimumSize(QSize(38, 18));
        note26_4->setMaximumSize(QSize(38, 18));
        note26_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_4->setAutoExclusive(true);

        gridNotes->addWidget(note26_4, 11, 4, 1, 1);

        note26_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note26_5);
        note26_5->setObjectName(QStringLiteral("note26_5"));
        sizePolicy.setHeightForWidth(note26_5->sizePolicy().hasHeightForWidth());
        note26_5->setSizePolicy(sizePolicy);
        note26_5->setMinimumSize(QSize(38, 18));
        note26_5->setMaximumSize(QSize(38, 18));
        note26_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_5->setAutoExclusive(true);

        gridNotes->addWidget(note26_5, 11, 5, 1, 1);

        note26_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note26_6);
        note26_6->setObjectName(QStringLiteral("note26_6"));
        sizePolicy.setHeightForWidth(note26_6->sizePolicy().hasHeightForWidth());
        note26_6->setSizePolicy(sizePolicy);
        note26_6->setMinimumSize(QSize(38, 18));
        note26_6->setMaximumSize(QSize(38, 18));
        note26_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_6->setAutoExclusive(true);

        gridNotes->addWidget(note26_6, 11, 6, 1, 1);

        note26_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note26_7);
        note26_7->setObjectName(QStringLiteral("note26_7"));
        sizePolicy.setHeightForWidth(note26_7->sizePolicy().hasHeightForWidth());
        note26_7->setSizePolicy(sizePolicy);
        note26_7->setMinimumSize(QSize(38, 18));
        note26_7->setMaximumSize(QSize(38, 18));
        note26_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_7->setAutoExclusive(true);

        gridNotes->addWidget(note26_7, 11, 7, 1, 1);

        note26_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note26_8);
        note26_8->setObjectName(QStringLiteral("note26_8"));
        sizePolicy.setHeightForWidth(note26_8->sizePolicy().hasHeightForWidth());
        note26_8->setSizePolicy(sizePolicy);
        note26_8->setMinimumSize(QSize(38, 18));
        note26_8->setMaximumSize(QSize(38, 18));
        note26_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_8->setAutoExclusive(true);

        gridNotes->addWidget(note26_8, 11, 8, 1, 1);

        note26_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note26_9);
        note26_9->setObjectName(QStringLiteral("note26_9"));
        sizePolicy.setHeightForWidth(note26_9->sizePolicy().hasHeightForWidth());
        note26_9->setSizePolicy(sizePolicy);
        note26_9->setMinimumSize(QSize(38, 18));
        note26_9->setMaximumSize(QSize(38, 18));
        note26_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_9->setAutoExclusive(true);

        gridNotes->addWidget(note26_9, 11, 9, 1, 1);

        note26_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note26_10);
        note26_10->setObjectName(QStringLiteral("note26_10"));
        sizePolicy.setHeightForWidth(note26_10->sizePolicy().hasHeightForWidth());
        note26_10->setSizePolicy(sizePolicy);
        note26_10->setMinimumSize(QSize(38, 18));
        note26_10->setMaximumSize(QSize(38, 18));
        note26_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_10->setAutoExclusive(true);

        gridNotes->addWidget(note26_10, 11, 10, 1, 1);

        note26_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note26_11);
        note26_11->setObjectName(QStringLiteral("note26_11"));
        sizePolicy.setHeightForWidth(note26_11->sizePolicy().hasHeightForWidth());
        note26_11->setSizePolicy(sizePolicy);
        note26_11->setMinimumSize(QSize(38, 18));
        note26_11->setMaximumSize(QSize(38, 18));
        note26_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_11->setAutoExclusive(true);

        gridNotes->addWidget(note26_11, 11, 11, 1, 1);

        note26_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note26_12);
        note26_12->setObjectName(QStringLiteral("note26_12"));
        sizePolicy.setHeightForWidth(note26_12->sizePolicy().hasHeightForWidth());
        note26_12->setSizePolicy(sizePolicy);
        note26_12->setMinimumSize(QSize(38, 18));
        note26_12->setMaximumSize(QSize(38, 18));
        note26_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_12->setAutoExclusive(true);

        gridNotes->addWidget(note26_12, 11, 12, 1, 1);

        note26_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note26_13);
        note26_13->setObjectName(QStringLiteral("note26_13"));
        sizePolicy.setHeightForWidth(note26_13->sizePolicy().hasHeightForWidth());
        note26_13->setSizePolicy(sizePolicy);
        note26_13->setMinimumSize(QSize(38, 18));
        note26_13->setMaximumSize(QSize(38, 18));
        note26_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_13->setAutoExclusive(true);

        gridNotes->addWidget(note26_13, 11, 13, 1, 1);

        note26_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note26_14);
        note26_14->setObjectName(QStringLiteral("note26_14"));
        sizePolicy.setHeightForWidth(note26_14->sizePolicy().hasHeightForWidth());
        note26_14->setSizePolicy(sizePolicy);
        note26_14->setMinimumSize(QSize(38, 18));
        note26_14->setMaximumSize(QSize(38, 18));
        note26_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_14->setAutoExclusive(true);

        gridNotes->addWidget(note26_14, 11, 14, 1, 1);

        note26_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note26_15);
        note26_15->setObjectName(QStringLiteral("note26_15"));
        sizePolicy.setHeightForWidth(note26_15->sizePolicy().hasHeightForWidth());
        note26_15->setSizePolicy(sizePolicy);
        note26_15->setMinimumSize(QSize(38, 18));
        note26_15->setMaximumSize(QSize(38, 18));
        note26_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note26_15->setAutoExclusive(true);

        gridNotes->addWidget(note26_15, 11, 15, 1, 1);

        note25_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note25_0);
        note25_0->setObjectName(QStringLiteral("note25_0"));
        sizePolicy.setHeightForWidth(note25_0->sizePolicy().hasHeightForWidth());
        note25_0->setSizePolicy(sizePolicy);
        note25_0->setMinimumSize(QSize(38, 18));
        note25_0->setMaximumSize(QSize(38, 18));
        note25_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_0->setAutoExclusive(true);

        gridNotes->addWidget(note25_0, 12, 0, 1, 1);

        note25_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note25_1);
        note25_1->setObjectName(QStringLiteral("note25_1"));
        sizePolicy.setHeightForWidth(note25_1->sizePolicy().hasHeightForWidth());
        note25_1->setSizePolicy(sizePolicy);
        note25_1->setMinimumSize(QSize(38, 18));
        note25_1->setMaximumSize(QSize(38, 18));
        note25_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_1->setAutoExclusive(true);

        gridNotes->addWidget(note25_1, 12, 1, 1, 1);

        note25_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note25_2);
        note25_2->setObjectName(QStringLiteral("note25_2"));
        sizePolicy.setHeightForWidth(note25_2->sizePolicy().hasHeightForWidth());
        note25_2->setSizePolicy(sizePolicy);
        note25_2->setMinimumSize(QSize(38, 18));
        note25_2->setMaximumSize(QSize(38, 18));
        note25_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_2->setAutoExclusive(true);

        gridNotes->addWidget(note25_2, 12, 2, 1, 1);

        note25_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note25_3);
        note25_3->setObjectName(QStringLiteral("note25_3"));
        sizePolicy.setHeightForWidth(note25_3->sizePolicy().hasHeightForWidth());
        note25_3->setSizePolicy(sizePolicy);
        note25_3->setMinimumSize(QSize(38, 18));
        note25_3->setMaximumSize(QSize(38, 18));
        note25_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_3->setAutoExclusive(true);

        gridNotes->addWidget(note25_3, 12, 3, 1, 1);

        note25_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note25_4);
        note25_4->setObjectName(QStringLiteral("note25_4"));
        sizePolicy.setHeightForWidth(note25_4->sizePolicy().hasHeightForWidth());
        note25_4->setSizePolicy(sizePolicy);
        note25_4->setMinimumSize(QSize(38, 18));
        note25_4->setMaximumSize(QSize(38, 18));
        note25_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_4->setAutoExclusive(true);

        gridNotes->addWidget(note25_4, 12, 4, 1, 1);

        note25_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note25_5);
        note25_5->setObjectName(QStringLiteral("note25_5"));
        sizePolicy.setHeightForWidth(note25_5->sizePolicy().hasHeightForWidth());
        note25_5->setSizePolicy(sizePolicy);
        note25_5->setMinimumSize(QSize(38, 18));
        note25_5->setMaximumSize(QSize(38, 18));
        note25_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_5->setAutoExclusive(true);

        gridNotes->addWidget(note25_5, 12, 5, 1, 1);

        note25_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note25_6);
        note25_6->setObjectName(QStringLiteral("note25_6"));
        sizePolicy.setHeightForWidth(note25_6->sizePolicy().hasHeightForWidth());
        note25_6->setSizePolicy(sizePolicy);
        note25_6->setMinimumSize(QSize(38, 18));
        note25_6->setMaximumSize(QSize(38, 18));
        note25_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_6->setAutoExclusive(true);

        gridNotes->addWidget(note25_6, 12, 6, 1, 1);

        note25_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note25_7);
        note25_7->setObjectName(QStringLiteral("note25_7"));
        sizePolicy.setHeightForWidth(note25_7->sizePolicy().hasHeightForWidth());
        note25_7->setSizePolicy(sizePolicy);
        note25_7->setMinimumSize(QSize(38, 18));
        note25_7->setMaximumSize(QSize(38, 18));
        note25_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_7->setAutoExclusive(true);

        gridNotes->addWidget(note25_7, 12, 7, 1, 1);

        note25_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note25_8);
        note25_8->setObjectName(QStringLiteral("note25_8"));
        sizePolicy.setHeightForWidth(note25_8->sizePolicy().hasHeightForWidth());
        note25_8->setSizePolicy(sizePolicy);
        note25_8->setMinimumSize(QSize(38, 18));
        note25_8->setMaximumSize(QSize(38, 18));
        note25_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_8->setAutoExclusive(true);

        gridNotes->addWidget(note25_8, 12, 8, 1, 1);

        note25_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note25_9);
        note25_9->setObjectName(QStringLiteral("note25_9"));
        sizePolicy.setHeightForWidth(note25_9->sizePolicy().hasHeightForWidth());
        note25_9->setSizePolicy(sizePolicy);
        note25_9->setMinimumSize(QSize(38, 18));
        note25_9->setMaximumSize(QSize(38, 18));
        note25_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_9->setAutoExclusive(true);

        gridNotes->addWidget(note25_9, 12, 9, 1, 1);

        note25_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note25_10);
        note25_10->setObjectName(QStringLiteral("note25_10"));
        sizePolicy.setHeightForWidth(note25_10->sizePolicy().hasHeightForWidth());
        note25_10->setSizePolicy(sizePolicy);
        note25_10->setMinimumSize(QSize(38, 18));
        note25_10->setMaximumSize(QSize(38, 18));
        note25_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_10->setAutoExclusive(true);

        gridNotes->addWidget(note25_10, 12, 10, 1, 1);

        note25_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note25_11);
        note25_11->setObjectName(QStringLiteral("note25_11"));
        sizePolicy.setHeightForWidth(note25_11->sizePolicy().hasHeightForWidth());
        note25_11->setSizePolicy(sizePolicy);
        note25_11->setMinimumSize(QSize(38, 18));
        note25_11->setMaximumSize(QSize(38, 18));
        note25_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_11->setAutoExclusive(true);

        gridNotes->addWidget(note25_11, 12, 11, 1, 1);

        note25_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note25_12);
        note25_12->setObjectName(QStringLiteral("note25_12"));
        sizePolicy.setHeightForWidth(note25_12->sizePolicy().hasHeightForWidth());
        note25_12->setSizePolicy(sizePolicy);
        note25_12->setMinimumSize(QSize(38, 18));
        note25_12->setMaximumSize(QSize(38, 18));
        note25_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_12->setAutoExclusive(true);

        gridNotes->addWidget(note25_12, 12, 12, 1, 1);

        note25_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note25_13);
        note25_13->setObjectName(QStringLiteral("note25_13"));
        sizePolicy.setHeightForWidth(note25_13->sizePolicy().hasHeightForWidth());
        note25_13->setSizePolicy(sizePolicy);
        note25_13->setMinimumSize(QSize(38, 18));
        note25_13->setMaximumSize(QSize(38, 18));
        note25_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_13->setAutoExclusive(true);

        gridNotes->addWidget(note25_13, 12, 13, 1, 1);

        note25_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note25_14);
        note25_14->setObjectName(QStringLiteral("note25_14"));
        sizePolicy.setHeightForWidth(note25_14->sizePolicy().hasHeightForWidth());
        note25_14->setSizePolicy(sizePolicy);
        note25_14->setMinimumSize(QSize(38, 18));
        note25_14->setMaximumSize(QSize(38, 18));
        note25_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_14->setAutoExclusive(true);

        gridNotes->addWidget(note25_14, 12, 14, 1, 1);

        note25_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note25_15);
        note25_15->setObjectName(QStringLiteral("note25_15"));
        sizePolicy.setHeightForWidth(note25_15->sizePolicy().hasHeightForWidth());
        note25_15->setSizePolicy(sizePolicy);
        note25_15->setMinimumSize(QSize(38, 18));
        note25_15->setMaximumSize(QSize(38, 18));
        note25_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note25_15->setAutoExclusive(true);

        gridNotes->addWidget(note25_15, 12, 15, 1, 1);

        note24_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note24_0);
        note24_0->setObjectName(QStringLiteral("note24_0"));
        sizePolicy.setHeightForWidth(note24_0->sizePolicy().hasHeightForWidth());
        note24_0->setSizePolicy(sizePolicy);
        note24_0->setMinimumSize(QSize(38, 18));
        note24_0->setMaximumSize(QSize(38, 18));
        note24_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_0->setAutoExclusive(true);

        gridNotes->addWidget(note24_0, 13, 0, 1, 1);

        note24_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note24_1);
        note24_1->setObjectName(QStringLiteral("note24_1"));
        sizePolicy.setHeightForWidth(note24_1->sizePolicy().hasHeightForWidth());
        note24_1->setSizePolicy(sizePolicy);
        note24_1->setMinimumSize(QSize(38, 18));
        note24_1->setMaximumSize(QSize(38, 18));
        note24_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_1->setAutoExclusive(true);

        gridNotes->addWidget(note24_1, 13, 1, 1, 1);

        note24_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note24_2);
        note24_2->setObjectName(QStringLiteral("note24_2"));
        sizePolicy.setHeightForWidth(note24_2->sizePolicy().hasHeightForWidth());
        note24_2->setSizePolicy(sizePolicy);
        note24_2->setMinimumSize(QSize(38, 18));
        note24_2->setMaximumSize(QSize(38, 18));
        note24_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_2->setAutoExclusive(true);

        gridNotes->addWidget(note24_2, 13, 2, 1, 1);

        note24_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note24_3);
        note24_3->setObjectName(QStringLiteral("note24_3"));
        sizePolicy.setHeightForWidth(note24_3->sizePolicy().hasHeightForWidth());
        note24_3->setSizePolicy(sizePolicy);
        note24_3->setMinimumSize(QSize(38, 18));
        note24_3->setMaximumSize(QSize(38, 18));
        note24_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_3->setAutoExclusive(true);

        gridNotes->addWidget(note24_3, 13, 3, 1, 1);

        note24_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note24_4);
        note24_4->setObjectName(QStringLiteral("note24_4"));
        sizePolicy.setHeightForWidth(note24_4->sizePolicy().hasHeightForWidth());
        note24_4->setSizePolicy(sizePolicy);
        note24_4->setMinimumSize(QSize(38, 18));
        note24_4->setMaximumSize(QSize(38, 18));
        note24_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_4->setAutoExclusive(true);

        gridNotes->addWidget(note24_4, 13, 4, 1, 1);

        note24_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note24_5);
        note24_5->setObjectName(QStringLiteral("note24_5"));
        sizePolicy.setHeightForWidth(note24_5->sizePolicy().hasHeightForWidth());
        note24_5->setSizePolicy(sizePolicy);
        note24_5->setMinimumSize(QSize(38, 18));
        note24_5->setMaximumSize(QSize(38, 18));
        note24_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_5->setAutoExclusive(true);

        gridNotes->addWidget(note24_5, 13, 5, 1, 1);

        note24_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note24_6);
        note24_6->setObjectName(QStringLiteral("note24_6"));
        sizePolicy.setHeightForWidth(note24_6->sizePolicy().hasHeightForWidth());
        note24_6->setSizePolicy(sizePolicy);
        note24_6->setMinimumSize(QSize(38, 18));
        note24_6->setMaximumSize(QSize(38, 18));
        note24_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_6->setAutoExclusive(true);

        gridNotes->addWidget(note24_6, 13, 6, 1, 1);

        note24_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note24_7);
        note24_7->setObjectName(QStringLiteral("note24_7"));
        sizePolicy.setHeightForWidth(note24_7->sizePolicy().hasHeightForWidth());
        note24_7->setSizePolicy(sizePolicy);
        note24_7->setMinimumSize(QSize(38, 18));
        note24_7->setMaximumSize(QSize(38, 18));
        note24_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_7->setAutoExclusive(true);

        gridNotes->addWidget(note24_7, 13, 7, 1, 1);

        note24_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note24_8);
        note24_8->setObjectName(QStringLiteral("note24_8"));
        sizePolicy.setHeightForWidth(note24_8->sizePolicy().hasHeightForWidth());
        note24_8->setSizePolicy(sizePolicy);
        note24_8->setMinimumSize(QSize(38, 18));
        note24_8->setMaximumSize(QSize(38, 18));
        note24_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_8->setAutoExclusive(true);

        gridNotes->addWidget(note24_8, 13, 8, 1, 1);

        note24_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note24_9);
        note24_9->setObjectName(QStringLiteral("note24_9"));
        sizePolicy.setHeightForWidth(note24_9->sizePolicy().hasHeightForWidth());
        note24_9->setSizePolicy(sizePolicy);
        note24_9->setMinimumSize(QSize(38, 18));
        note24_9->setMaximumSize(QSize(38, 18));
        note24_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_9->setAutoExclusive(true);

        gridNotes->addWidget(note24_9, 13, 9, 1, 1);

        note24_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note24_10);
        note24_10->setObjectName(QStringLiteral("note24_10"));
        sizePolicy.setHeightForWidth(note24_10->sizePolicy().hasHeightForWidth());
        note24_10->setSizePolicy(sizePolicy);
        note24_10->setMinimumSize(QSize(38, 18));
        note24_10->setMaximumSize(QSize(38, 18));
        note24_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_10->setAutoExclusive(true);

        gridNotes->addWidget(note24_10, 13, 10, 1, 1);

        note24_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note24_11);
        note24_11->setObjectName(QStringLiteral("note24_11"));
        sizePolicy.setHeightForWidth(note24_11->sizePolicy().hasHeightForWidth());
        note24_11->setSizePolicy(sizePolicy);
        note24_11->setMinimumSize(QSize(38, 18));
        note24_11->setMaximumSize(QSize(38, 18));
        note24_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_11->setAutoExclusive(true);

        gridNotes->addWidget(note24_11, 13, 11, 1, 1);

        note24_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note24_12);
        note24_12->setObjectName(QStringLiteral("note24_12"));
        sizePolicy.setHeightForWidth(note24_12->sizePolicy().hasHeightForWidth());
        note24_12->setSizePolicy(sizePolicy);
        note24_12->setMinimumSize(QSize(38, 18));
        note24_12->setMaximumSize(QSize(38, 18));
        note24_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_12->setAutoExclusive(true);

        gridNotes->addWidget(note24_12, 13, 12, 1, 1);

        note24_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note24_13);
        note24_13->setObjectName(QStringLiteral("note24_13"));
        sizePolicy.setHeightForWidth(note24_13->sizePolicy().hasHeightForWidth());
        note24_13->setSizePolicy(sizePolicy);
        note24_13->setMinimumSize(QSize(38, 18));
        note24_13->setMaximumSize(QSize(38, 18));
        note24_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_13->setAutoExclusive(true);

        gridNotes->addWidget(note24_13, 13, 13, 1, 1);

        note24_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note24_14);
        note24_14->setObjectName(QStringLiteral("note24_14"));
        sizePolicy.setHeightForWidth(note24_14->sizePolicy().hasHeightForWidth());
        note24_14->setSizePolicy(sizePolicy);
        note24_14->setMinimumSize(QSize(38, 18));
        note24_14->setMaximumSize(QSize(38, 18));
        note24_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_14->setAutoExclusive(true);

        gridNotes->addWidget(note24_14, 13, 14, 1, 1);

        note24_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note24_15);
        note24_15->setObjectName(QStringLiteral("note24_15"));
        sizePolicy.setHeightForWidth(note24_15->sizePolicy().hasHeightForWidth());
        note24_15->setSizePolicy(sizePolicy);
        note24_15->setMinimumSize(QSize(38, 18));
        note24_15->setMaximumSize(QSize(38, 18));
        note24_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note24_15->setAutoExclusive(true);

        gridNotes->addWidget(note24_15, 13, 15, 1, 1);

        note23_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note23_0);
        note23_0->setObjectName(QStringLiteral("note23_0"));
        sizePolicy.setHeightForWidth(note23_0->sizePolicy().hasHeightForWidth());
        note23_0->setSizePolicy(sizePolicy);
        note23_0->setMinimumSize(QSize(38, 18));
        note23_0->setMaximumSize(QSize(38, 18));
        note23_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_0->setAutoExclusive(true);

        gridNotes->addWidget(note23_0, 14, 0, 1, 1);

        note23_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note23_1);
        note23_1->setObjectName(QStringLiteral("note23_1"));
        sizePolicy.setHeightForWidth(note23_1->sizePolicy().hasHeightForWidth());
        note23_1->setSizePolicy(sizePolicy);
        note23_1->setMinimumSize(QSize(38, 18));
        note23_1->setMaximumSize(QSize(38, 18));
        note23_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_1->setAutoExclusive(true);

        gridNotes->addWidget(note23_1, 14, 1, 1, 1);

        note23_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note23_2);
        note23_2->setObjectName(QStringLiteral("note23_2"));
        sizePolicy.setHeightForWidth(note23_2->sizePolicy().hasHeightForWidth());
        note23_2->setSizePolicy(sizePolicy);
        note23_2->setMinimumSize(QSize(38, 18));
        note23_2->setMaximumSize(QSize(38, 18));
        note23_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_2->setAutoExclusive(true);

        gridNotes->addWidget(note23_2, 14, 2, 1, 1);

        note23_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note23_3);
        note23_3->setObjectName(QStringLiteral("note23_3"));
        sizePolicy.setHeightForWidth(note23_3->sizePolicy().hasHeightForWidth());
        note23_3->setSizePolicy(sizePolicy);
        note23_3->setMinimumSize(QSize(38, 18));
        note23_3->setMaximumSize(QSize(38, 18));
        note23_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_3->setAutoExclusive(true);

        gridNotes->addWidget(note23_3, 14, 3, 1, 1);

        note23_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note23_4);
        note23_4->setObjectName(QStringLiteral("note23_4"));
        sizePolicy.setHeightForWidth(note23_4->sizePolicy().hasHeightForWidth());
        note23_4->setSizePolicy(sizePolicy);
        note23_4->setMinimumSize(QSize(38, 18));
        note23_4->setMaximumSize(QSize(38, 18));
        note23_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_4->setAutoExclusive(true);

        gridNotes->addWidget(note23_4, 14, 4, 1, 1);

        note23_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note23_5);
        note23_5->setObjectName(QStringLiteral("note23_5"));
        sizePolicy.setHeightForWidth(note23_5->sizePolicy().hasHeightForWidth());
        note23_5->setSizePolicy(sizePolicy);
        note23_5->setMinimumSize(QSize(38, 18));
        note23_5->setMaximumSize(QSize(38, 18));
        note23_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_5->setAutoExclusive(true);

        gridNotes->addWidget(note23_5, 14, 5, 1, 1);

        note23_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note23_6);
        note23_6->setObjectName(QStringLiteral("note23_6"));
        sizePolicy.setHeightForWidth(note23_6->sizePolicy().hasHeightForWidth());
        note23_6->setSizePolicy(sizePolicy);
        note23_6->setMinimumSize(QSize(38, 18));
        note23_6->setMaximumSize(QSize(38, 18));
        note23_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_6->setAutoExclusive(true);

        gridNotes->addWidget(note23_6, 14, 6, 1, 1);

        note23_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note23_7);
        note23_7->setObjectName(QStringLiteral("note23_7"));
        sizePolicy.setHeightForWidth(note23_7->sizePolicy().hasHeightForWidth());
        note23_7->setSizePolicy(sizePolicy);
        note23_7->setMinimumSize(QSize(38, 18));
        note23_7->setMaximumSize(QSize(38, 18));
        note23_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_7->setAutoExclusive(true);

        gridNotes->addWidget(note23_7, 14, 7, 1, 1);

        note23_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note23_8);
        note23_8->setObjectName(QStringLiteral("note23_8"));
        sizePolicy.setHeightForWidth(note23_8->sizePolicy().hasHeightForWidth());
        note23_8->setSizePolicy(sizePolicy);
        note23_8->setMinimumSize(QSize(38, 18));
        note23_8->setMaximumSize(QSize(38, 18));
        note23_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_8->setAutoExclusive(true);

        gridNotes->addWidget(note23_8, 14, 8, 1, 1);

        note23_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note23_9);
        note23_9->setObjectName(QStringLiteral("note23_9"));
        sizePolicy.setHeightForWidth(note23_9->sizePolicy().hasHeightForWidth());
        note23_9->setSizePolicy(sizePolicy);
        note23_9->setMinimumSize(QSize(38, 18));
        note23_9->setMaximumSize(QSize(38, 18));
        note23_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_9->setAutoExclusive(true);

        gridNotes->addWidget(note23_9, 14, 9, 1, 1);

        note23_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note23_10);
        note23_10->setObjectName(QStringLiteral("note23_10"));
        sizePolicy.setHeightForWidth(note23_10->sizePolicy().hasHeightForWidth());
        note23_10->setSizePolicy(sizePolicy);
        note23_10->setMinimumSize(QSize(38, 18));
        note23_10->setMaximumSize(QSize(38, 18));
        note23_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_10->setAutoExclusive(true);

        gridNotes->addWidget(note23_10, 14, 10, 1, 1);

        note23_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note23_11);
        note23_11->setObjectName(QStringLiteral("note23_11"));
        sizePolicy.setHeightForWidth(note23_11->sizePolicy().hasHeightForWidth());
        note23_11->setSizePolicy(sizePolicy);
        note23_11->setMinimumSize(QSize(38, 18));
        note23_11->setMaximumSize(QSize(38, 18));
        note23_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_11->setAutoExclusive(true);

        gridNotes->addWidget(note23_11, 14, 11, 1, 1);

        note23_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note23_12);
        note23_12->setObjectName(QStringLiteral("note23_12"));
        sizePolicy.setHeightForWidth(note23_12->sizePolicy().hasHeightForWidth());
        note23_12->setSizePolicy(sizePolicy);
        note23_12->setMinimumSize(QSize(38, 18));
        note23_12->setMaximumSize(QSize(38, 18));
        note23_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_12->setAutoExclusive(true);

        gridNotes->addWidget(note23_12, 14, 12, 1, 1);

        note23_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note23_13);
        note23_13->setObjectName(QStringLiteral("note23_13"));
        sizePolicy.setHeightForWidth(note23_13->sizePolicy().hasHeightForWidth());
        note23_13->setSizePolicy(sizePolicy);
        note23_13->setMinimumSize(QSize(38, 18));
        note23_13->setMaximumSize(QSize(38, 18));
        note23_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_13->setAutoExclusive(true);

        gridNotes->addWidget(note23_13, 14, 13, 1, 1);

        note23_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note23_14);
        note23_14->setObjectName(QStringLiteral("note23_14"));
        sizePolicy.setHeightForWidth(note23_14->sizePolicy().hasHeightForWidth());
        note23_14->setSizePolicy(sizePolicy);
        note23_14->setMinimumSize(QSize(38, 18));
        note23_14->setMaximumSize(QSize(38, 18));
        note23_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_14->setAutoExclusive(true);

        gridNotes->addWidget(note23_14, 14, 14, 1, 1);

        note23_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note23_15);
        note23_15->setObjectName(QStringLiteral("note23_15"));
        sizePolicy.setHeightForWidth(note23_15->sizePolicy().hasHeightForWidth());
        note23_15->setSizePolicy(sizePolicy);
        note23_15->setMinimumSize(QSize(38, 18));
        note23_15->setMaximumSize(QSize(38, 18));
        note23_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note23_15->setAutoExclusive(true);

        gridNotes->addWidget(note23_15, 14, 15, 1, 1);

        note22_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note22_0);
        note22_0->setObjectName(QStringLiteral("note22_0"));
        sizePolicy.setHeightForWidth(note22_0->sizePolicy().hasHeightForWidth());
        note22_0->setSizePolicy(sizePolicy);
        note22_0->setMinimumSize(QSize(38, 18));
        note22_0->setMaximumSize(QSize(38, 18));
        note22_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_0->setAutoExclusive(true);

        gridNotes->addWidget(note22_0, 15, 0, 1, 1);

        note22_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note22_1);
        note22_1->setObjectName(QStringLiteral("note22_1"));
        sizePolicy.setHeightForWidth(note22_1->sizePolicy().hasHeightForWidth());
        note22_1->setSizePolicy(sizePolicy);
        note22_1->setMinimumSize(QSize(38, 18));
        note22_1->setMaximumSize(QSize(38, 18));
        note22_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_1->setAutoExclusive(true);

        gridNotes->addWidget(note22_1, 15, 1, 1, 1);

        note22_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note22_2);
        note22_2->setObjectName(QStringLiteral("note22_2"));
        sizePolicy.setHeightForWidth(note22_2->sizePolicy().hasHeightForWidth());
        note22_2->setSizePolicy(sizePolicy);
        note22_2->setMinimumSize(QSize(38, 18));
        note22_2->setMaximumSize(QSize(38, 18));
        note22_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_2->setAutoExclusive(true);

        gridNotes->addWidget(note22_2, 15, 2, 1, 1);

        note22_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note22_3);
        note22_3->setObjectName(QStringLiteral("note22_3"));
        sizePolicy.setHeightForWidth(note22_3->sizePolicy().hasHeightForWidth());
        note22_3->setSizePolicy(sizePolicy);
        note22_3->setMinimumSize(QSize(38, 18));
        note22_3->setMaximumSize(QSize(38, 18));
        note22_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_3->setAutoExclusive(true);

        gridNotes->addWidget(note22_3, 15, 3, 1, 1);

        note22_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note22_4);
        note22_4->setObjectName(QStringLiteral("note22_4"));
        sizePolicy.setHeightForWidth(note22_4->sizePolicy().hasHeightForWidth());
        note22_4->setSizePolicy(sizePolicy);
        note22_4->setMinimumSize(QSize(38, 18));
        note22_4->setMaximumSize(QSize(38, 18));
        note22_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_4->setAutoExclusive(true);

        gridNotes->addWidget(note22_4, 15, 4, 1, 1);

        note22_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note22_5);
        note22_5->setObjectName(QStringLiteral("note22_5"));
        sizePolicy.setHeightForWidth(note22_5->sizePolicy().hasHeightForWidth());
        note22_5->setSizePolicy(sizePolicy);
        note22_5->setMinimumSize(QSize(38, 18));
        note22_5->setMaximumSize(QSize(38, 18));
        note22_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_5->setAutoExclusive(true);

        gridNotes->addWidget(note22_5, 15, 5, 1, 1);

        note22_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note22_6);
        note22_6->setObjectName(QStringLiteral("note22_6"));
        sizePolicy.setHeightForWidth(note22_6->sizePolicy().hasHeightForWidth());
        note22_6->setSizePolicy(sizePolicy);
        note22_6->setMinimumSize(QSize(38, 18));
        note22_6->setMaximumSize(QSize(38, 18));
        note22_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_6->setAutoExclusive(true);

        gridNotes->addWidget(note22_6, 15, 6, 1, 1);

        note22_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note22_7);
        note22_7->setObjectName(QStringLiteral("note22_7"));
        sizePolicy.setHeightForWidth(note22_7->sizePolicy().hasHeightForWidth());
        note22_7->setSizePolicy(sizePolicy);
        note22_7->setMinimumSize(QSize(38, 18));
        note22_7->setMaximumSize(QSize(38, 18));
        note22_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_7->setAutoExclusive(true);

        gridNotes->addWidget(note22_7, 15, 7, 1, 1);

        note22_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note22_8);
        note22_8->setObjectName(QStringLiteral("note22_8"));
        sizePolicy.setHeightForWidth(note22_8->sizePolicy().hasHeightForWidth());
        note22_8->setSizePolicy(sizePolicy);
        note22_8->setMinimumSize(QSize(38, 18));
        note22_8->setMaximumSize(QSize(38, 18));
        note22_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_8->setAutoExclusive(true);

        gridNotes->addWidget(note22_8, 15, 8, 1, 1);

        note22_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note22_9);
        note22_9->setObjectName(QStringLiteral("note22_9"));
        sizePolicy.setHeightForWidth(note22_9->sizePolicy().hasHeightForWidth());
        note22_9->setSizePolicy(sizePolicy);
        note22_9->setMinimumSize(QSize(38, 18));
        note22_9->setMaximumSize(QSize(38, 18));
        note22_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_9->setAutoExclusive(true);

        gridNotes->addWidget(note22_9, 15, 9, 1, 1);

        note22_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note22_10);
        note22_10->setObjectName(QStringLiteral("note22_10"));
        sizePolicy.setHeightForWidth(note22_10->sizePolicy().hasHeightForWidth());
        note22_10->setSizePolicy(sizePolicy);
        note22_10->setMinimumSize(QSize(38, 18));
        note22_10->setMaximumSize(QSize(38, 18));
        note22_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_10->setAutoExclusive(true);

        gridNotes->addWidget(note22_10, 15, 10, 1, 1);

        note22_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note22_11);
        note22_11->setObjectName(QStringLiteral("note22_11"));
        sizePolicy.setHeightForWidth(note22_11->sizePolicy().hasHeightForWidth());
        note22_11->setSizePolicy(sizePolicy);
        note22_11->setMinimumSize(QSize(38, 18));
        note22_11->setMaximumSize(QSize(38, 18));
        note22_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_11->setAutoExclusive(true);

        gridNotes->addWidget(note22_11, 15, 11, 1, 1);

        note22_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note22_12);
        note22_12->setObjectName(QStringLiteral("note22_12"));
        sizePolicy.setHeightForWidth(note22_12->sizePolicy().hasHeightForWidth());
        note22_12->setSizePolicy(sizePolicy);
        note22_12->setMinimumSize(QSize(38, 18));
        note22_12->setMaximumSize(QSize(38, 18));
        note22_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_12->setAutoExclusive(true);

        gridNotes->addWidget(note22_12, 15, 12, 1, 1);

        note22_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note22_13);
        note22_13->setObjectName(QStringLiteral("note22_13"));
        sizePolicy.setHeightForWidth(note22_13->sizePolicy().hasHeightForWidth());
        note22_13->setSizePolicy(sizePolicy);
        note22_13->setMinimumSize(QSize(38, 18));
        note22_13->setMaximumSize(QSize(38, 18));
        note22_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_13->setAutoExclusive(true);

        gridNotes->addWidget(note22_13, 15, 13, 1, 1);

        note22_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note22_14);
        note22_14->setObjectName(QStringLiteral("note22_14"));
        sizePolicy.setHeightForWidth(note22_14->sizePolicy().hasHeightForWidth());
        note22_14->setSizePolicy(sizePolicy);
        note22_14->setMinimumSize(QSize(38, 18));
        note22_14->setMaximumSize(QSize(38, 18));
        note22_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_14->setAutoExclusive(true);

        gridNotes->addWidget(note22_14, 15, 14, 1, 1);

        note22_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note22_15);
        note22_15->setObjectName(QStringLiteral("note22_15"));
        sizePolicy.setHeightForWidth(note22_15->sizePolicy().hasHeightForWidth());
        note22_15->setSizePolicy(sizePolicy);
        note22_15->setMinimumSize(QSize(38, 18));
        note22_15->setMaximumSize(QSize(38, 18));
        note22_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note22_15->setAutoExclusive(true);

        gridNotes->addWidget(note22_15, 15, 15, 1, 1);

        note21_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note21_0);
        note21_0->setObjectName(QStringLiteral("note21_0"));
        sizePolicy.setHeightForWidth(note21_0->sizePolicy().hasHeightForWidth());
        note21_0->setSizePolicy(sizePolicy);
        note21_0->setMinimumSize(QSize(38, 18));
        note21_0->setMaximumSize(QSize(38, 18));
        note21_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_0->setAutoExclusive(true);

        gridNotes->addWidget(note21_0, 16, 0, 1, 1);

        note21_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note21_1);
        note21_1->setObjectName(QStringLiteral("note21_1"));
        sizePolicy.setHeightForWidth(note21_1->sizePolicy().hasHeightForWidth());
        note21_1->setSizePolicy(sizePolicy);
        note21_1->setMinimumSize(QSize(38, 18));
        note21_1->setMaximumSize(QSize(38, 18));
        note21_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_1->setAutoExclusive(true);

        gridNotes->addWidget(note21_1, 16, 1, 1, 1);

        note21_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note21_2);
        note21_2->setObjectName(QStringLiteral("note21_2"));
        sizePolicy.setHeightForWidth(note21_2->sizePolicy().hasHeightForWidth());
        note21_2->setSizePolicy(sizePolicy);
        note21_2->setMinimumSize(QSize(38, 18));
        note21_2->setMaximumSize(QSize(38, 18));
        note21_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_2->setAutoExclusive(true);

        gridNotes->addWidget(note21_2, 16, 2, 1, 1);

        note21_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note21_3);
        note21_3->setObjectName(QStringLiteral("note21_3"));
        sizePolicy.setHeightForWidth(note21_3->sizePolicy().hasHeightForWidth());
        note21_3->setSizePolicy(sizePolicy);
        note21_3->setMinimumSize(QSize(38, 18));
        note21_3->setMaximumSize(QSize(38, 18));
        note21_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_3->setAutoExclusive(true);

        gridNotes->addWidget(note21_3, 16, 3, 1, 1);

        note21_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note21_4);
        note21_4->setObjectName(QStringLiteral("note21_4"));
        sizePolicy.setHeightForWidth(note21_4->sizePolicy().hasHeightForWidth());
        note21_4->setSizePolicy(sizePolicy);
        note21_4->setMinimumSize(QSize(38, 18));
        note21_4->setMaximumSize(QSize(38, 18));
        note21_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_4->setAutoExclusive(true);

        gridNotes->addWidget(note21_4, 16, 4, 1, 1);

        note21_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note21_5);
        note21_5->setObjectName(QStringLiteral("note21_5"));
        sizePolicy.setHeightForWidth(note21_5->sizePolicy().hasHeightForWidth());
        note21_5->setSizePolicy(sizePolicy);
        note21_5->setMinimumSize(QSize(38, 18));
        note21_5->setMaximumSize(QSize(38, 18));
        note21_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_5->setAutoExclusive(true);

        gridNotes->addWidget(note21_5, 16, 5, 1, 1);

        note21_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note21_6);
        note21_6->setObjectName(QStringLiteral("note21_6"));
        sizePolicy.setHeightForWidth(note21_6->sizePolicy().hasHeightForWidth());
        note21_6->setSizePolicy(sizePolicy);
        note21_6->setMinimumSize(QSize(38, 18));
        note21_6->setMaximumSize(QSize(38, 18));
        note21_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_6->setAutoExclusive(true);

        gridNotes->addWidget(note21_6, 16, 6, 1, 1);

        note21_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note21_7);
        note21_7->setObjectName(QStringLiteral("note21_7"));
        sizePolicy.setHeightForWidth(note21_7->sizePolicy().hasHeightForWidth());
        note21_7->setSizePolicy(sizePolicy);
        note21_7->setMinimumSize(QSize(38, 18));
        note21_7->setMaximumSize(QSize(38, 18));
        note21_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_7->setAutoExclusive(true);

        gridNotes->addWidget(note21_7, 16, 7, 1, 1);

        note21_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note21_8);
        note21_8->setObjectName(QStringLiteral("note21_8"));
        sizePolicy.setHeightForWidth(note21_8->sizePolicy().hasHeightForWidth());
        note21_8->setSizePolicy(sizePolicy);
        note21_8->setMinimumSize(QSize(38, 18));
        note21_8->setMaximumSize(QSize(38, 18));
        note21_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_8->setAutoExclusive(true);

        gridNotes->addWidget(note21_8, 16, 8, 1, 1);

        note21_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note21_9);
        note21_9->setObjectName(QStringLiteral("note21_9"));
        sizePolicy.setHeightForWidth(note21_9->sizePolicy().hasHeightForWidth());
        note21_9->setSizePolicy(sizePolicy);
        note21_9->setMinimumSize(QSize(38, 18));
        note21_9->setMaximumSize(QSize(38, 18));
        note21_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_9->setAutoExclusive(true);

        gridNotes->addWidget(note21_9, 16, 9, 1, 1);

        note21_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note21_10);
        note21_10->setObjectName(QStringLiteral("note21_10"));
        sizePolicy.setHeightForWidth(note21_10->sizePolicy().hasHeightForWidth());
        note21_10->setSizePolicy(sizePolicy);
        note21_10->setMinimumSize(QSize(38, 18));
        note21_10->setMaximumSize(QSize(38, 18));
        note21_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_10->setAutoExclusive(true);

        gridNotes->addWidget(note21_10, 16, 10, 1, 1);

        note21_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note21_11);
        note21_11->setObjectName(QStringLiteral("note21_11"));
        sizePolicy.setHeightForWidth(note21_11->sizePolicy().hasHeightForWidth());
        note21_11->setSizePolicy(sizePolicy);
        note21_11->setMinimumSize(QSize(38, 18));
        note21_11->setMaximumSize(QSize(38, 18));
        note21_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_11->setAutoExclusive(true);

        gridNotes->addWidget(note21_11, 16, 11, 1, 1);

        note21_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note21_12);
        note21_12->setObjectName(QStringLiteral("note21_12"));
        sizePolicy.setHeightForWidth(note21_12->sizePolicy().hasHeightForWidth());
        note21_12->setSizePolicy(sizePolicy);
        note21_12->setMinimumSize(QSize(38, 18));
        note21_12->setMaximumSize(QSize(38, 18));
        note21_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_12->setAutoExclusive(true);

        gridNotes->addWidget(note21_12, 16, 12, 1, 1);

        note21_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note21_13);
        note21_13->setObjectName(QStringLiteral("note21_13"));
        sizePolicy.setHeightForWidth(note21_13->sizePolicy().hasHeightForWidth());
        note21_13->setSizePolicy(sizePolicy);
        note21_13->setMinimumSize(QSize(38, 18));
        note21_13->setMaximumSize(QSize(38, 18));
        note21_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_13->setAutoExclusive(true);

        gridNotes->addWidget(note21_13, 16, 13, 1, 1);

        note21_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note21_14);
        note21_14->setObjectName(QStringLiteral("note21_14"));
        sizePolicy.setHeightForWidth(note21_14->sizePolicy().hasHeightForWidth());
        note21_14->setSizePolicy(sizePolicy);
        note21_14->setMinimumSize(QSize(38, 18));
        note21_14->setMaximumSize(QSize(38, 18));
        note21_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_14->setAutoExclusive(true);

        gridNotes->addWidget(note21_14, 16, 14, 1, 1);

        note21_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note21_15);
        note21_15->setObjectName(QStringLiteral("note21_15"));
        sizePolicy.setHeightForWidth(note21_15->sizePolicy().hasHeightForWidth());
        note21_15->setSizePolicy(sizePolicy);
        note21_15->setMinimumSize(QSize(38, 18));
        note21_15->setMaximumSize(QSize(38, 18));
        note21_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note21_15->setAutoExclusive(true);

        gridNotes->addWidget(note21_15, 16, 15, 1, 1);

        note20_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note20_0);
        note20_0->setObjectName(QStringLiteral("note20_0"));
        sizePolicy.setHeightForWidth(note20_0->sizePolicy().hasHeightForWidth());
        note20_0->setSizePolicy(sizePolicy);
        note20_0->setMinimumSize(QSize(38, 18));
        note20_0->setMaximumSize(QSize(38, 18));
        note20_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_0->setAutoExclusive(true);

        gridNotes->addWidget(note20_0, 17, 0, 1, 1);

        note20_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note20_1);
        note20_1->setObjectName(QStringLiteral("note20_1"));
        sizePolicy.setHeightForWidth(note20_1->sizePolicy().hasHeightForWidth());
        note20_1->setSizePolicy(sizePolicy);
        note20_1->setMinimumSize(QSize(38, 18));
        note20_1->setMaximumSize(QSize(38, 18));
        note20_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_1->setAutoExclusive(true);

        gridNotes->addWidget(note20_1, 17, 1, 1, 1);

        note20_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note20_2);
        note20_2->setObjectName(QStringLiteral("note20_2"));
        sizePolicy.setHeightForWidth(note20_2->sizePolicy().hasHeightForWidth());
        note20_2->setSizePolicy(sizePolicy);
        note20_2->setMinimumSize(QSize(38, 18));
        note20_2->setMaximumSize(QSize(38, 18));
        note20_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_2->setAutoExclusive(true);

        gridNotes->addWidget(note20_2, 17, 2, 1, 1);

        note20_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note20_3);
        note20_3->setObjectName(QStringLiteral("note20_3"));
        sizePolicy.setHeightForWidth(note20_3->sizePolicy().hasHeightForWidth());
        note20_3->setSizePolicy(sizePolicy);
        note20_3->setMinimumSize(QSize(38, 18));
        note20_3->setMaximumSize(QSize(38, 18));
        note20_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_3->setAutoExclusive(true);

        gridNotes->addWidget(note20_3, 17, 3, 1, 1);

        note20_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note20_4);
        note20_4->setObjectName(QStringLiteral("note20_4"));
        sizePolicy.setHeightForWidth(note20_4->sizePolicy().hasHeightForWidth());
        note20_4->setSizePolicy(sizePolicy);
        note20_4->setMinimumSize(QSize(38, 18));
        note20_4->setMaximumSize(QSize(38, 18));
        note20_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_4->setAutoExclusive(true);

        gridNotes->addWidget(note20_4, 17, 4, 1, 1);

        note20_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note20_5);
        note20_5->setObjectName(QStringLiteral("note20_5"));
        sizePolicy.setHeightForWidth(note20_5->sizePolicy().hasHeightForWidth());
        note20_5->setSizePolicy(sizePolicy);
        note20_5->setMinimumSize(QSize(38, 18));
        note20_5->setMaximumSize(QSize(38, 18));
        note20_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_5->setAutoExclusive(true);

        gridNotes->addWidget(note20_5, 17, 5, 1, 1);

        note20_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note20_6);
        note20_6->setObjectName(QStringLiteral("note20_6"));
        sizePolicy.setHeightForWidth(note20_6->sizePolicy().hasHeightForWidth());
        note20_6->setSizePolicy(sizePolicy);
        note20_6->setMinimumSize(QSize(38, 18));
        note20_6->setMaximumSize(QSize(38, 18));
        note20_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_6->setAutoExclusive(true);

        gridNotes->addWidget(note20_6, 17, 6, 1, 1);

        note20_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note20_7);
        note20_7->setObjectName(QStringLiteral("note20_7"));
        sizePolicy.setHeightForWidth(note20_7->sizePolicy().hasHeightForWidth());
        note20_7->setSizePolicy(sizePolicy);
        note20_7->setMinimumSize(QSize(38, 18));
        note20_7->setMaximumSize(QSize(38, 18));
        note20_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_7->setAutoExclusive(true);

        gridNotes->addWidget(note20_7, 17, 7, 1, 1);

        note20_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note20_8);
        note20_8->setObjectName(QStringLiteral("note20_8"));
        sizePolicy.setHeightForWidth(note20_8->sizePolicy().hasHeightForWidth());
        note20_8->setSizePolicy(sizePolicy);
        note20_8->setMinimumSize(QSize(38, 18));
        note20_8->setMaximumSize(QSize(38, 18));
        note20_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_8->setAutoExclusive(true);

        gridNotes->addWidget(note20_8, 17, 8, 1, 1);

        note20_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note20_9);
        note20_9->setObjectName(QStringLiteral("note20_9"));
        sizePolicy.setHeightForWidth(note20_9->sizePolicy().hasHeightForWidth());
        note20_9->setSizePolicy(sizePolicy);
        note20_9->setMinimumSize(QSize(38, 18));
        note20_9->setMaximumSize(QSize(38, 18));
        note20_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_9->setAutoExclusive(true);

        gridNotes->addWidget(note20_9, 17, 9, 1, 1);

        note20_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note20_10);
        note20_10->setObjectName(QStringLiteral("note20_10"));
        sizePolicy.setHeightForWidth(note20_10->sizePolicy().hasHeightForWidth());
        note20_10->setSizePolicy(sizePolicy);
        note20_10->setMinimumSize(QSize(38, 18));
        note20_10->setMaximumSize(QSize(38, 18));
        note20_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_10->setAutoExclusive(true);

        gridNotes->addWidget(note20_10, 17, 10, 1, 1);

        note20_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note20_11);
        note20_11->setObjectName(QStringLiteral("note20_11"));
        sizePolicy.setHeightForWidth(note20_11->sizePolicy().hasHeightForWidth());
        note20_11->setSizePolicy(sizePolicy);
        note20_11->setMinimumSize(QSize(38, 18));
        note20_11->setMaximumSize(QSize(38, 18));
        note20_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_11->setAutoExclusive(true);

        gridNotes->addWidget(note20_11, 17, 11, 1, 1);

        note20_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note20_12);
        note20_12->setObjectName(QStringLiteral("note20_12"));
        sizePolicy.setHeightForWidth(note20_12->sizePolicy().hasHeightForWidth());
        note20_12->setSizePolicy(sizePolicy);
        note20_12->setMinimumSize(QSize(38, 18));
        note20_12->setMaximumSize(QSize(38, 18));
        note20_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_12->setAutoExclusive(true);

        gridNotes->addWidget(note20_12, 17, 12, 1, 1);

        note20_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note20_13);
        note20_13->setObjectName(QStringLiteral("note20_13"));
        sizePolicy.setHeightForWidth(note20_13->sizePolicy().hasHeightForWidth());
        note20_13->setSizePolicy(sizePolicy);
        note20_13->setMinimumSize(QSize(38, 18));
        note20_13->setMaximumSize(QSize(38, 18));
        note20_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_13->setAutoExclusive(true);

        gridNotes->addWidget(note20_13, 17, 13, 1, 1);

        note20_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note20_14);
        note20_14->setObjectName(QStringLiteral("note20_14"));
        sizePolicy.setHeightForWidth(note20_14->sizePolicy().hasHeightForWidth());
        note20_14->setSizePolicy(sizePolicy);
        note20_14->setMinimumSize(QSize(38, 18));
        note20_14->setMaximumSize(QSize(38, 18));
        note20_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_14->setAutoExclusive(true);

        gridNotes->addWidget(note20_14, 17, 14, 1, 1);

        note20_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note20_15);
        note20_15->setObjectName(QStringLiteral("note20_15"));
        sizePolicy.setHeightForWidth(note20_15->sizePolicy().hasHeightForWidth());
        note20_15->setSizePolicy(sizePolicy);
        note20_15->setMinimumSize(QSize(38, 18));
        note20_15->setMaximumSize(QSize(38, 18));
        note20_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note20_15->setAutoExclusive(true);

        gridNotes->addWidget(note20_15, 17, 15, 1, 1);

        note19_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note19_0);
        note19_0->setObjectName(QStringLiteral("note19_0"));
        sizePolicy.setHeightForWidth(note19_0->sizePolicy().hasHeightForWidth());
        note19_0->setSizePolicy(sizePolicy);
        note19_0->setMinimumSize(QSize(38, 18));
        note19_0->setMaximumSize(QSize(38, 18));
        note19_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_0->setAutoExclusive(true);

        gridNotes->addWidget(note19_0, 18, 0, 1, 1);

        note19_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note19_1);
        note19_1->setObjectName(QStringLiteral("note19_1"));
        sizePolicy.setHeightForWidth(note19_1->sizePolicy().hasHeightForWidth());
        note19_1->setSizePolicy(sizePolicy);
        note19_1->setMinimumSize(QSize(38, 18));
        note19_1->setMaximumSize(QSize(38, 18));
        note19_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_1->setAutoExclusive(true);

        gridNotes->addWidget(note19_1, 18, 1, 1, 1);

        note19_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note19_2);
        note19_2->setObjectName(QStringLiteral("note19_2"));
        sizePolicy.setHeightForWidth(note19_2->sizePolicy().hasHeightForWidth());
        note19_2->setSizePolicy(sizePolicy);
        note19_2->setMinimumSize(QSize(38, 18));
        note19_2->setMaximumSize(QSize(38, 18));
        note19_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_2->setAutoExclusive(true);

        gridNotes->addWidget(note19_2, 18, 2, 1, 1);

        note19_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note19_3);
        note19_3->setObjectName(QStringLiteral("note19_3"));
        sizePolicy.setHeightForWidth(note19_3->sizePolicy().hasHeightForWidth());
        note19_3->setSizePolicy(sizePolicy);
        note19_3->setMinimumSize(QSize(38, 18));
        note19_3->setMaximumSize(QSize(38, 18));
        note19_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_3->setAutoExclusive(true);

        gridNotes->addWidget(note19_3, 18, 3, 1, 1);

        note19_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note19_4);
        note19_4->setObjectName(QStringLiteral("note19_4"));
        sizePolicy.setHeightForWidth(note19_4->sizePolicy().hasHeightForWidth());
        note19_4->setSizePolicy(sizePolicy);
        note19_4->setMinimumSize(QSize(38, 18));
        note19_4->setMaximumSize(QSize(38, 18));
        note19_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_4->setAutoExclusive(true);

        gridNotes->addWidget(note19_4, 18, 4, 1, 1);

        note19_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note19_5);
        note19_5->setObjectName(QStringLiteral("note19_5"));
        sizePolicy.setHeightForWidth(note19_5->sizePolicy().hasHeightForWidth());
        note19_5->setSizePolicy(sizePolicy);
        note19_5->setMinimumSize(QSize(38, 18));
        note19_5->setMaximumSize(QSize(38, 18));
        note19_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_5->setAutoExclusive(true);

        gridNotes->addWidget(note19_5, 18, 5, 1, 1);

        note19_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note19_6);
        note19_6->setObjectName(QStringLiteral("note19_6"));
        sizePolicy.setHeightForWidth(note19_6->sizePolicy().hasHeightForWidth());
        note19_6->setSizePolicy(sizePolicy);
        note19_6->setMinimumSize(QSize(38, 18));
        note19_6->setMaximumSize(QSize(38, 18));
        note19_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_6->setAutoExclusive(true);

        gridNotes->addWidget(note19_6, 18, 6, 1, 1);

        note19_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note19_7);
        note19_7->setObjectName(QStringLiteral("note19_7"));
        sizePolicy.setHeightForWidth(note19_7->sizePolicy().hasHeightForWidth());
        note19_7->setSizePolicy(sizePolicy);
        note19_7->setMinimumSize(QSize(38, 18));
        note19_7->setMaximumSize(QSize(38, 18));
        note19_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_7->setAutoExclusive(true);

        gridNotes->addWidget(note19_7, 18, 7, 1, 1);

        note19_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note19_8);
        note19_8->setObjectName(QStringLiteral("note19_8"));
        sizePolicy.setHeightForWidth(note19_8->sizePolicy().hasHeightForWidth());
        note19_8->setSizePolicy(sizePolicy);
        note19_8->setMinimumSize(QSize(38, 18));
        note19_8->setMaximumSize(QSize(38, 18));
        note19_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_8->setAutoExclusive(true);

        gridNotes->addWidget(note19_8, 18, 8, 1, 1);

        note19_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note19_9);
        note19_9->setObjectName(QStringLiteral("note19_9"));
        sizePolicy.setHeightForWidth(note19_9->sizePolicy().hasHeightForWidth());
        note19_9->setSizePolicy(sizePolicy);
        note19_9->setMinimumSize(QSize(38, 18));
        note19_9->setMaximumSize(QSize(38, 18));
        note19_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_9->setAutoExclusive(true);

        gridNotes->addWidget(note19_9, 18, 9, 1, 1);

        note19_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note19_10);
        note19_10->setObjectName(QStringLiteral("note19_10"));
        sizePolicy.setHeightForWidth(note19_10->sizePolicy().hasHeightForWidth());
        note19_10->setSizePolicy(sizePolicy);
        note19_10->setMinimumSize(QSize(38, 18));
        note19_10->setMaximumSize(QSize(38, 18));
        note19_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_10->setAutoExclusive(true);

        gridNotes->addWidget(note19_10, 18, 10, 1, 1);

        note19_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note19_11);
        note19_11->setObjectName(QStringLiteral("note19_11"));
        sizePolicy.setHeightForWidth(note19_11->sizePolicy().hasHeightForWidth());
        note19_11->setSizePolicy(sizePolicy);
        note19_11->setMinimumSize(QSize(38, 18));
        note19_11->setMaximumSize(QSize(38, 18));
        note19_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_11->setAutoExclusive(true);

        gridNotes->addWidget(note19_11, 18, 11, 1, 1);

        note19_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note19_12);
        note19_12->setObjectName(QStringLiteral("note19_12"));
        sizePolicy.setHeightForWidth(note19_12->sizePolicy().hasHeightForWidth());
        note19_12->setSizePolicy(sizePolicy);
        note19_12->setMinimumSize(QSize(38, 18));
        note19_12->setMaximumSize(QSize(38, 18));
        note19_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_12->setAutoExclusive(true);

        gridNotes->addWidget(note19_12, 18, 12, 1, 1);

        note19_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note19_13);
        note19_13->setObjectName(QStringLiteral("note19_13"));
        sizePolicy.setHeightForWidth(note19_13->sizePolicy().hasHeightForWidth());
        note19_13->setSizePolicy(sizePolicy);
        note19_13->setMinimumSize(QSize(38, 18));
        note19_13->setMaximumSize(QSize(38, 18));
        note19_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_13->setAutoExclusive(true);

        gridNotes->addWidget(note19_13, 18, 13, 1, 1);

        note19_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note19_14);
        note19_14->setObjectName(QStringLiteral("note19_14"));
        sizePolicy.setHeightForWidth(note19_14->sizePolicy().hasHeightForWidth());
        note19_14->setSizePolicy(sizePolicy);
        note19_14->setMinimumSize(QSize(38, 18));
        note19_14->setMaximumSize(QSize(38, 18));
        note19_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_14->setAutoExclusive(true);

        gridNotes->addWidget(note19_14, 18, 14, 1, 1);

        note19_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note19_15);
        note19_15->setObjectName(QStringLiteral("note19_15"));
        sizePolicy.setHeightForWidth(note19_15->sizePolicy().hasHeightForWidth());
        note19_15->setSizePolicy(sizePolicy);
        note19_15->setMinimumSize(QSize(38, 18));
        note19_15->setMaximumSize(QSize(38, 18));
        note19_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note19_15->setAutoExclusive(true);

        gridNotes->addWidget(note19_15, 18, 15, 1, 1);

        note18_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note18_0);
        note18_0->setObjectName(QStringLiteral("note18_0"));
        sizePolicy.setHeightForWidth(note18_0->sizePolicy().hasHeightForWidth());
        note18_0->setSizePolicy(sizePolicy);
        note18_0->setMinimumSize(QSize(38, 18));
        note18_0->setMaximumSize(QSize(38, 18));
        note18_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_0->setAutoExclusive(true);

        gridNotes->addWidget(note18_0, 19, 0, 1, 1);

        note18_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note18_1);
        note18_1->setObjectName(QStringLiteral("note18_1"));
        sizePolicy.setHeightForWidth(note18_1->sizePolicy().hasHeightForWidth());
        note18_1->setSizePolicy(sizePolicy);
        note18_1->setMinimumSize(QSize(38, 18));
        note18_1->setMaximumSize(QSize(38, 18));
        note18_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_1->setAutoExclusive(true);

        gridNotes->addWidget(note18_1, 19, 1, 1, 1);

        note18_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note18_2);
        note18_2->setObjectName(QStringLiteral("note18_2"));
        sizePolicy.setHeightForWidth(note18_2->sizePolicy().hasHeightForWidth());
        note18_2->setSizePolicy(sizePolicy);
        note18_2->setMinimumSize(QSize(38, 18));
        note18_2->setMaximumSize(QSize(38, 18));
        note18_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_2->setAutoExclusive(true);

        gridNotes->addWidget(note18_2, 19, 2, 1, 1);

        note18_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note18_3);
        note18_3->setObjectName(QStringLiteral("note18_3"));
        sizePolicy.setHeightForWidth(note18_3->sizePolicy().hasHeightForWidth());
        note18_3->setSizePolicy(sizePolicy);
        note18_3->setMinimumSize(QSize(38, 18));
        note18_3->setMaximumSize(QSize(38, 18));
        note18_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_3->setAutoExclusive(true);

        gridNotes->addWidget(note18_3, 19, 3, 1, 1);

        note18_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note18_4);
        note18_4->setObjectName(QStringLiteral("note18_4"));
        sizePolicy.setHeightForWidth(note18_4->sizePolicy().hasHeightForWidth());
        note18_4->setSizePolicy(sizePolicy);
        note18_4->setMinimumSize(QSize(38, 18));
        note18_4->setMaximumSize(QSize(38, 18));
        note18_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_4->setAutoExclusive(true);

        gridNotes->addWidget(note18_4, 19, 4, 1, 1);

        note18_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note18_5);
        note18_5->setObjectName(QStringLiteral("note18_5"));
        sizePolicy.setHeightForWidth(note18_5->sizePolicy().hasHeightForWidth());
        note18_5->setSizePolicy(sizePolicy);
        note18_5->setMinimumSize(QSize(38, 18));
        note18_5->setMaximumSize(QSize(38, 18));
        note18_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_5->setAutoExclusive(true);

        gridNotes->addWidget(note18_5, 19, 5, 1, 1);

        note18_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note18_6);
        note18_6->setObjectName(QStringLiteral("note18_6"));
        sizePolicy.setHeightForWidth(note18_6->sizePolicy().hasHeightForWidth());
        note18_6->setSizePolicy(sizePolicy);
        note18_6->setMinimumSize(QSize(38, 18));
        note18_6->setMaximumSize(QSize(38, 18));
        note18_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_6->setAutoExclusive(true);

        gridNotes->addWidget(note18_6, 19, 6, 1, 1);

        note18_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note18_7);
        note18_7->setObjectName(QStringLiteral("note18_7"));
        sizePolicy.setHeightForWidth(note18_7->sizePolicy().hasHeightForWidth());
        note18_7->setSizePolicy(sizePolicy);
        note18_7->setMinimumSize(QSize(38, 18));
        note18_7->setMaximumSize(QSize(38, 18));
        note18_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_7->setAutoExclusive(true);

        gridNotes->addWidget(note18_7, 19, 7, 1, 1);

        note18_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note18_8);
        note18_8->setObjectName(QStringLiteral("note18_8"));
        sizePolicy.setHeightForWidth(note18_8->sizePolicy().hasHeightForWidth());
        note18_8->setSizePolicy(sizePolicy);
        note18_8->setMinimumSize(QSize(38, 18));
        note18_8->setMaximumSize(QSize(38, 18));
        note18_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_8->setAutoExclusive(true);

        gridNotes->addWidget(note18_8, 19, 8, 1, 1);

        note18_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note18_9);
        note18_9->setObjectName(QStringLiteral("note18_9"));
        sizePolicy.setHeightForWidth(note18_9->sizePolicy().hasHeightForWidth());
        note18_9->setSizePolicy(sizePolicy);
        note18_9->setMinimumSize(QSize(38, 18));
        note18_9->setMaximumSize(QSize(38, 18));
        note18_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_9->setAutoExclusive(true);

        gridNotes->addWidget(note18_9, 19, 9, 1, 1);

        note18_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note18_10);
        note18_10->setObjectName(QStringLiteral("note18_10"));
        sizePolicy.setHeightForWidth(note18_10->sizePolicy().hasHeightForWidth());
        note18_10->setSizePolicy(sizePolicy);
        note18_10->setMinimumSize(QSize(38, 18));
        note18_10->setMaximumSize(QSize(38, 18));
        note18_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_10->setAutoExclusive(true);

        gridNotes->addWidget(note18_10, 19, 10, 1, 1);

        note18_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note18_11);
        note18_11->setObjectName(QStringLiteral("note18_11"));
        sizePolicy.setHeightForWidth(note18_11->sizePolicy().hasHeightForWidth());
        note18_11->setSizePolicy(sizePolicy);
        note18_11->setMinimumSize(QSize(38, 18));
        note18_11->setMaximumSize(QSize(38, 18));
        note18_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_11->setAutoExclusive(true);

        gridNotes->addWidget(note18_11, 19, 11, 1, 1);

        note18_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note18_12);
        note18_12->setObjectName(QStringLiteral("note18_12"));
        sizePolicy.setHeightForWidth(note18_12->sizePolicy().hasHeightForWidth());
        note18_12->setSizePolicy(sizePolicy);
        note18_12->setMinimumSize(QSize(38, 18));
        note18_12->setMaximumSize(QSize(38, 18));
        note18_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_12->setAutoExclusive(true);

        gridNotes->addWidget(note18_12, 19, 12, 1, 1);

        note18_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note18_13);
        note18_13->setObjectName(QStringLiteral("note18_13"));
        sizePolicy.setHeightForWidth(note18_13->sizePolicy().hasHeightForWidth());
        note18_13->setSizePolicy(sizePolicy);
        note18_13->setMinimumSize(QSize(38, 18));
        note18_13->setMaximumSize(QSize(38, 18));
        note18_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_13->setAutoExclusive(true);

        gridNotes->addWidget(note18_13, 19, 13, 1, 1);

        note18_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note18_14);
        note18_14->setObjectName(QStringLiteral("note18_14"));
        sizePolicy.setHeightForWidth(note18_14->sizePolicy().hasHeightForWidth());
        note18_14->setSizePolicy(sizePolicy);
        note18_14->setMinimumSize(QSize(38, 18));
        note18_14->setMaximumSize(QSize(38, 18));
        note18_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_14->setAutoExclusive(true);

        gridNotes->addWidget(note18_14, 19, 14, 1, 1);

        note18_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note18_15);
        note18_15->setObjectName(QStringLiteral("note18_15"));
        sizePolicy.setHeightForWidth(note18_15->sizePolicy().hasHeightForWidth());
        note18_15->setSizePolicy(sizePolicy);
        note18_15->setMinimumSize(QSize(38, 18));
        note18_15->setMaximumSize(QSize(38, 18));
        note18_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note18_15->setAutoExclusive(true);

        gridNotes->addWidget(note18_15, 19, 15, 1, 1);

        note17_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note17_0);
        note17_0->setObjectName(QStringLiteral("note17_0"));
        sizePolicy.setHeightForWidth(note17_0->sizePolicy().hasHeightForWidth());
        note17_0->setSizePolicy(sizePolicy);
        note17_0->setMinimumSize(QSize(38, 18));
        note17_0->setMaximumSize(QSize(38, 18));
        note17_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_0->setAutoExclusive(true);

        gridNotes->addWidget(note17_0, 20, 0, 1, 1);

        note17_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note17_1);
        note17_1->setObjectName(QStringLiteral("note17_1"));
        sizePolicy.setHeightForWidth(note17_1->sizePolicy().hasHeightForWidth());
        note17_1->setSizePolicy(sizePolicy);
        note17_1->setMinimumSize(QSize(38, 18));
        note17_1->setMaximumSize(QSize(38, 18));
        note17_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_1->setAutoExclusive(true);

        gridNotes->addWidget(note17_1, 20, 1, 1, 1);

        note17_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note17_2);
        note17_2->setObjectName(QStringLiteral("note17_2"));
        sizePolicy.setHeightForWidth(note17_2->sizePolicy().hasHeightForWidth());
        note17_2->setSizePolicy(sizePolicy);
        note17_2->setMinimumSize(QSize(38, 18));
        note17_2->setMaximumSize(QSize(38, 18));
        note17_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_2->setAutoExclusive(true);

        gridNotes->addWidget(note17_2, 20, 2, 1, 1);

        note17_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note17_3);
        note17_3->setObjectName(QStringLiteral("note17_3"));
        sizePolicy.setHeightForWidth(note17_3->sizePolicy().hasHeightForWidth());
        note17_3->setSizePolicy(sizePolicy);
        note17_3->setMinimumSize(QSize(38, 18));
        note17_3->setMaximumSize(QSize(38, 18));
        note17_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_3->setAutoExclusive(true);

        gridNotes->addWidget(note17_3, 20, 3, 1, 1);

        note17_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note17_4);
        note17_4->setObjectName(QStringLiteral("note17_4"));
        sizePolicy.setHeightForWidth(note17_4->sizePolicy().hasHeightForWidth());
        note17_4->setSizePolicy(sizePolicy);
        note17_4->setMinimumSize(QSize(38, 18));
        note17_4->setMaximumSize(QSize(38, 18));
        note17_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_4->setAutoExclusive(true);

        gridNotes->addWidget(note17_4, 20, 4, 1, 1);

        note17_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note17_5);
        note17_5->setObjectName(QStringLiteral("note17_5"));
        sizePolicy.setHeightForWidth(note17_5->sizePolicy().hasHeightForWidth());
        note17_5->setSizePolicy(sizePolicy);
        note17_5->setMinimumSize(QSize(38, 18));
        note17_5->setMaximumSize(QSize(38, 18));
        note17_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_5->setAutoExclusive(true);

        gridNotes->addWidget(note17_5, 20, 5, 1, 1);

        note17_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note17_6);
        note17_6->setObjectName(QStringLiteral("note17_6"));
        sizePolicy.setHeightForWidth(note17_6->sizePolicy().hasHeightForWidth());
        note17_6->setSizePolicy(sizePolicy);
        note17_6->setMinimumSize(QSize(38, 18));
        note17_6->setMaximumSize(QSize(38, 18));
        note17_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_6->setAutoExclusive(true);

        gridNotes->addWidget(note17_6, 20, 6, 1, 1);

        note17_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note17_7);
        note17_7->setObjectName(QStringLiteral("note17_7"));
        sizePolicy.setHeightForWidth(note17_7->sizePolicy().hasHeightForWidth());
        note17_7->setSizePolicy(sizePolicy);
        note17_7->setMinimumSize(QSize(38, 18));
        note17_7->setMaximumSize(QSize(38, 18));
        note17_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_7->setAutoExclusive(true);

        gridNotes->addWidget(note17_7, 20, 7, 1, 1);

        note17_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note17_8);
        note17_8->setObjectName(QStringLiteral("note17_8"));
        sizePolicy.setHeightForWidth(note17_8->sizePolicy().hasHeightForWidth());
        note17_8->setSizePolicy(sizePolicy);
        note17_8->setMinimumSize(QSize(38, 18));
        note17_8->setMaximumSize(QSize(38, 18));
        note17_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_8->setAutoExclusive(true);

        gridNotes->addWidget(note17_8, 20, 8, 1, 1);

        note17_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note17_9);
        note17_9->setObjectName(QStringLiteral("note17_9"));
        sizePolicy.setHeightForWidth(note17_9->sizePolicy().hasHeightForWidth());
        note17_9->setSizePolicy(sizePolicy);
        note17_9->setMinimumSize(QSize(38, 18));
        note17_9->setMaximumSize(QSize(38, 18));
        note17_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_9->setAutoExclusive(true);

        gridNotes->addWidget(note17_9, 20, 9, 1, 1);

        note17_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note17_10);
        note17_10->setObjectName(QStringLiteral("note17_10"));
        sizePolicy.setHeightForWidth(note17_10->sizePolicy().hasHeightForWidth());
        note17_10->setSizePolicy(sizePolicy);
        note17_10->setMinimumSize(QSize(38, 18));
        note17_10->setMaximumSize(QSize(38, 18));
        note17_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_10->setAutoExclusive(true);

        gridNotes->addWidget(note17_10, 20, 10, 1, 1);

        note17_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note17_11);
        note17_11->setObjectName(QStringLiteral("note17_11"));
        sizePolicy.setHeightForWidth(note17_11->sizePolicy().hasHeightForWidth());
        note17_11->setSizePolicy(sizePolicy);
        note17_11->setMinimumSize(QSize(38, 18));
        note17_11->setMaximumSize(QSize(38, 18));
        note17_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_11->setAutoExclusive(true);

        gridNotes->addWidget(note17_11, 20, 11, 1, 1);

        note17_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note17_12);
        note17_12->setObjectName(QStringLiteral("note17_12"));
        sizePolicy.setHeightForWidth(note17_12->sizePolicy().hasHeightForWidth());
        note17_12->setSizePolicy(sizePolicy);
        note17_12->setMinimumSize(QSize(38, 18));
        note17_12->setMaximumSize(QSize(38, 18));
        note17_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_12->setAutoExclusive(true);

        gridNotes->addWidget(note17_12, 20, 12, 1, 1);

        note17_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note17_13);
        note17_13->setObjectName(QStringLiteral("note17_13"));
        sizePolicy.setHeightForWidth(note17_13->sizePolicy().hasHeightForWidth());
        note17_13->setSizePolicy(sizePolicy);
        note17_13->setMinimumSize(QSize(38, 18));
        note17_13->setMaximumSize(QSize(38, 18));
        note17_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_13->setAutoExclusive(true);

        gridNotes->addWidget(note17_13, 20, 13, 1, 1);

        note17_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note17_14);
        note17_14->setObjectName(QStringLiteral("note17_14"));
        sizePolicy.setHeightForWidth(note17_14->sizePolicy().hasHeightForWidth());
        note17_14->setSizePolicy(sizePolicy);
        note17_14->setMinimumSize(QSize(38, 18));
        note17_14->setMaximumSize(QSize(38, 18));
        note17_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_14->setAutoExclusive(true);

        gridNotes->addWidget(note17_14, 20, 14, 1, 1);

        note17_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note17_15);
        note17_15->setObjectName(QStringLiteral("note17_15"));
        sizePolicy.setHeightForWidth(note17_15->sizePolicy().hasHeightForWidth());
        note17_15->setSizePolicy(sizePolicy);
        note17_15->setMinimumSize(QSize(38, 18));
        note17_15->setMaximumSize(QSize(38, 18));
        note17_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note17_15->setAutoExclusive(true);

        gridNotes->addWidget(note17_15, 20, 15, 1, 1);

        note16_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note16_0);
        note16_0->setObjectName(QStringLiteral("note16_0"));
        sizePolicy.setHeightForWidth(note16_0->sizePolicy().hasHeightForWidth());
        note16_0->setSizePolicy(sizePolicy);
        note16_0->setMinimumSize(QSize(38, 18));
        note16_0->setMaximumSize(QSize(38, 18));
        note16_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_0->setAutoExclusive(true);

        gridNotes->addWidget(note16_0, 21, 0, 1, 1);

        note16_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note16_1);
        note16_1->setObjectName(QStringLiteral("note16_1"));
        sizePolicy.setHeightForWidth(note16_1->sizePolicy().hasHeightForWidth());
        note16_1->setSizePolicy(sizePolicy);
        note16_1->setMinimumSize(QSize(38, 18));
        note16_1->setMaximumSize(QSize(38, 18));
        note16_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_1->setAutoExclusive(true);

        gridNotes->addWidget(note16_1, 21, 1, 1, 1);

        note16_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note16_2);
        note16_2->setObjectName(QStringLiteral("note16_2"));
        sizePolicy.setHeightForWidth(note16_2->sizePolicy().hasHeightForWidth());
        note16_2->setSizePolicy(sizePolicy);
        note16_2->setMinimumSize(QSize(38, 18));
        note16_2->setMaximumSize(QSize(38, 18));
        note16_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_2->setAutoExclusive(true);

        gridNotes->addWidget(note16_2, 21, 2, 1, 1);

        note16_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note16_3);
        note16_3->setObjectName(QStringLiteral("note16_3"));
        sizePolicy.setHeightForWidth(note16_3->sizePolicy().hasHeightForWidth());
        note16_3->setSizePolicy(sizePolicy);
        note16_3->setMinimumSize(QSize(38, 18));
        note16_3->setMaximumSize(QSize(38, 18));
        note16_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_3->setAutoExclusive(true);

        gridNotes->addWidget(note16_3, 21, 3, 1, 1);

        note16_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note16_4);
        note16_4->setObjectName(QStringLiteral("note16_4"));
        sizePolicy.setHeightForWidth(note16_4->sizePolicy().hasHeightForWidth());
        note16_4->setSizePolicy(sizePolicy);
        note16_4->setMinimumSize(QSize(38, 18));
        note16_4->setMaximumSize(QSize(38, 18));
        note16_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_4->setAutoExclusive(true);

        gridNotes->addWidget(note16_4, 21, 4, 1, 1);

        note16_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note16_5);
        note16_5->setObjectName(QStringLiteral("note16_5"));
        sizePolicy.setHeightForWidth(note16_5->sizePolicy().hasHeightForWidth());
        note16_5->setSizePolicy(sizePolicy);
        note16_5->setMinimumSize(QSize(38, 18));
        note16_5->setMaximumSize(QSize(38, 18));
        note16_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_5->setAutoExclusive(true);

        gridNotes->addWidget(note16_5, 21, 5, 1, 1);

        note16_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note16_6);
        note16_6->setObjectName(QStringLiteral("note16_6"));
        sizePolicy.setHeightForWidth(note16_6->sizePolicy().hasHeightForWidth());
        note16_6->setSizePolicy(sizePolicy);
        note16_6->setMinimumSize(QSize(38, 18));
        note16_6->setMaximumSize(QSize(38, 18));
        note16_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_6->setAutoExclusive(true);

        gridNotes->addWidget(note16_6, 21, 6, 1, 1);

        note16_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note16_7);
        note16_7->setObjectName(QStringLiteral("note16_7"));
        sizePolicy.setHeightForWidth(note16_7->sizePolicy().hasHeightForWidth());
        note16_7->setSizePolicy(sizePolicy);
        note16_7->setMinimumSize(QSize(38, 18));
        note16_7->setMaximumSize(QSize(38, 18));
        note16_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_7->setAutoExclusive(true);

        gridNotes->addWidget(note16_7, 21, 7, 1, 1);

        note16_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note16_8);
        note16_8->setObjectName(QStringLiteral("note16_8"));
        sizePolicy.setHeightForWidth(note16_8->sizePolicy().hasHeightForWidth());
        note16_8->setSizePolicy(sizePolicy);
        note16_8->setMinimumSize(QSize(38, 18));
        note16_8->setMaximumSize(QSize(38, 18));
        note16_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_8->setAutoExclusive(true);

        gridNotes->addWidget(note16_8, 21, 8, 1, 1);

        note16_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note16_9);
        note16_9->setObjectName(QStringLiteral("note16_9"));
        sizePolicy.setHeightForWidth(note16_9->sizePolicy().hasHeightForWidth());
        note16_9->setSizePolicy(sizePolicy);
        note16_9->setMinimumSize(QSize(38, 18));
        note16_9->setMaximumSize(QSize(38, 18));
        note16_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_9->setAutoExclusive(true);

        gridNotes->addWidget(note16_9, 21, 9, 1, 1);

        note16_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note16_10);
        note16_10->setObjectName(QStringLiteral("note16_10"));
        sizePolicy.setHeightForWidth(note16_10->sizePolicy().hasHeightForWidth());
        note16_10->setSizePolicy(sizePolicy);
        note16_10->setMinimumSize(QSize(38, 18));
        note16_10->setMaximumSize(QSize(38, 18));
        note16_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_10->setAutoExclusive(true);

        gridNotes->addWidget(note16_10, 21, 10, 1, 1);

        note16_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note16_11);
        note16_11->setObjectName(QStringLiteral("note16_11"));
        sizePolicy.setHeightForWidth(note16_11->sizePolicy().hasHeightForWidth());
        note16_11->setSizePolicy(sizePolicy);
        note16_11->setMinimumSize(QSize(38, 18));
        note16_11->setMaximumSize(QSize(38, 18));
        note16_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_11->setAutoExclusive(true);

        gridNotes->addWidget(note16_11, 21, 11, 1, 1);

        note16_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note16_12);
        note16_12->setObjectName(QStringLiteral("note16_12"));
        sizePolicy.setHeightForWidth(note16_12->sizePolicy().hasHeightForWidth());
        note16_12->setSizePolicy(sizePolicy);
        note16_12->setMinimumSize(QSize(38, 18));
        note16_12->setMaximumSize(QSize(38, 18));
        note16_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_12->setAutoExclusive(true);

        gridNotes->addWidget(note16_12, 21, 12, 1, 1);

        note16_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note16_13);
        note16_13->setObjectName(QStringLiteral("note16_13"));
        sizePolicy.setHeightForWidth(note16_13->sizePolicy().hasHeightForWidth());
        note16_13->setSizePolicy(sizePolicy);
        note16_13->setMinimumSize(QSize(38, 18));
        note16_13->setMaximumSize(QSize(38, 18));
        note16_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_13->setAutoExclusive(true);

        gridNotes->addWidget(note16_13, 21, 13, 1, 1);

        note16_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note16_14);
        note16_14->setObjectName(QStringLiteral("note16_14"));
        sizePolicy.setHeightForWidth(note16_14->sizePolicy().hasHeightForWidth());
        note16_14->setSizePolicy(sizePolicy);
        note16_14->setMinimumSize(QSize(38, 18));
        note16_14->setMaximumSize(QSize(38, 18));
        note16_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_14->setAutoExclusive(true);

        gridNotes->addWidget(note16_14, 21, 14, 1, 1);

        note16_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note16_15);
        note16_15->setObjectName(QStringLiteral("note16_15"));
        sizePolicy.setHeightForWidth(note16_15->sizePolicy().hasHeightForWidth());
        note16_15->setSizePolicy(sizePolicy);
        note16_15->setMinimumSize(QSize(38, 18));
        note16_15->setMaximumSize(QSize(38, 18));
        note16_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note16_15->setAutoExclusive(true);

        gridNotes->addWidget(note16_15, 21, 15, 1, 1);

        note15_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note15_0);
        note15_0->setObjectName(QStringLiteral("note15_0"));
        sizePolicy.setHeightForWidth(note15_0->sizePolicy().hasHeightForWidth());
        note15_0->setSizePolicy(sizePolicy);
        note15_0->setMinimumSize(QSize(38, 18));
        note15_0->setMaximumSize(QSize(38, 18));
        note15_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_0->setAutoExclusive(true);

        gridNotes->addWidget(note15_0, 22, 0, 1, 1);

        note15_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note15_1);
        note15_1->setObjectName(QStringLiteral("note15_1"));
        sizePolicy.setHeightForWidth(note15_1->sizePolicy().hasHeightForWidth());
        note15_1->setSizePolicy(sizePolicy);
        note15_1->setMinimumSize(QSize(38, 18));
        note15_1->setMaximumSize(QSize(38, 18));
        note15_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_1->setAutoExclusive(true);

        gridNotes->addWidget(note15_1, 22, 1, 1, 1);

        note15_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note15_2);
        note15_2->setObjectName(QStringLiteral("note15_2"));
        sizePolicy.setHeightForWidth(note15_2->sizePolicy().hasHeightForWidth());
        note15_2->setSizePolicy(sizePolicy);
        note15_2->setMinimumSize(QSize(38, 18));
        note15_2->setMaximumSize(QSize(38, 18));
        note15_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_2->setAutoExclusive(true);

        gridNotes->addWidget(note15_2, 22, 2, 1, 1);

        note15_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note15_3);
        note15_3->setObjectName(QStringLiteral("note15_3"));
        sizePolicy.setHeightForWidth(note15_3->sizePolicy().hasHeightForWidth());
        note15_3->setSizePolicy(sizePolicy);
        note15_3->setMinimumSize(QSize(38, 18));
        note15_3->setMaximumSize(QSize(38, 18));
        note15_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_3->setAutoExclusive(true);

        gridNotes->addWidget(note15_3, 22, 3, 1, 1);

        note15_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note15_4);
        note15_4->setObjectName(QStringLiteral("note15_4"));
        sizePolicy.setHeightForWidth(note15_4->sizePolicy().hasHeightForWidth());
        note15_4->setSizePolicy(sizePolicy);
        note15_4->setMinimumSize(QSize(38, 18));
        note15_4->setMaximumSize(QSize(38, 18));
        note15_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_4->setAutoExclusive(true);

        gridNotes->addWidget(note15_4, 22, 4, 1, 1);

        note15_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note15_5);
        note15_5->setObjectName(QStringLiteral("note15_5"));
        sizePolicy.setHeightForWidth(note15_5->sizePolicy().hasHeightForWidth());
        note15_5->setSizePolicy(sizePolicy);
        note15_5->setMinimumSize(QSize(38, 18));
        note15_5->setMaximumSize(QSize(38, 18));
        note15_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_5->setAutoExclusive(true);

        gridNotes->addWidget(note15_5, 22, 5, 1, 1);

        note15_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note15_6);
        note15_6->setObjectName(QStringLiteral("note15_6"));
        sizePolicy.setHeightForWidth(note15_6->sizePolicy().hasHeightForWidth());
        note15_6->setSizePolicy(sizePolicy);
        note15_6->setMinimumSize(QSize(38, 18));
        note15_6->setMaximumSize(QSize(38, 18));
        note15_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_6->setAutoExclusive(true);

        gridNotes->addWidget(note15_6, 22, 6, 1, 1);

        note15_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note15_7);
        note15_7->setObjectName(QStringLiteral("note15_7"));
        sizePolicy.setHeightForWidth(note15_7->sizePolicy().hasHeightForWidth());
        note15_7->setSizePolicy(sizePolicy);
        note15_7->setMinimumSize(QSize(38, 18));
        note15_7->setMaximumSize(QSize(38, 18));
        note15_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_7->setAutoExclusive(true);

        gridNotes->addWidget(note15_7, 22, 7, 1, 1);

        note15_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note15_8);
        note15_8->setObjectName(QStringLiteral("note15_8"));
        sizePolicy.setHeightForWidth(note15_8->sizePolicy().hasHeightForWidth());
        note15_8->setSizePolicy(sizePolicy);
        note15_8->setMinimumSize(QSize(38, 18));
        note15_8->setMaximumSize(QSize(38, 18));
        note15_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_8->setAutoExclusive(true);

        gridNotes->addWidget(note15_8, 22, 8, 1, 1);

        note15_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note15_9);
        note15_9->setObjectName(QStringLiteral("note15_9"));
        sizePolicy.setHeightForWidth(note15_9->sizePolicy().hasHeightForWidth());
        note15_9->setSizePolicy(sizePolicy);
        note15_9->setMinimumSize(QSize(38, 18));
        note15_9->setMaximumSize(QSize(38, 18));
        note15_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_9->setAutoExclusive(true);

        gridNotes->addWidget(note15_9, 22, 9, 1, 1);

        note15_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note15_10);
        note15_10->setObjectName(QStringLiteral("note15_10"));
        sizePolicy.setHeightForWidth(note15_10->sizePolicy().hasHeightForWidth());
        note15_10->setSizePolicy(sizePolicy);
        note15_10->setMinimumSize(QSize(38, 18));
        note15_10->setMaximumSize(QSize(38, 18));
        note15_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_10->setAutoExclusive(true);

        gridNotes->addWidget(note15_10, 22, 10, 1, 1);

        note15_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note15_11);
        note15_11->setObjectName(QStringLiteral("note15_11"));
        sizePolicy.setHeightForWidth(note15_11->sizePolicy().hasHeightForWidth());
        note15_11->setSizePolicy(sizePolicy);
        note15_11->setMinimumSize(QSize(38, 18));
        note15_11->setMaximumSize(QSize(38, 18));
        note15_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_11->setAutoExclusive(true);

        gridNotes->addWidget(note15_11, 22, 11, 1, 1);

        note15_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note15_12);
        note15_12->setObjectName(QStringLiteral("note15_12"));
        sizePolicy.setHeightForWidth(note15_12->sizePolicy().hasHeightForWidth());
        note15_12->setSizePolicy(sizePolicy);
        note15_12->setMinimumSize(QSize(38, 18));
        note15_12->setMaximumSize(QSize(38, 18));
        note15_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_12->setAutoExclusive(true);

        gridNotes->addWidget(note15_12, 22, 12, 1, 1);

        note15_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note15_13);
        note15_13->setObjectName(QStringLiteral("note15_13"));
        sizePolicy.setHeightForWidth(note15_13->sizePolicy().hasHeightForWidth());
        note15_13->setSizePolicy(sizePolicy);
        note15_13->setMinimumSize(QSize(38, 18));
        note15_13->setMaximumSize(QSize(38, 18));
        note15_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_13->setAutoExclusive(true);

        gridNotes->addWidget(note15_13, 22, 13, 1, 1);

        note15_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note15_14);
        note15_14->setObjectName(QStringLiteral("note15_14"));
        sizePolicy.setHeightForWidth(note15_14->sizePolicy().hasHeightForWidth());
        note15_14->setSizePolicy(sizePolicy);
        note15_14->setMinimumSize(QSize(38, 18));
        note15_14->setMaximumSize(QSize(38, 18));
        note15_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_14->setAutoExclusive(true);

        gridNotes->addWidget(note15_14, 22, 14, 1, 1);

        note15_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note15_15);
        note15_15->setObjectName(QStringLiteral("note15_15"));
        sizePolicy.setHeightForWidth(note15_15->sizePolicy().hasHeightForWidth());
        note15_15->setSizePolicy(sizePolicy);
        note15_15->setMinimumSize(QSize(38, 18));
        note15_15->setMaximumSize(QSize(38, 18));
        note15_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note15_15->setAutoExclusive(true);

        gridNotes->addWidget(note15_15, 22, 15, 1, 1);

        note14_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note14_0);
        note14_0->setObjectName(QStringLiteral("note14_0"));
        sizePolicy.setHeightForWidth(note14_0->sizePolicy().hasHeightForWidth());
        note14_0->setSizePolicy(sizePolicy);
        note14_0->setMinimumSize(QSize(38, 18));
        note14_0->setMaximumSize(QSize(38, 18));
        note14_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_0->setAutoExclusive(true);

        gridNotes->addWidget(note14_0, 23, 0, 1, 1);

        note14_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note14_1);
        note14_1->setObjectName(QStringLiteral("note14_1"));
        sizePolicy.setHeightForWidth(note14_1->sizePolicy().hasHeightForWidth());
        note14_1->setSizePolicy(sizePolicy);
        note14_1->setMinimumSize(QSize(38, 18));
        note14_1->setMaximumSize(QSize(38, 18));
        note14_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_1->setAutoExclusive(true);

        gridNotes->addWidget(note14_1, 23, 1, 1, 1);

        note14_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note14_2);
        note14_2->setObjectName(QStringLiteral("note14_2"));
        sizePolicy.setHeightForWidth(note14_2->sizePolicy().hasHeightForWidth());
        note14_2->setSizePolicy(sizePolicy);
        note14_2->setMinimumSize(QSize(38, 18));
        note14_2->setMaximumSize(QSize(38, 18));
        note14_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_2->setAutoExclusive(true);

        gridNotes->addWidget(note14_2, 23, 2, 1, 1);

        note14_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note14_3);
        note14_3->setObjectName(QStringLiteral("note14_3"));
        sizePolicy.setHeightForWidth(note14_3->sizePolicy().hasHeightForWidth());
        note14_3->setSizePolicy(sizePolicy);
        note14_3->setMinimumSize(QSize(38, 18));
        note14_3->setMaximumSize(QSize(38, 18));
        note14_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_3->setAutoExclusive(true);

        gridNotes->addWidget(note14_3, 23, 3, 1, 1);

        note14_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note14_4);
        note14_4->setObjectName(QStringLiteral("note14_4"));
        sizePolicy.setHeightForWidth(note14_4->sizePolicy().hasHeightForWidth());
        note14_4->setSizePolicy(sizePolicy);
        note14_4->setMinimumSize(QSize(38, 18));
        note14_4->setMaximumSize(QSize(38, 18));
        note14_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_4->setAutoExclusive(true);

        gridNotes->addWidget(note14_4, 23, 4, 1, 1);

        note14_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note14_5);
        note14_5->setObjectName(QStringLiteral("note14_5"));
        sizePolicy.setHeightForWidth(note14_5->sizePolicy().hasHeightForWidth());
        note14_5->setSizePolicy(sizePolicy);
        note14_5->setMinimumSize(QSize(38, 18));
        note14_5->setMaximumSize(QSize(38, 18));
        note14_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_5->setAutoExclusive(true);

        gridNotes->addWidget(note14_5, 23, 5, 1, 1);

        note14_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note14_6);
        note14_6->setObjectName(QStringLiteral("note14_6"));
        sizePolicy.setHeightForWidth(note14_6->sizePolicy().hasHeightForWidth());
        note14_6->setSizePolicy(sizePolicy);
        note14_6->setMinimumSize(QSize(38, 18));
        note14_6->setMaximumSize(QSize(38, 18));
        note14_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_6->setAutoExclusive(true);

        gridNotes->addWidget(note14_6, 23, 6, 1, 1);

        note14_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note14_7);
        note14_7->setObjectName(QStringLiteral("note14_7"));
        sizePolicy.setHeightForWidth(note14_7->sizePolicy().hasHeightForWidth());
        note14_7->setSizePolicy(sizePolicy);
        note14_7->setMinimumSize(QSize(38, 18));
        note14_7->setMaximumSize(QSize(38, 18));
        note14_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_7->setAutoExclusive(true);

        gridNotes->addWidget(note14_7, 23, 7, 1, 1);

        note14_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note14_8);
        note14_8->setObjectName(QStringLiteral("note14_8"));
        sizePolicy.setHeightForWidth(note14_8->sizePolicy().hasHeightForWidth());
        note14_8->setSizePolicy(sizePolicy);
        note14_8->setMinimumSize(QSize(38, 18));
        note14_8->setMaximumSize(QSize(38, 18));
        note14_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_8->setAutoExclusive(true);

        gridNotes->addWidget(note14_8, 23, 8, 1, 1);

        note14_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note14_9);
        note14_9->setObjectName(QStringLiteral("note14_9"));
        sizePolicy.setHeightForWidth(note14_9->sizePolicy().hasHeightForWidth());
        note14_9->setSizePolicy(sizePolicy);
        note14_9->setMinimumSize(QSize(38, 18));
        note14_9->setMaximumSize(QSize(38, 18));
        note14_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_9->setAutoExclusive(true);

        gridNotes->addWidget(note14_9, 23, 9, 1, 1);

        note14_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note14_10);
        note14_10->setObjectName(QStringLiteral("note14_10"));
        sizePolicy.setHeightForWidth(note14_10->sizePolicy().hasHeightForWidth());
        note14_10->setSizePolicy(sizePolicy);
        note14_10->setMinimumSize(QSize(38, 18));
        note14_10->setMaximumSize(QSize(38, 18));
        note14_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_10->setAutoExclusive(true);

        gridNotes->addWidget(note14_10, 23, 10, 1, 1);

        note14_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note14_11);
        note14_11->setObjectName(QStringLiteral("note14_11"));
        sizePolicy.setHeightForWidth(note14_11->sizePolicy().hasHeightForWidth());
        note14_11->setSizePolicy(sizePolicy);
        note14_11->setMinimumSize(QSize(38, 18));
        note14_11->setMaximumSize(QSize(38, 18));
        note14_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_11->setAutoExclusive(true);

        gridNotes->addWidget(note14_11, 23, 11, 1, 1);

        note14_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note14_12);
        note14_12->setObjectName(QStringLiteral("note14_12"));
        sizePolicy.setHeightForWidth(note14_12->sizePolicy().hasHeightForWidth());
        note14_12->setSizePolicy(sizePolicy);
        note14_12->setMinimumSize(QSize(38, 18));
        note14_12->setMaximumSize(QSize(38, 18));
        note14_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_12->setAutoExclusive(true);

        gridNotes->addWidget(note14_12, 23, 12, 1, 1);

        note14_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note14_13);
        note14_13->setObjectName(QStringLiteral("note14_13"));
        sizePolicy.setHeightForWidth(note14_13->sizePolicy().hasHeightForWidth());
        note14_13->setSizePolicy(sizePolicy);
        note14_13->setMinimumSize(QSize(38, 18));
        note14_13->setMaximumSize(QSize(38, 18));
        note14_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_13->setAutoExclusive(true);

        gridNotes->addWidget(note14_13, 23, 13, 1, 1);

        note14_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note14_14);
        note14_14->setObjectName(QStringLiteral("note14_14"));
        sizePolicy.setHeightForWidth(note14_14->sizePolicy().hasHeightForWidth());
        note14_14->setSizePolicy(sizePolicy);
        note14_14->setMinimumSize(QSize(38, 18));
        note14_14->setMaximumSize(QSize(38, 18));
        note14_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_14->setAutoExclusive(true);

        gridNotes->addWidget(note14_14, 23, 14, 1, 1);

        note14_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note14_15);
        note14_15->setObjectName(QStringLiteral("note14_15"));
        sizePolicy.setHeightForWidth(note14_15->sizePolicy().hasHeightForWidth());
        note14_15->setSizePolicy(sizePolicy);
        note14_15->setMinimumSize(QSize(38, 18));
        note14_15->setMaximumSize(QSize(38, 18));
        note14_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note14_15->setAutoExclusive(true);

        gridNotes->addWidget(note14_15, 23, 15, 1, 1);

        note13_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note13_0);
        note13_0->setObjectName(QStringLiteral("note13_0"));
        sizePolicy.setHeightForWidth(note13_0->sizePolicy().hasHeightForWidth());
        note13_0->setSizePolicy(sizePolicy);
        note13_0->setMinimumSize(QSize(38, 18));
        note13_0->setMaximumSize(QSize(38, 18));
        note13_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_0->setChecked(false);
        note13_0->setAutoExclusive(true);

        gridNotes->addWidget(note13_0, 24, 0, 1, 1);

        note13_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note13_1);
        note13_1->setObjectName(QStringLiteral("note13_1"));
        sizePolicy.setHeightForWidth(note13_1->sizePolicy().hasHeightForWidth());
        note13_1->setSizePolicy(sizePolicy);
        note13_1->setMinimumSize(QSize(38, 18));
        note13_1->setMaximumSize(QSize(38, 18));
        note13_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_1->setAutoExclusive(true);

        gridNotes->addWidget(note13_1, 24, 1, 1, 1);

        note13_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note13_2);
        note13_2->setObjectName(QStringLiteral("note13_2"));
        sizePolicy.setHeightForWidth(note13_2->sizePolicy().hasHeightForWidth());
        note13_2->setSizePolicy(sizePolicy);
        note13_2->setMinimumSize(QSize(38, 18));
        note13_2->setMaximumSize(QSize(38, 18));
        note13_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_2->setAutoExclusive(true);

        gridNotes->addWidget(note13_2, 24, 2, 1, 1);

        note13_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note13_3);
        note13_3->setObjectName(QStringLiteral("note13_3"));
        sizePolicy.setHeightForWidth(note13_3->sizePolicy().hasHeightForWidth());
        note13_3->setSizePolicy(sizePolicy);
        note13_3->setMinimumSize(QSize(38, 18));
        note13_3->setMaximumSize(QSize(38, 18));
        note13_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_3->setAutoExclusive(true);

        gridNotes->addWidget(note13_3, 24, 3, 1, 1);

        note13_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note13_4);
        note13_4->setObjectName(QStringLiteral("note13_4"));
        sizePolicy.setHeightForWidth(note13_4->sizePolicy().hasHeightForWidth());
        note13_4->setSizePolicy(sizePolicy);
        note13_4->setMinimumSize(QSize(38, 18));
        note13_4->setMaximumSize(QSize(38, 18));
        note13_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_4->setAutoExclusive(true);

        gridNotes->addWidget(note13_4, 24, 4, 1, 1);

        note13_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note13_5);
        note13_5->setObjectName(QStringLiteral("note13_5"));
        sizePolicy.setHeightForWidth(note13_5->sizePolicy().hasHeightForWidth());
        note13_5->setSizePolicy(sizePolicy);
        note13_5->setMinimumSize(QSize(38, 18));
        note13_5->setMaximumSize(QSize(38, 18));
        note13_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_5->setAutoExclusive(true);

        gridNotes->addWidget(note13_5, 24, 5, 1, 1);

        note13_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note13_6);
        note13_6->setObjectName(QStringLiteral("note13_6"));
        sizePolicy.setHeightForWidth(note13_6->sizePolicy().hasHeightForWidth());
        note13_6->setSizePolicy(sizePolicy);
        note13_6->setMinimumSize(QSize(38, 18));
        note13_6->setMaximumSize(QSize(38, 18));
        note13_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_6->setAutoExclusive(true);

        gridNotes->addWidget(note13_6, 24, 6, 1, 1);

        note13_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note13_7);
        note13_7->setObjectName(QStringLiteral("note13_7"));
        sizePolicy.setHeightForWidth(note13_7->sizePolicy().hasHeightForWidth());
        note13_7->setSizePolicy(sizePolicy);
        note13_7->setMinimumSize(QSize(38, 18));
        note13_7->setMaximumSize(QSize(38, 18));
        note13_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_7->setAutoExclusive(true);

        gridNotes->addWidget(note13_7, 24, 7, 1, 1);

        note13_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note13_8);
        note13_8->setObjectName(QStringLiteral("note13_8"));
        sizePolicy.setHeightForWidth(note13_8->sizePolicy().hasHeightForWidth());
        note13_8->setSizePolicy(sizePolicy);
        note13_8->setMinimumSize(QSize(38, 18));
        note13_8->setMaximumSize(QSize(38, 18));
        note13_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_8->setAutoExclusive(true);

        gridNotes->addWidget(note13_8, 24, 8, 1, 1);

        note13_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note13_9);
        note13_9->setObjectName(QStringLiteral("note13_9"));
        sizePolicy.setHeightForWidth(note13_9->sizePolicy().hasHeightForWidth());
        note13_9->setSizePolicy(sizePolicy);
        note13_9->setMinimumSize(QSize(38, 18));
        note13_9->setMaximumSize(QSize(38, 18));
        note13_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_9->setAutoExclusive(true);

        gridNotes->addWidget(note13_9, 24, 9, 1, 1);

        note13_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note13_10);
        note13_10->setObjectName(QStringLiteral("note13_10"));
        sizePolicy.setHeightForWidth(note13_10->sizePolicy().hasHeightForWidth());
        note13_10->setSizePolicy(sizePolicy);
        note13_10->setMinimumSize(QSize(38, 18));
        note13_10->setMaximumSize(QSize(38, 18));
        note13_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_10->setAutoExclusive(true);

        gridNotes->addWidget(note13_10, 24, 10, 1, 1);

        note13_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note13_11);
        note13_11->setObjectName(QStringLiteral("note13_11"));
        sizePolicy.setHeightForWidth(note13_11->sizePolicy().hasHeightForWidth());
        note13_11->setSizePolicy(sizePolicy);
        note13_11->setMinimumSize(QSize(38, 18));
        note13_11->setMaximumSize(QSize(38, 18));
        note13_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_11->setAutoExclusive(true);

        gridNotes->addWidget(note13_11, 24, 11, 1, 1);

        note13_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note13_12);
        note13_12->setObjectName(QStringLiteral("note13_12"));
        sizePolicy.setHeightForWidth(note13_12->sizePolicy().hasHeightForWidth());
        note13_12->setSizePolicy(sizePolicy);
        note13_12->setMinimumSize(QSize(38, 18));
        note13_12->setMaximumSize(QSize(38, 18));
        note13_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_12->setAutoExclusive(true);

        gridNotes->addWidget(note13_12, 24, 12, 1, 1);

        note13_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note13_13);
        note13_13->setObjectName(QStringLiteral("note13_13"));
        sizePolicy.setHeightForWidth(note13_13->sizePolicy().hasHeightForWidth());
        note13_13->setSizePolicy(sizePolicy);
        note13_13->setMinimumSize(QSize(38, 18));
        note13_13->setMaximumSize(QSize(38, 18));
        note13_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_13->setAutoExclusive(true);

        gridNotes->addWidget(note13_13, 24, 13, 1, 1);

        note13_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note13_14);
        note13_14->setObjectName(QStringLiteral("note13_14"));
        sizePolicy.setHeightForWidth(note13_14->sizePolicy().hasHeightForWidth());
        note13_14->setSizePolicy(sizePolicy);
        note13_14->setMinimumSize(QSize(38, 18));
        note13_14->setMaximumSize(QSize(38, 18));
        note13_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_14->setAutoExclusive(true);

        gridNotes->addWidget(note13_14, 24, 14, 1, 1);

        note13_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note13_15);
        note13_15->setObjectName(QStringLiteral("note13_15"));
        sizePolicy.setHeightForWidth(note13_15->sizePolicy().hasHeightForWidth());
        note13_15->setSizePolicy(sizePolicy);
        note13_15->setMinimumSize(QSize(38, 18));
        note13_15->setMaximumSize(QSize(38, 18));
        note13_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note13_15->setAutoExclusive(true);

        gridNotes->addWidget(note13_15, 24, 15, 1, 1);

        note12_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note12_0);
        note12_0->setObjectName(QStringLiteral("note12_0"));
        sizePolicy.setHeightForWidth(note12_0->sizePolicy().hasHeightForWidth());
        note12_0->setSizePolicy(sizePolicy);
        note12_0->setMinimumSize(QSize(38, 18));
        note12_0->setMaximumSize(QSize(38, 18));
        note12_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_0->setAutoExclusive(true);

        gridNotes->addWidget(note12_0, 25, 0, 1, 1);

        note12_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note12_1);
        note12_1->setObjectName(QStringLiteral("note12_1"));
        sizePolicy.setHeightForWidth(note12_1->sizePolicy().hasHeightForWidth());
        note12_1->setSizePolicy(sizePolicy);
        note12_1->setMinimumSize(QSize(38, 18));
        note12_1->setMaximumSize(QSize(38, 18));
        note12_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_1->setAutoExclusive(true);

        gridNotes->addWidget(note12_1, 25, 1, 1, 1);

        note12_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note12_2);
        note12_2->setObjectName(QStringLiteral("note12_2"));
        sizePolicy.setHeightForWidth(note12_2->sizePolicy().hasHeightForWidth());
        note12_2->setSizePolicy(sizePolicy);
        note12_2->setMinimumSize(QSize(38, 18));
        note12_2->setMaximumSize(QSize(38, 18));
        note12_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_2->setAutoExclusive(true);

        gridNotes->addWidget(note12_2, 25, 2, 1, 1);

        note12_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note12_3);
        note12_3->setObjectName(QStringLiteral("note12_3"));
        sizePolicy.setHeightForWidth(note12_3->sizePolicy().hasHeightForWidth());
        note12_3->setSizePolicy(sizePolicy);
        note12_3->setMinimumSize(QSize(38, 18));
        note12_3->setMaximumSize(QSize(38, 18));
        note12_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_3->setAutoExclusive(true);

        gridNotes->addWidget(note12_3, 25, 3, 1, 1);

        note12_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note12_4);
        note12_4->setObjectName(QStringLiteral("note12_4"));
        sizePolicy.setHeightForWidth(note12_4->sizePolicy().hasHeightForWidth());
        note12_4->setSizePolicy(sizePolicy);
        note12_4->setMinimumSize(QSize(38, 18));
        note12_4->setMaximumSize(QSize(38, 18));
        note12_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_4->setAutoExclusive(true);

        gridNotes->addWidget(note12_4, 25, 4, 1, 1);

        note12_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note12_5);
        note12_5->setObjectName(QStringLiteral("note12_5"));
        sizePolicy.setHeightForWidth(note12_5->sizePolicy().hasHeightForWidth());
        note12_5->setSizePolicy(sizePolicy);
        note12_5->setMinimumSize(QSize(38, 18));
        note12_5->setMaximumSize(QSize(38, 18));
        note12_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_5->setAutoExclusive(true);

        gridNotes->addWidget(note12_5, 25, 5, 1, 1);

        note12_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note12_6);
        note12_6->setObjectName(QStringLiteral("note12_6"));
        sizePolicy.setHeightForWidth(note12_6->sizePolicy().hasHeightForWidth());
        note12_6->setSizePolicy(sizePolicy);
        note12_6->setMinimumSize(QSize(38, 18));
        note12_6->setMaximumSize(QSize(38, 18));
        note12_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_6->setAutoExclusive(true);

        gridNotes->addWidget(note12_6, 25, 6, 1, 1);

        note12_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note12_7);
        note12_7->setObjectName(QStringLiteral("note12_7"));
        sizePolicy.setHeightForWidth(note12_7->sizePolicy().hasHeightForWidth());
        note12_7->setSizePolicy(sizePolicy);
        note12_7->setMinimumSize(QSize(38, 18));
        note12_7->setMaximumSize(QSize(38, 18));
        note12_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_7->setAutoExclusive(true);

        gridNotes->addWidget(note12_7, 25, 7, 1, 1);

        note12_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note12_8);
        note12_8->setObjectName(QStringLiteral("note12_8"));
        sizePolicy.setHeightForWidth(note12_8->sizePolicy().hasHeightForWidth());
        note12_8->setSizePolicy(sizePolicy);
        note12_8->setMinimumSize(QSize(38, 18));
        note12_8->setMaximumSize(QSize(38, 18));
        note12_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_8->setAutoExclusive(true);

        gridNotes->addWidget(note12_8, 25, 8, 1, 1);

        note12_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note12_9);
        note12_9->setObjectName(QStringLiteral("note12_9"));
        sizePolicy.setHeightForWidth(note12_9->sizePolicy().hasHeightForWidth());
        note12_9->setSizePolicy(sizePolicy);
        note12_9->setMinimumSize(QSize(38, 18));
        note12_9->setMaximumSize(QSize(38, 18));
        note12_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_9->setAutoExclusive(true);

        gridNotes->addWidget(note12_9, 25, 9, 1, 1);

        note12_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note12_10);
        note12_10->setObjectName(QStringLiteral("note12_10"));
        sizePolicy.setHeightForWidth(note12_10->sizePolicy().hasHeightForWidth());
        note12_10->setSizePolicy(sizePolicy);
        note12_10->setMinimumSize(QSize(38, 18));
        note12_10->setMaximumSize(QSize(38, 18));
        note12_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_10->setAutoExclusive(true);

        gridNotes->addWidget(note12_10, 25, 10, 1, 1);

        note12_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note12_11);
        note12_11->setObjectName(QStringLiteral("note12_11"));
        sizePolicy.setHeightForWidth(note12_11->sizePolicy().hasHeightForWidth());
        note12_11->setSizePolicy(sizePolicy);
        note12_11->setMinimumSize(QSize(38, 18));
        note12_11->setMaximumSize(QSize(38, 18));
        note12_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_11->setAutoExclusive(true);

        gridNotes->addWidget(note12_11, 25, 11, 1, 1);

        note12_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note12_12);
        note12_12->setObjectName(QStringLiteral("note12_12"));
        sizePolicy.setHeightForWidth(note12_12->sizePolicy().hasHeightForWidth());
        note12_12->setSizePolicy(sizePolicy);
        note12_12->setMinimumSize(QSize(38, 18));
        note12_12->setMaximumSize(QSize(38, 18));
        note12_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_12->setAutoExclusive(true);

        gridNotes->addWidget(note12_12, 25, 12, 1, 1);

        note12_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note12_13);
        note12_13->setObjectName(QStringLiteral("note12_13"));
        sizePolicy.setHeightForWidth(note12_13->sizePolicy().hasHeightForWidth());
        note12_13->setSizePolicy(sizePolicy);
        note12_13->setMinimumSize(QSize(38, 18));
        note12_13->setMaximumSize(QSize(38, 18));
        note12_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_13->setAutoExclusive(true);

        gridNotes->addWidget(note12_13, 25, 13, 1, 1);

        note12_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note12_14);
        note12_14->setObjectName(QStringLiteral("note12_14"));
        sizePolicy.setHeightForWidth(note12_14->sizePolicy().hasHeightForWidth());
        note12_14->setSizePolicy(sizePolicy);
        note12_14->setMinimumSize(QSize(38, 18));
        note12_14->setMaximumSize(QSize(38, 18));
        note12_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_14->setAutoExclusive(true);

        gridNotes->addWidget(note12_14, 25, 14, 1, 1);

        note12_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note12_15);
        note12_15->setObjectName(QStringLiteral("note12_15"));
        sizePolicy.setHeightForWidth(note12_15->sizePolicy().hasHeightForWidth());
        note12_15->setSizePolicy(sizePolicy);
        note12_15->setMinimumSize(QSize(38, 18));
        note12_15->setMaximumSize(QSize(38, 18));
        note12_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note12_15->setAutoExclusive(true);

        gridNotes->addWidget(note12_15, 25, 15, 1, 1);

        note11_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note11_0);
        note11_0->setObjectName(QStringLiteral("note11_0"));
        sizePolicy.setHeightForWidth(note11_0->sizePolicy().hasHeightForWidth());
        note11_0->setSizePolicy(sizePolicy);
        note11_0->setMinimumSize(QSize(38, 18));
        note11_0->setMaximumSize(QSize(38, 18));
        note11_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_0->setAutoExclusive(true);

        gridNotes->addWidget(note11_0, 26, 0, 1, 1);

        note11_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note11_1);
        note11_1->setObjectName(QStringLiteral("note11_1"));
        sizePolicy.setHeightForWidth(note11_1->sizePolicy().hasHeightForWidth());
        note11_1->setSizePolicy(sizePolicy);
        note11_1->setMinimumSize(QSize(38, 18));
        note11_1->setMaximumSize(QSize(38, 18));
        note11_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_1->setAutoExclusive(true);

        gridNotes->addWidget(note11_1, 26, 1, 1, 1);

        note11_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note11_2);
        note11_2->setObjectName(QStringLiteral("note11_2"));
        sizePolicy.setHeightForWidth(note11_2->sizePolicy().hasHeightForWidth());
        note11_2->setSizePolicy(sizePolicy);
        note11_2->setMinimumSize(QSize(38, 18));
        note11_2->setMaximumSize(QSize(38, 18));
        note11_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_2->setAutoExclusive(true);

        gridNotes->addWidget(note11_2, 26, 2, 1, 1);

        note11_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note11_3);
        note11_3->setObjectName(QStringLiteral("note11_3"));
        sizePolicy.setHeightForWidth(note11_3->sizePolicy().hasHeightForWidth());
        note11_3->setSizePolicy(sizePolicy);
        note11_3->setMinimumSize(QSize(38, 18));
        note11_3->setMaximumSize(QSize(38, 18));
        note11_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_3->setAutoExclusive(true);

        gridNotes->addWidget(note11_3, 26, 3, 1, 1);

        note11_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note11_4);
        note11_4->setObjectName(QStringLiteral("note11_4"));
        sizePolicy.setHeightForWidth(note11_4->sizePolicy().hasHeightForWidth());
        note11_4->setSizePolicy(sizePolicy);
        note11_4->setMinimumSize(QSize(38, 18));
        note11_4->setMaximumSize(QSize(38, 18));
        note11_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_4->setAutoExclusive(true);

        gridNotes->addWidget(note11_4, 26, 4, 1, 1);

        note11_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note11_5);
        note11_5->setObjectName(QStringLiteral("note11_5"));
        sizePolicy.setHeightForWidth(note11_5->sizePolicy().hasHeightForWidth());
        note11_5->setSizePolicy(sizePolicy);
        note11_5->setMinimumSize(QSize(38, 18));
        note11_5->setMaximumSize(QSize(38, 18));
        note11_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_5->setAutoExclusive(true);

        gridNotes->addWidget(note11_5, 26, 5, 1, 1);

        note11_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note11_6);
        note11_6->setObjectName(QStringLiteral("note11_6"));
        sizePolicy.setHeightForWidth(note11_6->sizePolicy().hasHeightForWidth());
        note11_6->setSizePolicy(sizePolicy);
        note11_6->setMinimumSize(QSize(38, 18));
        note11_6->setMaximumSize(QSize(38, 18));
        note11_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_6->setAutoExclusive(true);

        gridNotes->addWidget(note11_6, 26, 6, 1, 1);

        note11_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note11_7);
        note11_7->setObjectName(QStringLiteral("note11_7"));
        sizePolicy.setHeightForWidth(note11_7->sizePolicy().hasHeightForWidth());
        note11_7->setSizePolicy(sizePolicy);
        note11_7->setMinimumSize(QSize(38, 18));
        note11_7->setMaximumSize(QSize(38, 18));
        note11_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_7->setAutoExclusive(true);

        gridNotes->addWidget(note11_7, 26, 7, 1, 1);

        note11_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note11_8);
        note11_8->setObjectName(QStringLiteral("note11_8"));
        sizePolicy.setHeightForWidth(note11_8->sizePolicy().hasHeightForWidth());
        note11_8->setSizePolicy(sizePolicy);
        note11_8->setMinimumSize(QSize(38, 18));
        note11_8->setMaximumSize(QSize(38, 18));
        note11_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_8->setAutoExclusive(true);

        gridNotes->addWidget(note11_8, 26, 8, 1, 1);

        note11_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note11_9);
        note11_9->setObjectName(QStringLiteral("note11_9"));
        sizePolicy.setHeightForWidth(note11_9->sizePolicy().hasHeightForWidth());
        note11_9->setSizePolicy(sizePolicy);
        note11_9->setMinimumSize(QSize(38, 18));
        note11_9->setMaximumSize(QSize(38, 18));
        note11_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_9->setAutoExclusive(true);

        gridNotes->addWidget(note11_9, 26, 9, 1, 1);

        note11_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note11_10);
        note11_10->setObjectName(QStringLiteral("note11_10"));
        sizePolicy.setHeightForWidth(note11_10->sizePolicy().hasHeightForWidth());
        note11_10->setSizePolicy(sizePolicy);
        note11_10->setMinimumSize(QSize(38, 18));
        note11_10->setMaximumSize(QSize(38, 18));
        note11_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_10->setAutoExclusive(true);

        gridNotes->addWidget(note11_10, 26, 10, 1, 1);

        note11_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note11_11);
        note11_11->setObjectName(QStringLiteral("note11_11"));
        sizePolicy.setHeightForWidth(note11_11->sizePolicy().hasHeightForWidth());
        note11_11->setSizePolicy(sizePolicy);
        note11_11->setMinimumSize(QSize(38, 18));
        note11_11->setMaximumSize(QSize(38, 18));
        note11_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_11->setAutoExclusive(true);

        gridNotes->addWidget(note11_11, 26, 11, 1, 1);

        note11_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note11_12);
        note11_12->setObjectName(QStringLiteral("note11_12"));
        sizePolicy.setHeightForWidth(note11_12->sizePolicy().hasHeightForWidth());
        note11_12->setSizePolicy(sizePolicy);
        note11_12->setMinimumSize(QSize(38, 18));
        note11_12->setMaximumSize(QSize(38, 18));
        note11_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_12->setAutoExclusive(true);

        gridNotes->addWidget(note11_12, 26, 12, 1, 1);

        note11_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note11_13);
        note11_13->setObjectName(QStringLiteral("note11_13"));
        sizePolicy.setHeightForWidth(note11_13->sizePolicy().hasHeightForWidth());
        note11_13->setSizePolicy(sizePolicy);
        note11_13->setMinimumSize(QSize(38, 18));
        note11_13->setMaximumSize(QSize(38, 18));
        note11_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_13->setAutoExclusive(true);

        gridNotes->addWidget(note11_13, 26, 13, 1, 1);

        note11_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note11_14);
        note11_14->setObjectName(QStringLiteral("note11_14"));
        sizePolicy.setHeightForWidth(note11_14->sizePolicy().hasHeightForWidth());
        note11_14->setSizePolicy(sizePolicy);
        note11_14->setMinimumSize(QSize(38, 18));
        note11_14->setMaximumSize(QSize(38, 18));
        note11_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_14->setAutoExclusive(true);

        gridNotes->addWidget(note11_14, 26, 14, 1, 1);

        note11_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note11_15);
        note11_15->setObjectName(QStringLiteral("note11_15"));
        sizePolicy.setHeightForWidth(note11_15->sizePolicy().hasHeightForWidth());
        note11_15->setSizePolicy(sizePolicy);
        note11_15->setMinimumSize(QSize(38, 18));
        note11_15->setMaximumSize(QSize(38, 18));
        note11_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note11_15->setAutoExclusive(true);

        gridNotes->addWidget(note11_15, 26, 15, 1, 1);

        note10_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note10_0);
        note10_0->setObjectName(QStringLiteral("note10_0"));
        sizePolicy.setHeightForWidth(note10_0->sizePolicy().hasHeightForWidth());
        note10_0->setSizePolicy(sizePolicy);
        note10_0->setMinimumSize(QSize(38, 18));
        note10_0->setMaximumSize(QSize(38, 18));
        note10_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_0->setAutoExclusive(true);

        gridNotes->addWidget(note10_0, 27, 0, 1, 1);

        note10_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note10_1);
        note10_1->setObjectName(QStringLiteral("note10_1"));
        sizePolicy.setHeightForWidth(note10_1->sizePolicy().hasHeightForWidth());
        note10_1->setSizePolicy(sizePolicy);
        note10_1->setMinimumSize(QSize(38, 18));
        note10_1->setMaximumSize(QSize(38, 18));
        note10_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_1->setAutoExclusive(true);

        gridNotes->addWidget(note10_1, 27, 1, 1, 1);

        note10_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note10_2);
        note10_2->setObjectName(QStringLiteral("note10_2"));
        sizePolicy.setHeightForWidth(note10_2->sizePolicy().hasHeightForWidth());
        note10_2->setSizePolicy(sizePolicy);
        note10_2->setMinimumSize(QSize(38, 18));
        note10_2->setMaximumSize(QSize(38, 18));
        note10_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_2->setAutoExclusive(true);

        gridNotes->addWidget(note10_2, 27, 2, 1, 1);

        note10_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note10_3);
        note10_3->setObjectName(QStringLiteral("note10_3"));
        sizePolicy.setHeightForWidth(note10_3->sizePolicy().hasHeightForWidth());
        note10_3->setSizePolicy(sizePolicy);
        note10_3->setMinimumSize(QSize(38, 18));
        note10_3->setMaximumSize(QSize(38, 18));
        note10_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_3->setAutoExclusive(true);

        gridNotes->addWidget(note10_3, 27, 3, 1, 1);

        note10_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note10_4);
        note10_4->setObjectName(QStringLiteral("note10_4"));
        sizePolicy.setHeightForWidth(note10_4->sizePolicy().hasHeightForWidth());
        note10_4->setSizePolicy(sizePolicy);
        note10_4->setMinimumSize(QSize(38, 18));
        note10_4->setMaximumSize(QSize(38, 18));
        note10_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_4->setAutoExclusive(true);

        gridNotes->addWidget(note10_4, 27, 4, 1, 1);

        note10_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note10_5);
        note10_5->setObjectName(QStringLiteral("note10_5"));
        sizePolicy.setHeightForWidth(note10_5->sizePolicy().hasHeightForWidth());
        note10_5->setSizePolicy(sizePolicy);
        note10_5->setMinimumSize(QSize(38, 18));
        note10_5->setMaximumSize(QSize(38, 18));
        note10_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_5->setAutoExclusive(true);

        gridNotes->addWidget(note10_5, 27, 5, 1, 1);

        note10_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note10_6);
        note10_6->setObjectName(QStringLiteral("note10_6"));
        sizePolicy.setHeightForWidth(note10_6->sizePolicy().hasHeightForWidth());
        note10_6->setSizePolicy(sizePolicy);
        note10_6->setMinimumSize(QSize(38, 18));
        note10_6->setMaximumSize(QSize(38, 18));
        note10_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_6->setAutoExclusive(true);

        gridNotes->addWidget(note10_6, 27, 6, 1, 1);

        note10_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note10_7);
        note10_7->setObjectName(QStringLiteral("note10_7"));
        sizePolicy.setHeightForWidth(note10_7->sizePolicy().hasHeightForWidth());
        note10_7->setSizePolicy(sizePolicy);
        note10_7->setMinimumSize(QSize(38, 18));
        note10_7->setMaximumSize(QSize(38, 18));
        note10_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_7->setAutoExclusive(true);

        gridNotes->addWidget(note10_7, 27, 7, 1, 1);

        note10_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note10_8);
        note10_8->setObjectName(QStringLiteral("note10_8"));
        sizePolicy.setHeightForWidth(note10_8->sizePolicy().hasHeightForWidth());
        note10_8->setSizePolicy(sizePolicy);
        note10_8->setMinimumSize(QSize(38, 18));
        note10_8->setMaximumSize(QSize(38, 18));
        note10_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_8->setAutoExclusive(true);

        gridNotes->addWidget(note10_8, 27, 8, 1, 1);

        note10_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note10_9);
        note10_9->setObjectName(QStringLiteral("note10_9"));
        sizePolicy.setHeightForWidth(note10_9->sizePolicy().hasHeightForWidth());
        note10_9->setSizePolicy(sizePolicy);
        note10_9->setMinimumSize(QSize(38, 18));
        note10_9->setMaximumSize(QSize(38, 18));
        note10_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_9->setAutoExclusive(true);

        gridNotes->addWidget(note10_9, 27, 9, 1, 1);

        note10_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note10_10);
        note10_10->setObjectName(QStringLiteral("note10_10"));
        sizePolicy.setHeightForWidth(note10_10->sizePolicy().hasHeightForWidth());
        note10_10->setSizePolicy(sizePolicy);
        note10_10->setMinimumSize(QSize(38, 18));
        note10_10->setMaximumSize(QSize(38, 18));
        note10_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_10->setAutoExclusive(true);

        gridNotes->addWidget(note10_10, 27, 10, 1, 1);

        note10_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note10_11);
        note10_11->setObjectName(QStringLiteral("note10_11"));
        sizePolicy.setHeightForWidth(note10_11->sizePolicy().hasHeightForWidth());
        note10_11->setSizePolicy(sizePolicy);
        note10_11->setMinimumSize(QSize(38, 18));
        note10_11->setMaximumSize(QSize(38, 18));
        note10_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_11->setAutoExclusive(true);

        gridNotes->addWidget(note10_11, 27, 11, 1, 1);

        note10_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note10_12);
        note10_12->setObjectName(QStringLiteral("note10_12"));
        sizePolicy.setHeightForWidth(note10_12->sizePolicy().hasHeightForWidth());
        note10_12->setSizePolicy(sizePolicy);
        note10_12->setMinimumSize(QSize(38, 18));
        note10_12->setMaximumSize(QSize(38, 18));
        note10_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_12->setAutoExclusive(true);

        gridNotes->addWidget(note10_12, 27, 12, 1, 1);

        note10_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note10_13);
        note10_13->setObjectName(QStringLiteral("note10_13"));
        sizePolicy.setHeightForWidth(note10_13->sizePolicy().hasHeightForWidth());
        note10_13->setSizePolicy(sizePolicy);
        note10_13->setMinimumSize(QSize(38, 18));
        note10_13->setMaximumSize(QSize(38, 18));
        note10_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_13->setAutoExclusive(true);

        gridNotes->addWidget(note10_13, 27, 13, 1, 1);

        note10_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note10_14);
        note10_14->setObjectName(QStringLiteral("note10_14"));
        sizePolicy.setHeightForWidth(note10_14->sizePolicy().hasHeightForWidth());
        note10_14->setSizePolicy(sizePolicy);
        note10_14->setMinimumSize(QSize(38, 18));
        note10_14->setMaximumSize(QSize(38, 18));
        note10_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_14->setAutoExclusive(true);

        gridNotes->addWidget(note10_14, 27, 14, 1, 1);

        note10_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note10_15);
        note10_15->setObjectName(QStringLiteral("note10_15"));
        sizePolicy.setHeightForWidth(note10_15->sizePolicy().hasHeightForWidth());
        note10_15->setSizePolicy(sizePolicy);
        note10_15->setMinimumSize(QSize(38, 18));
        note10_15->setMaximumSize(QSize(38, 18));
        note10_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note10_15->setAutoExclusive(true);

        gridNotes->addWidget(note10_15, 27, 15, 1, 1);

        note9_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note9_0);
        note9_0->setObjectName(QStringLiteral("note9_0"));
        sizePolicy.setHeightForWidth(note9_0->sizePolicy().hasHeightForWidth());
        note9_0->setSizePolicy(sizePolicy);
        note9_0->setMinimumSize(QSize(38, 18));
        note9_0->setMaximumSize(QSize(38, 18));
        note9_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_0->setAutoExclusive(true);

        gridNotes->addWidget(note9_0, 28, 0, 1, 1);

        note9_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note9_1);
        note9_1->setObjectName(QStringLiteral("note9_1"));
        sizePolicy.setHeightForWidth(note9_1->sizePolicy().hasHeightForWidth());
        note9_1->setSizePolicy(sizePolicy);
        note9_1->setMinimumSize(QSize(38, 18));
        note9_1->setMaximumSize(QSize(38, 18));
        note9_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_1->setAutoExclusive(true);

        gridNotes->addWidget(note9_1, 28, 1, 1, 1);

        note9_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note9_2);
        note9_2->setObjectName(QStringLiteral("note9_2"));
        sizePolicy.setHeightForWidth(note9_2->sizePolicy().hasHeightForWidth());
        note9_2->setSizePolicy(sizePolicy);
        note9_2->setMinimumSize(QSize(38, 18));
        note9_2->setMaximumSize(QSize(38, 18));
        note9_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_2->setAutoExclusive(true);

        gridNotes->addWidget(note9_2, 28, 2, 1, 1);

        note9_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note9_3);
        note9_3->setObjectName(QStringLiteral("note9_3"));
        sizePolicy.setHeightForWidth(note9_3->sizePolicy().hasHeightForWidth());
        note9_3->setSizePolicy(sizePolicy);
        note9_3->setMinimumSize(QSize(38, 18));
        note9_3->setMaximumSize(QSize(38, 18));
        note9_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_3->setAutoExclusive(true);

        gridNotes->addWidget(note9_3, 28, 3, 1, 1);

        note9_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note9_4);
        note9_4->setObjectName(QStringLiteral("note9_4"));
        sizePolicy.setHeightForWidth(note9_4->sizePolicy().hasHeightForWidth());
        note9_4->setSizePolicy(sizePolicy);
        note9_4->setMinimumSize(QSize(38, 18));
        note9_4->setMaximumSize(QSize(38, 18));
        note9_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_4->setAutoExclusive(true);

        gridNotes->addWidget(note9_4, 28, 4, 1, 1);

        note9_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note9_5);
        note9_5->setObjectName(QStringLiteral("note9_5"));
        sizePolicy.setHeightForWidth(note9_5->sizePolicy().hasHeightForWidth());
        note9_5->setSizePolicy(sizePolicy);
        note9_5->setMinimumSize(QSize(38, 18));
        note9_5->setMaximumSize(QSize(38, 18));
        note9_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_5->setAutoExclusive(true);

        gridNotes->addWidget(note9_5, 28, 5, 1, 1);

        note9_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note9_6);
        note9_6->setObjectName(QStringLiteral("note9_6"));
        sizePolicy.setHeightForWidth(note9_6->sizePolicy().hasHeightForWidth());
        note9_6->setSizePolicy(sizePolicy);
        note9_6->setMinimumSize(QSize(38, 18));
        note9_6->setMaximumSize(QSize(38, 18));
        note9_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_6->setAutoExclusive(true);

        gridNotes->addWidget(note9_6, 28, 6, 1, 1);

        note9_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note9_7);
        note9_7->setObjectName(QStringLiteral("note9_7"));
        sizePolicy.setHeightForWidth(note9_7->sizePolicy().hasHeightForWidth());
        note9_7->setSizePolicy(sizePolicy);
        note9_7->setMinimumSize(QSize(38, 18));
        note9_7->setMaximumSize(QSize(38, 18));
        note9_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_7->setAutoExclusive(true);

        gridNotes->addWidget(note9_7, 28, 7, 1, 1);

        note9_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note9_8);
        note9_8->setObjectName(QStringLiteral("note9_8"));
        sizePolicy.setHeightForWidth(note9_8->sizePolicy().hasHeightForWidth());
        note9_8->setSizePolicy(sizePolicy);
        note9_8->setMinimumSize(QSize(38, 18));
        note9_8->setMaximumSize(QSize(38, 18));
        note9_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_8->setAutoExclusive(true);

        gridNotes->addWidget(note9_8, 28, 8, 1, 1);

        note9_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note9_9);
        note9_9->setObjectName(QStringLiteral("note9_9"));
        sizePolicy.setHeightForWidth(note9_9->sizePolicy().hasHeightForWidth());
        note9_9->setSizePolicy(sizePolicy);
        note9_9->setMinimumSize(QSize(38, 18));
        note9_9->setMaximumSize(QSize(38, 18));
        note9_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_9->setAutoExclusive(true);

        gridNotes->addWidget(note9_9, 28, 9, 1, 1);

        note9_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note9_10);
        note9_10->setObjectName(QStringLiteral("note9_10"));
        sizePolicy.setHeightForWidth(note9_10->sizePolicy().hasHeightForWidth());
        note9_10->setSizePolicy(sizePolicy);
        note9_10->setMinimumSize(QSize(38, 18));
        note9_10->setMaximumSize(QSize(38, 18));
        note9_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_10->setAutoExclusive(true);

        gridNotes->addWidget(note9_10, 28, 10, 1, 1);

        note9_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note9_11);
        note9_11->setObjectName(QStringLiteral("note9_11"));
        sizePolicy.setHeightForWidth(note9_11->sizePolicy().hasHeightForWidth());
        note9_11->setSizePolicy(sizePolicy);
        note9_11->setMinimumSize(QSize(38, 18));
        note9_11->setMaximumSize(QSize(38, 18));
        note9_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_11->setAutoExclusive(true);

        gridNotes->addWidget(note9_11, 28, 11, 1, 1);

        note9_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note9_12);
        note9_12->setObjectName(QStringLiteral("note9_12"));
        sizePolicy.setHeightForWidth(note9_12->sizePolicy().hasHeightForWidth());
        note9_12->setSizePolicy(sizePolicy);
        note9_12->setMinimumSize(QSize(38, 18));
        note9_12->setMaximumSize(QSize(38, 18));
        note9_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_12->setAutoExclusive(true);

        gridNotes->addWidget(note9_12, 28, 12, 1, 1);

        note9_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note9_13);
        note9_13->setObjectName(QStringLiteral("note9_13"));
        sizePolicy.setHeightForWidth(note9_13->sizePolicy().hasHeightForWidth());
        note9_13->setSizePolicy(sizePolicy);
        note9_13->setMinimumSize(QSize(38, 18));
        note9_13->setMaximumSize(QSize(38, 18));
        note9_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_13->setAutoExclusive(true);

        gridNotes->addWidget(note9_13, 28, 13, 1, 1);

        note9_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note9_14);
        note9_14->setObjectName(QStringLiteral("note9_14"));
        sizePolicy.setHeightForWidth(note9_14->sizePolicy().hasHeightForWidth());
        note9_14->setSizePolicy(sizePolicy);
        note9_14->setMinimumSize(QSize(38, 18));
        note9_14->setMaximumSize(QSize(38, 18));
        note9_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_14->setAutoExclusive(true);

        gridNotes->addWidget(note9_14, 28, 14, 1, 1);

        note9_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note9_15);
        note9_15->setObjectName(QStringLiteral("note9_15"));
        sizePolicy.setHeightForWidth(note9_15->sizePolicy().hasHeightForWidth());
        note9_15->setSizePolicy(sizePolicy);
        note9_15->setMinimumSize(QSize(38, 18));
        note9_15->setMaximumSize(QSize(38, 18));
        note9_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:disabled	{\n"
"	image: url(:/progect_resources/textures/button_disabled.png);\n"
"}"));
        note9_15->setAutoExclusive(true);

        gridNotes->addWidget(note9_15, 28, 15, 1, 1);

        note8_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note8_0);
        note8_0->setObjectName(QStringLiteral("note8_0"));
        sizePolicy.setHeightForWidth(note8_0->sizePolicy().hasHeightForWidth());
        note8_0->setSizePolicy(sizePolicy);
        note8_0->setMinimumSize(QSize(38, 18));
        note8_0->setMaximumSize(QSize(38, 18));
        note8_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_0->setAutoExclusive(true);

        gridNotes->addWidget(note8_0, 29, 0, 1, 1);

        note8_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note8_1);
        note8_1->setObjectName(QStringLiteral("note8_1"));
        sizePolicy.setHeightForWidth(note8_1->sizePolicy().hasHeightForWidth());
        note8_1->setSizePolicy(sizePolicy);
        note8_1->setMinimumSize(QSize(38, 18));
        note8_1->setMaximumSize(QSize(38, 18));
        note8_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_1->setAutoExclusive(true);

        gridNotes->addWidget(note8_1, 29, 1, 1, 1);

        note8_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note8_2);
        note8_2->setObjectName(QStringLiteral("note8_2"));
        sizePolicy.setHeightForWidth(note8_2->sizePolicy().hasHeightForWidth());
        note8_2->setSizePolicy(sizePolicy);
        note8_2->setMinimumSize(QSize(38, 18));
        note8_2->setMaximumSize(QSize(38, 18));
        note8_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_2->setAutoExclusive(true);

        gridNotes->addWidget(note8_2, 29, 2, 1, 1);

        note8_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note8_3);
        note8_3->setObjectName(QStringLiteral("note8_3"));
        sizePolicy.setHeightForWidth(note8_3->sizePolicy().hasHeightForWidth());
        note8_3->setSizePolicy(sizePolicy);
        note8_3->setMinimumSize(QSize(38, 18));
        note8_3->setMaximumSize(QSize(38, 18));
        note8_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_3->setAutoExclusive(true);

        gridNotes->addWidget(note8_3, 29, 3, 1, 1);

        note8_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note8_4);
        note8_4->setObjectName(QStringLiteral("note8_4"));
        sizePolicy.setHeightForWidth(note8_4->sizePolicy().hasHeightForWidth());
        note8_4->setSizePolicy(sizePolicy);
        note8_4->setMinimumSize(QSize(38, 18));
        note8_4->setMaximumSize(QSize(38, 18));
        note8_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_4->setAutoExclusive(true);

        gridNotes->addWidget(note8_4, 29, 4, 1, 1);

        note8_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note8_5);
        note8_5->setObjectName(QStringLiteral("note8_5"));
        sizePolicy.setHeightForWidth(note8_5->sizePolicy().hasHeightForWidth());
        note8_5->setSizePolicy(sizePolicy);
        note8_5->setMinimumSize(QSize(38, 18));
        note8_5->setMaximumSize(QSize(38, 18));
        note8_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_5->setAutoExclusive(true);

        gridNotes->addWidget(note8_5, 29, 5, 1, 1);

        note8_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note8_6);
        note8_6->setObjectName(QStringLiteral("note8_6"));
        sizePolicy.setHeightForWidth(note8_6->sizePolicy().hasHeightForWidth());
        note8_6->setSizePolicy(sizePolicy);
        note8_6->setMinimumSize(QSize(38, 18));
        note8_6->setMaximumSize(QSize(38, 18));
        note8_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_6->setAutoExclusive(true);

        gridNotes->addWidget(note8_6, 29, 6, 1, 1);

        note8_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note8_7);
        note8_7->setObjectName(QStringLiteral("note8_7"));
        sizePolicy.setHeightForWidth(note8_7->sizePolicy().hasHeightForWidth());
        note8_7->setSizePolicy(sizePolicy);
        note8_7->setMinimumSize(QSize(38, 18));
        note8_7->setMaximumSize(QSize(38, 18));
        note8_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_7->setAutoExclusive(true);

        gridNotes->addWidget(note8_7, 29, 7, 1, 1);

        note8_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note8_8);
        note8_8->setObjectName(QStringLiteral("note8_8"));
        sizePolicy.setHeightForWidth(note8_8->sizePolicy().hasHeightForWidth());
        note8_8->setSizePolicy(sizePolicy);
        note8_8->setMinimumSize(QSize(38, 18));
        note8_8->setMaximumSize(QSize(38, 18));
        note8_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_8->setAutoExclusive(true);

        gridNotes->addWidget(note8_8, 29, 8, 1, 1);

        note8_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note8_9);
        note8_9->setObjectName(QStringLiteral("note8_9"));
        sizePolicy.setHeightForWidth(note8_9->sizePolicy().hasHeightForWidth());
        note8_9->setSizePolicy(sizePolicy);
        note8_9->setMinimumSize(QSize(38, 18));
        note8_9->setMaximumSize(QSize(38, 18));
        note8_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_9->setAutoExclusive(true);

        gridNotes->addWidget(note8_9, 29, 9, 1, 1);

        note8_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note8_10);
        note8_10->setObjectName(QStringLiteral("note8_10"));
        sizePolicy.setHeightForWidth(note8_10->sizePolicy().hasHeightForWidth());
        note8_10->setSizePolicy(sizePolicy);
        note8_10->setMinimumSize(QSize(38, 18));
        note8_10->setMaximumSize(QSize(38, 18));
        note8_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_10->setAutoExclusive(true);

        gridNotes->addWidget(note8_10, 29, 10, 1, 1);

        note8_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note8_11);
        note8_11->setObjectName(QStringLiteral("note8_11"));
        sizePolicy.setHeightForWidth(note8_11->sizePolicy().hasHeightForWidth());
        note8_11->setSizePolicy(sizePolicy);
        note8_11->setMinimumSize(QSize(38, 18));
        note8_11->setMaximumSize(QSize(38, 18));
        note8_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_11->setAutoExclusive(true);

        gridNotes->addWidget(note8_11, 29, 11, 1, 1);

        note8_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note8_12);
        note8_12->setObjectName(QStringLiteral("note8_12"));
        sizePolicy.setHeightForWidth(note8_12->sizePolicy().hasHeightForWidth());
        note8_12->setSizePolicy(sizePolicy);
        note8_12->setMinimumSize(QSize(38, 18));
        note8_12->setMaximumSize(QSize(38, 18));
        note8_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_12->setAutoExclusive(true);

        gridNotes->addWidget(note8_12, 29, 12, 1, 1);

        note8_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note8_13);
        note8_13->setObjectName(QStringLiteral("note8_13"));
        sizePolicy.setHeightForWidth(note8_13->sizePolicy().hasHeightForWidth());
        note8_13->setSizePolicy(sizePolicy);
        note8_13->setMinimumSize(QSize(38, 18));
        note8_13->setMaximumSize(QSize(38, 18));
        note8_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_13->setAutoExclusive(true);

        gridNotes->addWidget(note8_13, 29, 13, 1, 1);

        note8_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note8_14);
        note8_14->setObjectName(QStringLiteral("note8_14"));
        sizePolicy.setHeightForWidth(note8_14->sizePolicy().hasHeightForWidth());
        note8_14->setSizePolicy(sizePolicy);
        note8_14->setMinimumSize(QSize(38, 18));
        note8_14->setMaximumSize(QSize(38, 18));
        note8_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_14->setAutoExclusive(true);

        gridNotes->addWidget(note8_14, 29, 14, 1, 1);

        note8_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note8_15);
        note8_15->setObjectName(QStringLiteral("note8_15"));
        sizePolicy.setHeightForWidth(note8_15->sizePolicy().hasHeightForWidth());
        note8_15->setSizePolicy(sizePolicy);
        note8_15->setMinimumSize(QSize(38, 18));
        note8_15->setMaximumSize(QSize(38, 18));
        note8_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note8_15->setAutoExclusive(true);

        gridNotes->addWidget(note8_15, 29, 15, 1, 1);

        note7_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note7_0);
        note7_0->setObjectName(QStringLiteral("note7_0"));
        sizePolicy.setHeightForWidth(note7_0->sizePolicy().hasHeightForWidth());
        note7_0->setSizePolicy(sizePolicy);
        note7_0->setMinimumSize(QSize(38, 18));
        note7_0->setMaximumSize(QSize(38, 18));
        note7_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_0->setAutoExclusive(true);

        gridNotes->addWidget(note7_0, 30, 0, 1, 1);

        note7_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note7_1);
        note7_1->setObjectName(QStringLiteral("note7_1"));
        sizePolicy.setHeightForWidth(note7_1->sizePolicy().hasHeightForWidth());
        note7_1->setSizePolicy(sizePolicy);
        note7_1->setMinimumSize(QSize(38, 18));
        note7_1->setMaximumSize(QSize(38, 18));
        note7_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_1->setAutoExclusive(true);

        gridNotes->addWidget(note7_1, 30, 1, 1, 1);

        note7_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note7_2);
        note7_2->setObjectName(QStringLiteral("note7_2"));
        sizePolicy.setHeightForWidth(note7_2->sizePolicy().hasHeightForWidth());
        note7_2->setSizePolicy(sizePolicy);
        note7_2->setMinimumSize(QSize(38, 18));
        note7_2->setMaximumSize(QSize(38, 18));
        note7_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_2->setAutoExclusive(true);

        gridNotes->addWidget(note7_2, 30, 2, 1, 1);

        note7_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note7_3);
        note7_3->setObjectName(QStringLiteral("note7_3"));
        sizePolicy.setHeightForWidth(note7_3->sizePolicy().hasHeightForWidth());
        note7_3->setSizePolicy(sizePolicy);
        note7_3->setMinimumSize(QSize(38, 18));
        note7_3->setMaximumSize(QSize(38, 18));
        note7_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_3->setAutoExclusive(true);

        gridNotes->addWidget(note7_3, 30, 3, 1, 1);

        note7_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note7_4);
        note7_4->setObjectName(QStringLiteral("note7_4"));
        sizePolicy.setHeightForWidth(note7_4->sizePolicy().hasHeightForWidth());
        note7_4->setSizePolicy(sizePolicy);
        note7_4->setMinimumSize(QSize(38, 18));
        note7_4->setMaximumSize(QSize(38, 18));
        note7_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_4->setAutoExclusive(true);

        gridNotes->addWidget(note7_4, 30, 4, 1, 1);

        note7_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note7_5);
        note7_5->setObjectName(QStringLiteral("note7_5"));
        sizePolicy.setHeightForWidth(note7_5->sizePolicy().hasHeightForWidth());
        note7_5->setSizePolicy(sizePolicy);
        note7_5->setMinimumSize(QSize(38, 18));
        note7_5->setMaximumSize(QSize(38, 18));
        note7_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_5->setAutoExclusive(true);

        gridNotes->addWidget(note7_5, 30, 5, 1, 1);

        note7_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note7_6);
        note7_6->setObjectName(QStringLiteral("note7_6"));
        sizePolicy.setHeightForWidth(note7_6->sizePolicy().hasHeightForWidth());
        note7_6->setSizePolicy(sizePolicy);
        note7_6->setMinimumSize(QSize(38, 18));
        note7_6->setMaximumSize(QSize(38, 18));
        note7_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_6->setAutoExclusive(true);

        gridNotes->addWidget(note7_6, 30, 6, 1, 1);

        note7_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note7_7);
        note7_7->setObjectName(QStringLiteral("note7_7"));
        sizePolicy.setHeightForWidth(note7_7->sizePolicy().hasHeightForWidth());
        note7_7->setSizePolicy(sizePolicy);
        note7_7->setMinimumSize(QSize(38, 18));
        note7_7->setMaximumSize(QSize(38, 18));
        note7_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_7->setAutoExclusive(true);

        gridNotes->addWidget(note7_7, 30, 7, 1, 1);

        note7_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note7_8);
        note7_8->setObjectName(QStringLiteral("note7_8"));
        sizePolicy.setHeightForWidth(note7_8->sizePolicy().hasHeightForWidth());
        note7_8->setSizePolicy(sizePolicy);
        note7_8->setMinimumSize(QSize(38, 18));
        note7_8->setMaximumSize(QSize(38, 18));
        note7_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_8->setAutoExclusive(true);

        gridNotes->addWidget(note7_8, 30, 8, 1, 1);

        note7_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note7_9);
        note7_9->setObjectName(QStringLiteral("note7_9"));
        sizePolicy.setHeightForWidth(note7_9->sizePolicy().hasHeightForWidth());
        note7_9->setSizePolicy(sizePolicy);
        note7_9->setMinimumSize(QSize(38, 18));
        note7_9->setMaximumSize(QSize(38, 18));
        note7_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_9->setAutoExclusive(true);

        gridNotes->addWidget(note7_9, 30, 9, 1, 1);

        note7_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note7_10);
        note7_10->setObjectName(QStringLiteral("note7_10"));
        sizePolicy.setHeightForWidth(note7_10->sizePolicy().hasHeightForWidth());
        note7_10->setSizePolicy(sizePolicy);
        note7_10->setMinimumSize(QSize(38, 18));
        note7_10->setMaximumSize(QSize(38, 18));
        note7_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_10->setAutoExclusive(true);

        gridNotes->addWidget(note7_10, 30, 10, 1, 1);

        note7_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note7_11);
        note7_11->setObjectName(QStringLiteral("note7_11"));
        sizePolicy.setHeightForWidth(note7_11->sizePolicy().hasHeightForWidth());
        note7_11->setSizePolicy(sizePolicy);
        note7_11->setMinimumSize(QSize(38, 18));
        note7_11->setMaximumSize(QSize(38, 18));
        note7_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_11->setAutoExclusive(true);

        gridNotes->addWidget(note7_11, 30, 11, 1, 1);

        note7_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note7_12);
        note7_12->setObjectName(QStringLiteral("note7_12"));
        sizePolicy.setHeightForWidth(note7_12->sizePolicy().hasHeightForWidth());
        note7_12->setSizePolicy(sizePolicy);
        note7_12->setMinimumSize(QSize(38, 18));
        note7_12->setMaximumSize(QSize(38, 18));
        note7_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_12->setAutoExclusive(true);

        gridNotes->addWidget(note7_12, 30, 12, 1, 1);

        note7_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note7_13);
        note7_13->setObjectName(QStringLiteral("note7_13"));
        sizePolicy.setHeightForWidth(note7_13->sizePolicy().hasHeightForWidth());
        note7_13->setSizePolicy(sizePolicy);
        note7_13->setMinimumSize(QSize(38, 18));
        note7_13->setMaximumSize(QSize(38, 18));
        note7_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_13->setAutoExclusive(true);

        gridNotes->addWidget(note7_13, 30, 13, 1, 1);

        note7_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note7_14);
        note7_14->setObjectName(QStringLiteral("note7_14"));
        sizePolicy.setHeightForWidth(note7_14->sizePolicy().hasHeightForWidth());
        note7_14->setSizePolicy(sizePolicy);
        note7_14->setMinimumSize(QSize(38, 18));
        note7_14->setMaximumSize(QSize(38, 18));
        note7_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_14->setAutoExclusive(true);

        gridNotes->addWidget(note7_14, 30, 14, 1, 1);

        note7_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note7_15);
        note7_15->setObjectName(QStringLiteral("note7_15"));
        sizePolicy.setHeightForWidth(note7_15->sizePolicy().hasHeightForWidth());
        note7_15->setSizePolicy(sizePolicy);
        note7_15->setMinimumSize(QSize(38, 18));
        note7_15->setMaximumSize(QSize(38, 18));
        note7_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note7_15->setAutoExclusive(true);

        gridNotes->addWidget(note7_15, 30, 15, 1, 1);

        note6_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note6_0);
        note6_0->setObjectName(QStringLiteral("note6_0"));
        sizePolicy.setHeightForWidth(note6_0->sizePolicy().hasHeightForWidth());
        note6_0->setSizePolicy(sizePolicy);
        note6_0->setMinimumSize(QSize(38, 18));
        note6_0->setMaximumSize(QSize(38, 18));
        note6_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_0->setAutoExclusive(true);

        gridNotes->addWidget(note6_0, 31, 0, 1, 1);

        note6_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note6_1);
        note6_1->setObjectName(QStringLiteral("note6_1"));
        sizePolicy.setHeightForWidth(note6_1->sizePolicy().hasHeightForWidth());
        note6_1->setSizePolicy(sizePolicy);
        note6_1->setMinimumSize(QSize(38, 18));
        note6_1->setMaximumSize(QSize(38, 18));
        note6_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_1->setAutoExclusive(true);

        gridNotes->addWidget(note6_1, 31, 1, 1, 1);

        note6_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note6_2);
        note6_2->setObjectName(QStringLiteral("note6_2"));
        sizePolicy.setHeightForWidth(note6_2->sizePolicy().hasHeightForWidth());
        note6_2->setSizePolicy(sizePolicy);
        note6_2->setMinimumSize(QSize(38, 18));
        note6_2->setMaximumSize(QSize(38, 18));
        note6_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_2->setAutoExclusive(true);

        gridNotes->addWidget(note6_2, 31, 2, 1, 1);

        note6_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note6_3);
        note6_3->setObjectName(QStringLiteral("note6_3"));
        sizePolicy.setHeightForWidth(note6_3->sizePolicy().hasHeightForWidth());
        note6_3->setSizePolicy(sizePolicy);
        note6_3->setMinimumSize(QSize(38, 18));
        note6_3->setMaximumSize(QSize(38, 18));
        note6_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_3->setAutoExclusive(true);

        gridNotes->addWidget(note6_3, 31, 3, 1, 1);

        note6_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note6_4);
        note6_4->setObjectName(QStringLiteral("note6_4"));
        sizePolicy.setHeightForWidth(note6_4->sizePolicy().hasHeightForWidth());
        note6_4->setSizePolicy(sizePolicy);
        note6_4->setMinimumSize(QSize(38, 18));
        note6_4->setMaximumSize(QSize(38, 18));
        note6_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_4->setAutoExclusive(true);

        gridNotes->addWidget(note6_4, 31, 4, 1, 1);

        note6_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note6_5);
        note6_5->setObjectName(QStringLiteral("note6_5"));
        sizePolicy.setHeightForWidth(note6_5->sizePolicy().hasHeightForWidth());
        note6_5->setSizePolicy(sizePolicy);
        note6_5->setMinimumSize(QSize(38, 18));
        note6_5->setMaximumSize(QSize(38, 18));
        note6_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_5->setAutoExclusive(true);

        gridNotes->addWidget(note6_5, 31, 5, 1, 1);

        note6_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note6_6);
        note6_6->setObjectName(QStringLiteral("note6_6"));
        sizePolicy.setHeightForWidth(note6_6->sizePolicy().hasHeightForWidth());
        note6_6->setSizePolicy(sizePolicy);
        note6_6->setMinimumSize(QSize(38, 18));
        note6_6->setMaximumSize(QSize(38, 18));
        note6_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_6->setAutoExclusive(true);

        gridNotes->addWidget(note6_6, 31, 6, 1, 1);

        note6_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note6_7);
        note6_7->setObjectName(QStringLiteral("note6_7"));
        sizePolicy.setHeightForWidth(note6_7->sizePolicy().hasHeightForWidth());
        note6_7->setSizePolicy(sizePolicy);
        note6_7->setMinimumSize(QSize(38, 18));
        note6_7->setMaximumSize(QSize(38, 18));
        note6_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_7->setAutoExclusive(true);

        gridNotes->addWidget(note6_7, 31, 7, 1, 1);

        note6_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note6_8);
        note6_8->setObjectName(QStringLiteral("note6_8"));
        sizePolicy.setHeightForWidth(note6_8->sizePolicy().hasHeightForWidth());
        note6_8->setSizePolicy(sizePolicy);
        note6_8->setMinimumSize(QSize(38, 18));
        note6_8->setMaximumSize(QSize(38, 18));
        note6_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_8->setAutoExclusive(true);

        gridNotes->addWidget(note6_8, 31, 8, 1, 1);

        note6_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note6_9);
        note6_9->setObjectName(QStringLiteral("note6_9"));
        sizePolicy.setHeightForWidth(note6_9->sizePolicy().hasHeightForWidth());
        note6_9->setSizePolicy(sizePolicy);
        note6_9->setMinimumSize(QSize(38, 18));
        note6_9->setMaximumSize(QSize(38, 18));
        note6_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_9->setAutoExclusive(true);

        gridNotes->addWidget(note6_9, 31, 9, 1, 1);

        note6_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note6_10);
        note6_10->setObjectName(QStringLiteral("note6_10"));
        sizePolicy.setHeightForWidth(note6_10->sizePolicy().hasHeightForWidth());
        note6_10->setSizePolicy(sizePolicy);
        note6_10->setMinimumSize(QSize(38, 18));
        note6_10->setMaximumSize(QSize(38, 18));
        note6_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_10->setAutoExclusive(true);

        gridNotes->addWidget(note6_10, 31, 10, 1, 1);

        note6_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note6_11);
        note6_11->setObjectName(QStringLiteral("note6_11"));
        sizePolicy.setHeightForWidth(note6_11->sizePolicy().hasHeightForWidth());
        note6_11->setSizePolicy(sizePolicy);
        note6_11->setMinimumSize(QSize(38, 18));
        note6_11->setMaximumSize(QSize(38, 18));
        note6_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_11->setAutoExclusive(true);

        gridNotes->addWidget(note6_11, 31, 11, 1, 1);

        note6_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note6_12);
        note6_12->setObjectName(QStringLiteral("note6_12"));
        sizePolicy.setHeightForWidth(note6_12->sizePolicy().hasHeightForWidth());
        note6_12->setSizePolicy(sizePolicy);
        note6_12->setMinimumSize(QSize(38, 18));
        note6_12->setMaximumSize(QSize(38, 18));
        note6_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_12->setAutoExclusive(true);

        gridNotes->addWidget(note6_12, 31, 12, 1, 1);

        note6_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note6_13);
        note6_13->setObjectName(QStringLiteral("note6_13"));
        sizePolicy.setHeightForWidth(note6_13->sizePolicy().hasHeightForWidth());
        note6_13->setSizePolicy(sizePolicy);
        note6_13->setMinimumSize(QSize(38, 18));
        note6_13->setMaximumSize(QSize(38, 18));
        note6_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_13->setAutoExclusive(true);

        gridNotes->addWidget(note6_13, 31, 13, 1, 1);

        note6_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note6_14);
        note6_14->setObjectName(QStringLiteral("note6_14"));
        sizePolicy.setHeightForWidth(note6_14->sizePolicy().hasHeightForWidth());
        note6_14->setSizePolicy(sizePolicy);
        note6_14->setMinimumSize(QSize(38, 18));
        note6_14->setMaximumSize(QSize(38, 18));
        note6_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_14->setAutoExclusive(true);

        gridNotes->addWidget(note6_14, 31, 14, 1, 1);

        note6_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note6_15);
        note6_15->setObjectName(QStringLiteral("note6_15"));
        sizePolicy.setHeightForWidth(note6_15->sizePolicy().hasHeightForWidth());
        note6_15->setSizePolicy(sizePolicy);
        note6_15->setMinimumSize(QSize(38, 18));
        note6_15->setMaximumSize(QSize(38, 18));
        note6_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note6_15->setAutoExclusive(true);

        gridNotes->addWidget(note6_15, 31, 15, 1, 1);

        note5_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note5_0);
        note5_0->setObjectName(QStringLiteral("note5_0"));
        sizePolicy.setHeightForWidth(note5_0->sizePolicy().hasHeightForWidth());
        note5_0->setSizePolicy(sizePolicy);
        note5_0->setMinimumSize(QSize(38, 18));
        note5_0->setMaximumSize(QSize(38, 18));
        note5_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_0->setAutoExclusive(true);

        gridNotes->addWidget(note5_0, 32, 0, 1, 1);

        note5_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note5_1);
        note5_1->setObjectName(QStringLiteral("note5_1"));
        sizePolicy.setHeightForWidth(note5_1->sizePolicy().hasHeightForWidth());
        note5_1->setSizePolicy(sizePolicy);
        note5_1->setMinimumSize(QSize(38, 18));
        note5_1->setMaximumSize(QSize(38, 18));
        note5_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_1->setAutoExclusive(true);

        gridNotes->addWidget(note5_1, 32, 1, 1, 1);

        note5_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note5_2);
        note5_2->setObjectName(QStringLiteral("note5_2"));
        sizePolicy.setHeightForWidth(note5_2->sizePolicy().hasHeightForWidth());
        note5_2->setSizePolicy(sizePolicy);
        note5_2->setMinimumSize(QSize(38, 18));
        note5_2->setMaximumSize(QSize(38, 18));
        note5_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_2->setAutoExclusive(true);

        gridNotes->addWidget(note5_2, 32, 2, 1, 1);

        note5_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note5_3);
        note5_3->setObjectName(QStringLiteral("note5_3"));
        sizePolicy.setHeightForWidth(note5_3->sizePolicy().hasHeightForWidth());
        note5_3->setSizePolicy(sizePolicy);
        note5_3->setMinimumSize(QSize(38, 18));
        note5_3->setMaximumSize(QSize(38, 18));
        note5_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_3->setAutoExclusive(true);

        gridNotes->addWidget(note5_3, 32, 3, 1, 1);

        note5_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note5_4);
        note5_4->setObjectName(QStringLiteral("note5_4"));
        sizePolicy.setHeightForWidth(note5_4->sizePolicy().hasHeightForWidth());
        note5_4->setSizePolicy(sizePolicy);
        note5_4->setMinimumSize(QSize(38, 18));
        note5_4->setMaximumSize(QSize(38, 18));
        note5_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_4->setAutoExclusive(true);

        gridNotes->addWidget(note5_4, 32, 4, 1, 1);

        note5_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note5_5);
        note5_5->setObjectName(QStringLiteral("note5_5"));
        sizePolicy.setHeightForWidth(note5_5->sizePolicy().hasHeightForWidth());
        note5_5->setSizePolicy(sizePolicy);
        note5_5->setMinimumSize(QSize(38, 18));
        note5_5->setMaximumSize(QSize(38, 18));
        note5_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_5->setAutoExclusive(true);

        gridNotes->addWidget(note5_5, 32, 5, 1, 1);

        note5_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note5_6);
        note5_6->setObjectName(QStringLiteral("note5_6"));
        sizePolicy.setHeightForWidth(note5_6->sizePolicy().hasHeightForWidth());
        note5_6->setSizePolicy(sizePolicy);
        note5_6->setMinimumSize(QSize(38, 18));
        note5_6->setMaximumSize(QSize(38, 18));
        note5_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_6->setAutoExclusive(true);

        gridNotes->addWidget(note5_6, 32, 6, 1, 1);

        note5_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note5_7);
        note5_7->setObjectName(QStringLiteral("note5_7"));
        sizePolicy.setHeightForWidth(note5_7->sizePolicy().hasHeightForWidth());
        note5_7->setSizePolicy(sizePolicy);
        note5_7->setMinimumSize(QSize(38, 18));
        note5_7->setMaximumSize(QSize(38, 18));
        note5_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_7->setAutoExclusive(true);

        gridNotes->addWidget(note5_7, 32, 7, 1, 1);

        note5_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note5_8);
        note5_8->setObjectName(QStringLiteral("note5_8"));
        sizePolicy.setHeightForWidth(note5_8->sizePolicy().hasHeightForWidth());
        note5_8->setSizePolicy(sizePolicy);
        note5_8->setMinimumSize(QSize(38, 18));
        note5_8->setMaximumSize(QSize(38, 18));
        note5_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_8->setAutoExclusive(true);

        gridNotes->addWidget(note5_8, 32, 8, 1, 1);

        note5_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note5_9);
        note5_9->setObjectName(QStringLiteral("note5_9"));
        sizePolicy.setHeightForWidth(note5_9->sizePolicy().hasHeightForWidth());
        note5_9->setSizePolicy(sizePolicy);
        note5_9->setMinimumSize(QSize(38, 18));
        note5_9->setMaximumSize(QSize(38, 18));
        note5_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_9->setAutoExclusive(true);

        gridNotes->addWidget(note5_9, 32, 9, 1, 1);

        note5_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note5_10);
        note5_10->setObjectName(QStringLiteral("note5_10"));
        sizePolicy.setHeightForWidth(note5_10->sizePolicy().hasHeightForWidth());
        note5_10->setSizePolicy(sizePolicy);
        note5_10->setMinimumSize(QSize(38, 18));
        note5_10->setMaximumSize(QSize(38, 18));
        note5_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_10->setAutoExclusive(true);

        gridNotes->addWidget(note5_10, 32, 10, 1, 1);

        note5_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note5_11);
        note5_11->setObjectName(QStringLiteral("note5_11"));
        sizePolicy.setHeightForWidth(note5_11->sizePolicy().hasHeightForWidth());
        note5_11->setSizePolicy(sizePolicy);
        note5_11->setMinimumSize(QSize(38, 18));
        note5_11->setMaximumSize(QSize(38, 18));
        note5_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_11->setAutoExclusive(true);

        gridNotes->addWidget(note5_11, 32, 11, 1, 1);

        note5_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note5_12);
        note5_12->setObjectName(QStringLiteral("note5_12"));
        sizePolicy.setHeightForWidth(note5_12->sizePolicy().hasHeightForWidth());
        note5_12->setSizePolicy(sizePolicy);
        note5_12->setMinimumSize(QSize(38, 18));
        note5_12->setMaximumSize(QSize(38, 18));
        note5_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_12->setAutoExclusive(true);

        gridNotes->addWidget(note5_12, 32, 12, 1, 1);

        note5_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note5_13);
        note5_13->setObjectName(QStringLiteral("note5_13"));
        sizePolicy.setHeightForWidth(note5_13->sizePolicy().hasHeightForWidth());
        note5_13->setSizePolicy(sizePolicy);
        note5_13->setMinimumSize(QSize(38, 18));
        note5_13->setMaximumSize(QSize(38, 18));
        note5_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_13->setAutoExclusive(true);

        gridNotes->addWidget(note5_13, 32, 13, 1, 1);

        note5_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note5_14);
        note5_14->setObjectName(QStringLiteral("note5_14"));
        sizePolicy.setHeightForWidth(note5_14->sizePolicy().hasHeightForWidth());
        note5_14->setSizePolicy(sizePolicy);
        note5_14->setMinimumSize(QSize(38, 18));
        note5_14->setMaximumSize(QSize(38, 18));
        note5_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_14->setAutoExclusive(true);

        gridNotes->addWidget(note5_14, 32, 14, 1, 1);

        note5_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note5_15);
        note5_15->setObjectName(QStringLiteral("note5_15"));
        sizePolicy.setHeightForWidth(note5_15->sizePolicy().hasHeightForWidth());
        note5_15->setSizePolicy(sizePolicy);
        note5_15->setMinimumSize(QSize(38, 18));
        note5_15->setMaximumSize(QSize(38, 18));
        note5_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note5_15->setAutoExclusive(true);

        gridNotes->addWidget(note5_15, 32, 15, 1, 1);

        note4_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note4_0);
        note4_0->setObjectName(QStringLiteral("note4_0"));
        sizePolicy.setHeightForWidth(note4_0->sizePolicy().hasHeightForWidth());
        note4_0->setSizePolicy(sizePolicy);
        note4_0->setMinimumSize(QSize(38, 18));
        note4_0->setMaximumSize(QSize(38, 18));
        note4_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_0->setAutoExclusive(true);

        gridNotes->addWidget(note4_0, 33, 0, 1, 1);

        note4_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note4_1);
        note4_1->setObjectName(QStringLiteral("note4_1"));
        sizePolicy.setHeightForWidth(note4_1->sizePolicy().hasHeightForWidth());
        note4_1->setSizePolicy(sizePolicy);
        note4_1->setMinimumSize(QSize(38, 18));
        note4_1->setMaximumSize(QSize(38, 18));
        note4_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_1->setAutoExclusive(true);

        gridNotes->addWidget(note4_1, 33, 1, 1, 1);

        note4_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note4_2);
        note4_2->setObjectName(QStringLiteral("note4_2"));
        sizePolicy.setHeightForWidth(note4_2->sizePolicy().hasHeightForWidth());
        note4_2->setSizePolicy(sizePolicy);
        note4_2->setMinimumSize(QSize(38, 18));
        note4_2->setMaximumSize(QSize(38, 18));
        note4_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_2->setAutoExclusive(true);

        gridNotes->addWidget(note4_2, 33, 2, 1, 1);

        note4_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note4_3);
        note4_3->setObjectName(QStringLiteral("note4_3"));
        sizePolicy.setHeightForWidth(note4_3->sizePolicy().hasHeightForWidth());
        note4_3->setSizePolicy(sizePolicy);
        note4_3->setMinimumSize(QSize(38, 18));
        note4_3->setMaximumSize(QSize(38, 18));
        note4_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_3->setAutoExclusive(true);

        gridNotes->addWidget(note4_3, 33, 3, 1, 1);

        note4_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note4_4);
        note4_4->setObjectName(QStringLiteral("note4_4"));
        sizePolicy.setHeightForWidth(note4_4->sizePolicy().hasHeightForWidth());
        note4_4->setSizePolicy(sizePolicy);
        note4_4->setMinimumSize(QSize(38, 18));
        note4_4->setMaximumSize(QSize(38, 18));
        note4_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_4->setAutoExclusive(true);

        gridNotes->addWidget(note4_4, 33, 4, 1, 1);

        note4_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note4_5);
        note4_5->setObjectName(QStringLiteral("note4_5"));
        sizePolicy.setHeightForWidth(note4_5->sizePolicy().hasHeightForWidth());
        note4_5->setSizePolicy(sizePolicy);
        note4_5->setMinimumSize(QSize(38, 18));
        note4_5->setMaximumSize(QSize(38, 18));
        note4_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_5->setAutoExclusive(true);

        gridNotes->addWidget(note4_5, 33, 5, 1, 1);

        note4_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note4_6);
        note4_6->setObjectName(QStringLiteral("note4_6"));
        sizePolicy.setHeightForWidth(note4_6->sizePolicy().hasHeightForWidth());
        note4_6->setSizePolicy(sizePolicy);
        note4_6->setMinimumSize(QSize(38, 18));
        note4_6->setMaximumSize(QSize(38, 18));
        note4_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_6->setAutoExclusive(true);

        gridNotes->addWidget(note4_6, 33, 6, 1, 1);

        note4_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note4_7);
        note4_7->setObjectName(QStringLiteral("note4_7"));
        sizePolicy.setHeightForWidth(note4_7->sizePolicy().hasHeightForWidth());
        note4_7->setSizePolicy(sizePolicy);
        note4_7->setMinimumSize(QSize(38, 18));
        note4_7->setMaximumSize(QSize(38, 18));
        note4_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_7->setAutoExclusive(true);

        gridNotes->addWidget(note4_7, 33, 7, 1, 1);

        note4_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note4_8);
        note4_8->setObjectName(QStringLiteral("note4_8"));
        sizePolicy.setHeightForWidth(note4_8->sizePolicy().hasHeightForWidth());
        note4_8->setSizePolicy(sizePolicy);
        note4_8->setMinimumSize(QSize(38, 18));
        note4_8->setMaximumSize(QSize(38, 18));
        note4_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_8->setAutoExclusive(true);

        gridNotes->addWidget(note4_8, 33, 8, 1, 1);

        note4_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note4_9);
        note4_9->setObjectName(QStringLiteral("note4_9"));
        sizePolicy.setHeightForWidth(note4_9->sizePolicy().hasHeightForWidth());
        note4_9->setSizePolicy(sizePolicy);
        note4_9->setMinimumSize(QSize(38, 18));
        note4_9->setMaximumSize(QSize(38, 18));
        note4_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_9->setAutoExclusive(true);

        gridNotes->addWidget(note4_9, 33, 9, 1, 1);

        note4_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note4_10);
        note4_10->setObjectName(QStringLiteral("note4_10"));
        sizePolicy.setHeightForWidth(note4_10->sizePolicy().hasHeightForWidth());
        note4_10->setSizePolicy(sizePolicy);
        note4_10->setMinimumSize(QSize(38, 18));
        note4_10->setMaximumSize(QSize(38, 18));
        note4_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_10->setAutoExclusive(true);

        gridNotes->addWidget(note4_10, 33, 10, 1, 1);

        note4_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note4_11);
        note4_11->setObjectName(QStringLiteral("note4_11"));
        sizePolicy.setHeightForWidth(note4_11->sizePolicy().hasHeightForWidth());
        note4_11->setSizePolicy(sizePolicy);
        note4_11->setMinimumSize(QSize(38, 18));
        note4_11->setMaximumSize(QSize(38, 18));
        note4_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_11->setAutoExclusive(true);

        gridNotes->addWidget(note4_11, 33, 11, 1, 1);

        note4_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note4_12);
        note4_12->setObjectName(QStringLiteral("note4_12"));
        sizePolicy.setHeightForWidth(note4_12->sizePolicy().hasHeightForWidth());
        note4_12->setSizePolicy(sizePolicy);
        note4_12->setMinimumSize(QSize(38, 18));
        note4_12->setMaximumSize(QSize(38, 18));
        note4_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_12->setAutoExclusive(true);

        gridNotes->addWidget(note4_12, 33, 12, 1, 1);

        note4_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note4_13);
        note4_13->setObjectName(QStringLiteral("note4_13"));
        sizePolicy.setHeightForWidth(note4_13->sizePolicy().hasHeightForWidth());
        note4_13->setSizePolicy(sizePolicy);
        note4_13->setMinimumSize(QSize(38, 18));
        note4_13->setMaximumSize(QSize(38, 18));
        note4_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_13->setAutoExclusive(true);

        gridNotes->addWidget(note4_13, 33, 13, 1, 1);

        note4_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note4_14);
        note4_14->setObjectName(QStringLiteral("note4_14"));
        sizePolicy.setHeightForWidth(note4_14->sizePolicy().hasHeightForWidth());
        note4_14->setSizePolicy(sizePolicy);
        note4_14->setMinimumSize(QSize(38, 18));
        note4_14->setMaximumSize(QSize(38, 18));
        note4_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_14->setAutoExclusive(true);

        gridNotes->addWidget(note4_14, 33, 14, 1, 1);

        note4_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note4_15);
        note4_15->setObjectName(QStringLiteral("note4_15"));
        sizePolicy.setHeightForWidth(note4_15->sizePolicy().hasHeightForWidth());
        note4_15->setSizePolicy(sizePolicy);
        note4_15->setMinimumSize(QSize(38, 18));
        note4_15->setMaximumSize(QSize(38, 18));
        note4_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note4_15->setAutoExclusive(true);

        gridNotes->addWidget(note4_15, 33, 15, 1, 1);

        note3_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note3_0);
        note3_0->setObjectName(QStringLiteral("note3_0"));
        sizePolicy.setHeightForWidth(note3_0->sizePolicy().hasHeightForWidth());
        note3_0->setSizePolicy(sizePolicy);
        note3_0->setMinimumSize(QSize(38, 18));
        note3_0->setMaximumSize(QSize(38, 18));
        note3_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_0->setChecked(false);
        note3_0->setAutoExclusive(true);

        gridNotes->addWidget(note3_0, 34, 0, 1, 1);

        note3_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note3_1);
        note3_1->setObjectName(QStringLiteral("note3_1"));
        sizePolicy.setHeightForWidth(note3_1->sizePolicy().hasHeightForWidth());
        note3_1->setSizePolicy(sizePolicy);
        note3_1->setMinimumSize(QSize(38, 18));
        note3_1->setMaximumSize(QSize(38, 18));
        note3_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_1->setAutoExclusive(true);

        gridNotes->addWidget(note3_1, 34, 1, 1, 1);

        note3_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note3_2);
        note3_2->setObjectName(QStringLiteral("note3_2"));
        sizePolicy.setHeightForWidth(note3_2->sizePolicy().hasHeightForWidth());
        note3_2->setSizePolicy(sizePolicy);
        note3_2->setMinimumSize(QSize(38, 18));
        note3_2->setMaximumSize(QSize(38, 18));
        note3_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_2->setAutoExclusive(true);

        gridNotes->addWidget(note3_2, 34, 2, 1, 1);

        note3_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note3_3);
        note3_3->setObjectName(QStringLiteral("note3_3"));
        sizePolicy.setHeightForWidth(note3_3->sizePolicy().hasHeightForWidth());
        note3_3->setSizePolicy(sizePolicy);
        note3_3->setMinimumSize(QSize(38, 18));
        note3_3->setMaximumSize(QSize(38, 18));
        note3_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_3->setAutoExclusive(true);

        gridNotes->addWidget(note3_3, 34, 3, 1, 1);

        note3_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note3_4);
        note3_4->setObjectName(QStringLiteral("note3_4"));
        sizePolicy.setHeightForWidth(note3_4->sizePolicy().hasHeightForWidth());
        note3_4->setSizePolicy(sizePolicy);
        note3_4->setMinimumSize(QSize(38, 18));
        note3_4->setMaximumSize(QSize(38, 18));
        note3_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_4->setAutoExclusive(true);

        gridNotes->addWidget(note3_4, 34, 4, 1, 1);

        note3_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note3_5);
        note3_5->setObjectName(QStringLiteral("note3_5"));
        sizePolicy.setHeightForWidth(note3_5->sizePolicy().hasHeightForWidth());
        note3_5->setSizePolicy(sizePolicy);
        note3_5->setMinimumSize(QSize(38, 18));
        note3_5->setMaximumSize(QSize(38, 18));
        note3_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_5->setAutoExclusive(true);

        gridNotes->addWidget(note3_5, 34, 5, 1, 1);

        note3_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note3_6);
        note3_6->setObjectName(QStringLiteral("note3_6"));
        sizePolicy.setHeightForWidth(note3_6->sizePolicy().hasHeightForWidth());
        note3_6->setSizePolicy(sizePolicy);
        note3_6->setMinimumSize(QSize(38, 18));
        note3_6->setMaximumSize(QSize(38, 18));
        note3_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_6->setAutoExclusive(true);

        gridNotes->addWidget(note3_6, 34, 6, 1, 1);

        note3_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note3_7);
        note3_7->setObjectName(QStringLiteral("note3_7"));
        sizePolicy.setHeightForWidth(note3_7->sizePolicy().hasHeightForWidth());
        note3_7->setSizePolicy(sizePolicy);
        note3_7->setMinimumSize(QSize(38, 18));
        note3_7->setMaximumSize(QSize(38, 18));
        note3_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_7->setAutoExclusive(true);

        gridNotes->addWidget(note3_7, 34, 7, 1, 1);

        note3_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note3_8);
        note3_8->setObjectName(QStringLiteral("note3_8"));
        sizePolicy.setHeightForWidth(note3_8->sizePolicy().hasHeightForWidth());
        note3_8->setSizePolicy(sizePolicy);
        note3_8->setMinimumSize(QSize(38, 18));
        note3_8->setMaximumSize(QSize(38, 18));
        note3_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_8->setAutoExclusive(true);

        gridNotes->addWidget(note3_8, 34, 8, 1, 1);

        note3_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note3_9);
        note3_9->setObjectName(QStringLiteral("note3_9"));
        sizePolicy.setHeightForWidth(note3_9->sizePolicy().hasHeightForWidth());
        note3_9->setSizePolicy(sizePolicy);
        note3_9->setMinimumSize(QSize(38, 18));
        note3_9->setMaximumSize(QSize(38, 18));
        note3_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_9->setAutoExclusive(true);

        gridNotes->addWidget(note3_9, 34, 9, 1, 1);

        note3_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note3_10);
        note3_10->setObjectName(QStringLiteral("note3_10"));
        sizePolicy.setHeightForWidth(note3_10->sizePolicy().hasHeightForWidth());
        note3_10->setSizePolicy(sizePolicy);
        note3_10->setMinimumSize(QSize(38, 18));
        note3_10->setMaximumSize(QSize(38, 18));
        note3_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_10->setAutoExclusive(true);

        gridNotes->addWidget(note3_10, 34, 10, 1, 1);

        note3_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note3_11);
        note3_11->setObjectName(QStringLiteral("note3_11"));
        sizePolicy.setHeightForWidth(note3_11->sizePolicy().hasHeightForWidth());
        note3_11->setSizePolicy(sizePolicy);
        note3_11->setMinimumSize(QSize(38, 18));
        note3_11->setMaximumSize(QSize(38, 18));
        note3_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_11->setAutoExclusive(true);

        gridNotes->addWidget(note3_11, 34, 11, 1, 1);

        note3_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note3_12);
        note3_12->setObjectName(QStringLiteral("note3_12"));
        sizePolicy.setHeightForWidth(note3_12->sizePolicy().hasHeightForWidth());
        note3_12->setSizePolicy(sizePolicy);
        note3_12->setMinimumSize(QSize(38, 18));
        note3_12->setMaximumSize(QSize(38, 18));
        note3_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_12->setAutoExclusive(true);

        gridNotes->addWidget(note3_12, 34, 12, 1, 1);

        note3_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note3_13);
        note3_13->setObjectName(QStringLiteral("note3_13"));
        sizePolicy.setHeightForWidth(note3_13->sizePolicy().hasHeightForWidth());
        note3_13->setSizePolicy(sizePolicy);
        note3_13->setMinimumSize(QSize(38, 18));
        note3_13->setMaximumSize(QSize(38, 18));
        note3_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_13->setAutoExclusive(true);

        gridNotes->addWidget(note3_13, 34, 13, 1, 1);

        note3_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note3_14);
        note3_14->setObjectName(QStringLiteral("note3_14"));
        sizePolicy.setHeightForWidth(note3_14->sizePolicy().hasHeightForWidth());
        note3_14->setSizePolicy(sizePolicy);
        note3_14->setMinimumSize(QSize(38, 18));
        note3_14->setMaximumSize(QSize(38, 18));
        note3_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_14->setAutoExclusive(true);

        gridNotes->addWidget(note3_14, 34, 14, 1, 1);

        note3_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note3_15);
        note3_15->setObjectName(QStringLiteral("note3_15"));
        sizePolicy.setHeightForWidth(note3_15->sizePolicy().hasHeightForWidth());
        note3_15->setSizePolicy(sizePolicy);
        note3_15->setMinimumSize(QSize(38, 18));
        note3_15->setMaximumSize(QSize(38, 18));
        note3_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note3_15->setAutoExclusive(true);

        gridNotes->addWidget(note3_15, 34, 15, 1, 1);

        note2_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note2_0);
        note2_0->setObjectName(QStringLiteral("note2_0"));
        sizePolicy.setHeightForWidth(note2_0->sizePolicy().hasHeightForWidth());
        note2_0->setSizePolicy(sizePolicy);
        note2_0->setMinimumSize(QSize(38, 18));
        note2_0->setMaximumSize(QSize(38, 18));
        note2_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_0->setAutoExclusive(true);

        gridNotes->addWidget(note2_0, 35, 0, 1, 1);

        note2_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note2_1);
        note2_1->setObjectName(QStringLiteral("note2_1"));
        sizePolicy.setHeightForWidth(note2_1->sizePolicy().hasHeightForWidth());
        note2_1->setSizePolicy(sizePolicy);
        note2_1->setMinimumSize(QSize(38, 18));
        note2_1->setMaximumSize(QSize(38, 18));
        note2_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_1->setAutoExclusive(true);

        gridNotes->addWidget(note2_1, 35, 1, 1, 1);

        note2_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note2_2);
        note2_2->setObjectName(QStringLiteral("note2_2"));
        sizePolicy.setHeightForWidth(note2_2->sizePolicy().hasHeightForWidth());
        note2_2->setSizePolicy(sizePolicy);
        note2_2->setMinimumSize(QSize(38, 18));
        note2_2->setMaximumSize(QSize(38, 18));
        note2_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_2->setAutoExclusive(true);

        gridNotes->addWidget(note2_2, 35, 2, 1, 1);

        note2_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note2_3);
        note2_3->setObjectName(QStringLiteral("note2_3"));
        sizePolicy.setHeightForWidth(note2_3->sizePolicy().hasHeightForWidth());
        note2_3->setSizePolicy(sizePolicy);
        note2_3->setMinimumSize(QSize(38, 18));
        note2_3->setMaximumSize(QSize(38, 18));
        note2_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_3->setAutoExclusive(true);

        gridNotes->addWidget(note2_3, 35, 3, 1, 1);

        note2_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note2_4);
        note2_4->setObjectName(QStringLiteral("note2_4"));
        sizePolicy.setHeightForWidth(note2_4->sizePolicy().hasHeightForWidth());
        note2_4->setSizePolicy(sizePolicy);
        note2_4->setMinimumSize(QSize(38, 18));
        note2_4->setMaximumSize(QSize(38, 18));
        note2_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_4->setAutoExclusive(true);

        gridNotes->addWidget(note2_4, 35, 4, 1, 1);

        note2_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note2_5);
        note2_5->setObjectName(QStringLiteral("note2_5"));
        sizePolicy.setHeightForWidth(note2_5->sizePolicy().hasHeightForWidth());
        note2_5->setSizePolicy(sizePolicy);
        note2_5->setMinimumSize(QSize(38, 18));
        note2_5->setMaximumSize(QSize(38, 18));
        note2_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_5->setAutoExclusive(true);

        gridNotes->addWidget(note2_5, 35, 5, 1, 1);

        note2_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note2_6);
        note2_6->setObjectName(QStringLiteral("note2_6"));
        sizePolicy.setHeightForWidth(note2_6->sizePolicy().hasHeightForWidth());
        note2_6->setSizePolicy(sizePolicy);
        note2_6->setMinimumSize(QSize(38, 18));
        note2_6->setMaximumSize(QSize(38, 18));
        note2_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_6->setAutoExclusive(true);

        gridNotes->addWidget(note2_6, 35, 6, 1, 1);

        note2_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note2_7);
        note2_7->setObjectName(QStringLiteral("note2_7"));
        sizePolicy.setHeightForWidth(note2_7->sizePolicy().hasHeightForWidth());
        note2_7->setSizePolicy(sizePolicy);
        note2_7->setMinimumSize(QSize(38, 18));
        note2_7->setMaximumSize(QSize(38, 18));
        note2_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_7->setAutoExclusive(true);

        gridNotes->addWidget(note2_7, 35, 7, 1, 1);

        note2_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note2_8);
        note2_8->setObjectName(QStringLiteral("note2_8"));
        sizePolicy.setHeightForWidth(note2_8->sizePolicy().hasHeightForWidth());
        note2_8->setSizePolicy(sizePolicy);
        note2_8->setMinimumSize(QSize(38, 18));
        note2_8->setMaximumSize(QSize(38, 18));
        note2_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_8->setAutoExclusive(true);

        gridNotes->addWidget(note2_8, 35, 8, 1, 1);

        note2_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note2_9);
        note2_9->setObjectName(QStringLiteral("note2_9"));
        sizePolicy.setHeightForWidth(note2_9->sizePolicy().hasHeightForWidth());
        note2_9->setSizePolicy(sizePolicy);
        note2_9->setMinimumSize(QSize(38, 18));
        note2_9->setMaximumSize(QSize(38, 18));
        note2_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_9->setAutoExclusive(true);

        gridNotes->addWidget(note2_9, 35, 9, 1, 1);

        note2_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note2_10);
        note2_10->setObjectName(QStringLiteral("note2_10"));
        sizePolicy.setHeightForWidth(note2_10->sizePolicy().hasHeightForWidth());
        note2_10->setSizePolicy(sizePolicy);
        note2_10->setMinimumSize(QSize(38, 18));
        note2_10->setMaximumSize(QSize(38, 18));
        note2_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_10->setAutoExclusive(true);

        gridNotes->addWidget(note2_10, 35, 10, 1, 1);

        note2_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note2_11);
        note2_11->setObjectName(QStringLiteral("note2_11"));
        sizePolicy.setHeightForWidth(note2_11->sizePolicy().hasHeightForWidth());
        note2_11->setSizePolicy(sizePolicy);
        note2_11->setMinimumSize(QSize(38, 18));
        note2_11->setMaximumSize(QSize(38, 18));
        note2_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_11->setAutoExclusive(true);

        gridNotes->addWidget(note2_11, 35, 11, 1, 1);

        note2_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note2_12);
        note2_12->setObjectName(QStringLiteral("note2_12"));
        sizePolicy.setHeightForWidth(note2_12->sizePolicy().hasHeightForWidth());
        note2_12->setSizePolicy(sizePolicy);
        note2_12->setMinimumSize(QSize(38, 18));
        note2_12->setMaximumSize(QSize(38, 18));
        note2_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_12->setAutoExclusive(true);

        gridNotes->addWidget(note2_12, 35, 12, 1, 1);

        note2_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note2_13);
        note2_13->setObjectName(QStringLiteral("note2_13"));
        sizePolicy.setHeightForWidth(note2_13->sizePolicy().hasHeightForWidth());
        note2_13->setSizePolicy(sizePolicy);
        note2_13->setMinimumSize(QSize(38, 18));
        note2_13->setMaximumSize(QSize(38, 18));
        note2_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_13->setAutoExclusive(true);

        gridNotes->addWidget(note2_13, 35, 13, 1, 1);

        note2_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note2_14);
        note2_14->setObjectName(QStringLiteral("note2_14"));
        sizePolicy.setHeightForWidth(note2_14->sizePolicy().hasHeightForWidth());
        note2_14->setSizePolicy(sizePolicy);
        note2_14->setMinimumSize(QSize(38, 18));
        note2_14->setMaximumSize(QSize(38, 18));
        note2_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_14->setAutoExclusive(true);

        gridNotes->addWidget(note2_14, 35, 14, 1, 1);

        note2_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note2_15);
        note2_15->setObjectName(QStringLiteral("note2_15"));
        sizePolicy.setHeightForWidth(note2_15->sizePolicy().hasHeightForWidth());
        note2_15->setSizePolicy(sizePolicy);
        note2_15->setMinimumSize(QSize(38, 18));
        note2_15->setMaximumSize(QSize(38, 18));
        note2_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_black.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_black_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note2_15->setAutoExclusive(true);

        gridNotes->addWidget(note2_15, 35, 15, 1, 1);

        note1_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note1_0);
        note1_0->setObjectName(QStringLiteral("note1_0"));
        sizePolicy.setHeightForWidth(note1_0->sizePolicy().hasHeightForWidth());
        note1_0->setSizePolicy(sizePolicy);
        note1_0->setMinimumSize(QSize(38, 18));
        note1_0->setMaximumSize(QSize(38, 18));
        note1_0->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_0->setAutoExclusive(true);

        gridNotes->addWidget(note1_0, 36, 0, 1, 1);

        note1_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note1_1);
        note1_1->setObjectName(QStringLiteral("note1_1"));
        sizePolicy.setHeightForWidth(note1_1->sizePolicy().hasHeightForWidth());
        note1_1->setSizePolicy(sizePolicy);
        note1_1->setMinimumSize(QSize(38, 18));
        note1_1->setMaximumSize(QSize(38, 18));
        note1_1->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_1->setAutoExclusive(true);

        gridNotes->addWidget(note1_1, 36, 1, 1, 1);

        note1_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note1_2);
        note1_2->setObjectName(QStringLiteral("note1_2"));
        sizePolicy.setHeightForWidth(note1_2->sizePolicy().hasHeightForWidth());
        note1_2->setSizePolicy(sizePolicy);
        note1_2->setMinimumSize(QSize(38, 18));
        note1_2->setMaximumSize(QSize(38, 18));
        note1_2->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_2->setAutoExclusive(true);

        gridNotes->addWidget(note1_2, 36, 2, 1, 1);

        note1_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note1_3);
        note1_3->setObjectName(QStringLiteral("note1_3"));
        sizePolicy.setHeightForWidth(note1_3->sizePolicy().hasHeightForWidth());
        note1_3->setSizePolicy(sizePolicy);
        note1_3->setMinimumSize(QSize(38, 18));
        note1_3->setMaximumSize(QSize(38, 18));
        note1_3->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_3->setAutoExclusive(true);

        gridNotes->addWidget(note1_3, 36, 3, 1, 1);

        note1_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note1_4);
        note1_4->setObjectName(QStringLiteral("note1_4"));
        sizePolicy.setHeightForWidth(note1_4->sizePolicy().hasHeightForWidth());
        note1_4->setSizePolicy(sizePolicy);
        note1_4->setMinimumSize(QSize(38, 18));
        note1_4->setMaximumSize(QSize(38, 18));
        note1_4->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_4->setAutoExclusive(true);

        gridNotes->addWidget(note1_4, 36, 4, 1, 1);

        note1_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note1_5);
        note1_5->setObjectName(QStringLiteral("note1_5"));
        sizePolicy.setHeightForWidth(note1_5->sizePolicy().hasHeightForWidth());
        note1_5->setSizePolicy(sizePolicy);
        note1_5->setMinimumSize(QSize(38, 18));
        note1_5->setMaximumSize(QSize(38, 18));
        note1_5->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_5->setAutoExclusive(true);

        gridNotes->addWidget(note1_5, 36, 5, 1, 1);

        note1_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note1_6);
        note1_6->setObjectName(QStringLiteral("note1_6"));
        sizePolicy.setHeightForWidth(note1_6->sizePolicy().hasHeightForWidth());
        note1_6->setSizePolicy(sizePolicy);
        note1_6->setMinimumSize(QSize(38, 18));
        note1_6->setMaximumSize(QSize(38, 18));
        note1_6->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_6->setAutoExclusive(true);

        gridNotes->addWidget(note1_6, 36, 6, 1, 1);

        note1_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note1_7);
        note1_7->setObjectName(QStringLiteral("note1_7"));
        sizePolicy.setHeightForWidth(note1_7->sizePolicy().hasHeightForWidth());
        note1_7->setSizePolicy(sizePolicy);
        note1_7->setMinimumSize(QSize(38, 18));
        note1_7->setMaximumSize(QSize(38, 18));
        note1_7->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_7->setAutoExclusive(true);

        gridNotes->addWidget(note1_7, 36, 7, 1, 1);

        note1_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note1_8);
        note1_8->setObjectName(QStringLiteral("note1_8"));
        sizePolicy.setHeightForWidth(note1_8->sizePolicy().hasHeightForWidth());
        note1_8->setSizePolicy(sizePolicy);
        note1_8->setMinimumSize(QSize(38, 18));
        note1_8->setMaximumSize(QSize(38, 18));
        note1_8->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_8->setAutoExclusive(true);

        gridNotes->addWidget(note1_8, 36, 8, 1, 1);

        note1_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note1_9);
        note1_9->setObjectName(QStringLiteral("note1_9"));
        sizePolicy.setHeightForWidth(note1_9->sizePolicy().hasHeightForWidth());
        note1_9->setSizePolicy(sizePolicy);
        note1_9->setMinimumSize(QSize(38, 18));
        note1_9->setMaximumSize(QSize(38, 18));
        note1_9->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_9->setAutoExclusive(true);

        gridNotes->addWidget(note1_9, 36, 9, 1, 1);

        note1_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note1_10);
        note1_10->setObjectName(QStringLiteral("note1_10"));
        sizePolicy.setHeightForWidth(note1_10->sizePolicy().hasHeightForWidth());
        note1_10->setSizePolicy(sizePolicy);
        note1_10->setMinimumSize(QSize(38, 18));
        note1_10->setMaximumSize(QSize(38, 18));
        note1_10->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_10->setAutoExclusive(true);

        gridNotes->addWidget(note1_10, 36, 10, 1, 1);

        note1_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note1_11);
        note1_11->setObjectName(QStringLiteral("note1_11"));
        sizePolicy.setHeightForWidth(note1_11->sizePolicy().hasHeightForWidth());
        note1_11->setSizePolicy(sizePolicy);
        note1_11->setMinimumSize(QSize(38, 18));
        note1_11->setMaximumSize(QSize(38, 18));
        note1_11->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_11->setAutoExclusive(true);

        gridNotes->addWidget(note1_11, 36, 11, 1, 1);

        note1_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note1_12);
        note1_12->setObjectName(QStringLiteral("note1_12"));
        sizePolicy.setHeightForWidth(note1_12->sizePolicy().hasHeightForWidth());
        note1_12->setSizePolicy(sizePolicy);
        note1_12->setMinimumSize(QSize(38, 18));
        note1_12->setMaximumSize(QSize(38, 18));
        note1_12->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_12->setAutoExclusive(true);

        gridNotes->addWidget(note1_12, 36, 12, 1, 1);

        note1_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note1_13);
        note1_13->setObjectName(QStringLiteral("note1_13"));
        sizePolicy.setHeightForWidth(note1_13->sizePolicy().hasHeightForWidth());
        note1_13->setSizePolicy(sizePolicy);
        note1_13->setMinimumSize(QSize(38, 18));
        note1_13->setMaximumSize(QSize(38, 18));
        note1_13->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_13->setAutoExclusive(true);

        gridNotes->addWidget(note1_13, 36, 13, 1, 1);

        note1_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note1_14);
        note1_14->setObjectName(QStringLiteral("note1_14"));
        sizePolicy.setHeightForWidth(note1_14->sizePolicy().hasHeightForWidth());
        note1_14->setSizePolicy(sizePolicy);
        note1_14->setMinimumSize(QSize(38, 18));
        note1_14->setMaximumSize(QSize(38, 18));
        note1_14->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_14->setAutoExclusive(true);

        gridNotes->addWidget(note1_14, 36, 14, 1, 1);

        note1_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note1_15);
        note1_15->setObjectName(QStringLiteral("note1_15"));
        sizePolicy.setHeightForWidth(note1_15->sizePolicy().hasHeightForWidth());
        note1_15->setSizePolicy(sizePolicy);
        note1_15->setMinimumSize(QSize(38, 18));
        note1_15->setMaximumSize(QSize(38, 18));
        note1_15->setStyleSheet(QLatin1String("QRadioButton	{\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QRadioButton::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_white.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_pressed.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover	{\n"
"	image: url(:/progect_resources/textures/button_white_hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover	{\n"
"	image: url(:/progect_resources/textures/button_pressed_hover.png);\n"
"}"));
        note1_15->setAutoExclusive(true);

        gridNotes->addWidget(note1_15, 36, 15, 1, 1);

        note0_0 = new QRadioButton(layoutWidget);
        notes_0->addButton(note0_0);
        note0_0->setObjectName(QStringLiteral("note0_0"));
        sizePolicy.setHeightForWidth(note0_0->sizePolicy().hasHeightForWidth());
        note0_0->setSizePolicy(sizePolicy);
        note0_0->setMinimumSize(QSize(38, 32));
        note0_0->setMaximumSize(QSize(38, 32));
        note0_0->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_0->setChecked(true);
        note0_0->setAutoExclusive(true);

        gridNotes->addWidget(note0_0, 37, 0, 1, 1);

        note0_1 = new QRadioButton(layoutWidget);
        notes_1->addButton(note0_1);
        note0_1->setObjectName(QStringLiteral("note0_1"));
        sizePolicy.setHeightForWidth(note0_1->sizePolicy().hasHeightForWidth());
        note0_1->setSizePolicy(sizePolicy);
        note0_1->setMinimumSize(QSize(38, 32));
        note0_1->setMaximumSize(QSize(38, 32));
        note0_1->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_1->setChecked(true);
        note0_1->setAutoExclusive(true);

        gridNotes->addWidget(note0_1, 37, 1, 1, 1);

        note0_2 = new QRadioButton(layoutWidget);
        notes_2->addButton(note0_2);
        note0_2->setObjectName(QStringLiteral("note0_2"));
        sizePolicy.setHeightForWidth(note0_2->sizePolicy().hasHeightForWidth());
        note0_2->setSizePolicy(sizePolicy);
        note0_2->setMinimumSize(QSize(38, 32));
        note0_2->setMaximumSize(QSize(38, 32));
        note0_2->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_2->setChecked(true);
        note0_2->setAutoExclusive(true);

        gridNotes->addWidget(note0_2, 37, 2, 1, 1);

        note0_3 = new QRadioButton(layoutWidget);
        notes_3->addButton(note0_3);
        note0_3->setObjectName(QStringLiteral("note0_3"));
        sizePolicy.setHeightForWidth(note0_3->sizePolicy().hasHeightForWidth());
        note0_3->setSizePolicy(sizePolicy);
        note0_3->setMinimumSize(QSize(38, 32));
        note0_3->setMaximumSize(QSize(38, 32));
        note0_3->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_3->setChecked(true);
        note0_3->setAutoExclusive(true);

        gridNotes->addWidget(note0_3, 37, 3, 1, 1);

        note0_4 = new QRadioButton(layoutWidget);
        notes_4->addButton(note0_4);
        note0_4->setObjectName(QStringLiteral("note0_4"));
        sizePolicy.setHeightForWidth(note0_4->sizePolicy().hasHeightForWidth());
        note0_4->setSizePolicy(sizePolicy);
        note0_4->setMinimumSize(QSize(38, 32));
        note0_4->setMaximumSize(QSize(38, 32));
        note0_4->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_4->setChecked(true);
        note0_4->setAutoExclusive(true);

        gridNotes->addWidget(note0_4, 37, 4, 1, 1);

        note0_5 = new QRadioButton(layoutWidget);
        notes_5->addButton(note0_5);
        note0_5->setObjectName(QStringLiteral("note0_5"));
        sizePolicy.setHeightForWidth(note0_5->sizePolicy().hasHeightForWidth());
        note0_5->setSizePolicy(sizePolicy);
        note0_5->setMinimumSize(QSize(38, 32));
        note0_5->setMaximumSize(QSize(38, 32));
        note0_5->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_5->setChecked(true);
        note0_5->setAutoExclusive(true);

        gridNotes->addWidget(note0_5, 37, 5, 1, 1);

        note0_6 = new QRadioButton(layoutWidget);
        notes_6->addButton(note0_6);
        note0_6->setObjectName(QStringLiteral("note0_6"));
        sizePolicy.setHeightForWidth(note0_6->sizePolicy().hasHeightForWidth());
        note0_6->setSizePolicy(sizePolicy);
        note0_6->setMinimumSize(QSize(38, 32));
        note0_6->setMaximumSize(QSize(38, 32));
        note0_6->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_6->setChecked(true);
        note0_6->setAutoExclusive(true);

        gridNotes->addWidget(note0_6, 37, 6, 1, 1);

        note0_7 = new QRadioButton(layoutWidget);
        notes_7->addButton(note0_7);
        note0_7->setObjectName(QStringLiteral("note0_7"));
        sizePolicy.setHeightForWidth(note0_7->sizePolicy().hasHeightForWidth());
        note0_7->setSizePolicy(sizePolicy);
        note0_7->setMinimumSize(QSize(38, 32));
        note0_7->setMaximumSize(QSize(38, 32));
        note0_7->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_7->setChecked(true);
        note0_7->setAutoExclusive(true);

        gridNotes->addWidget(note0_7, 37, 7, 1, 1);

        note0_8 = new QRadioButton(layoutWidget);
        notes_8->addButton(note0_8);
        note0_8->setObjectName(QStringLiteral("note0_8"));
        sizePolicy.setHeightForWidth(note0_8->sizePolicy().hasHeightForWidth());
        note0_8->setSizePolicy(sizePolicy);
        note0_8->setMinimumSize(QSize(38, 32));
        note0_8->setMaximumSize(QSize(38, 32));
        note0_8->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_8->setChecked(true);
        note0_8->setAutoExclusive(true);

        gridNotes->addWidget(note0_8, 37, 8, 1, 1);

        note0_9 = new QRadioButton(layoutWidget);
        notes_9->addButton(note0_9);
        note0_9->setObjectName(QStringLiteral("note0_9"));
        sizePolicy.setHeightForWidth(note0_9->sizePolicy().hasHeightForWidth());
        note0_9->setSizePolicy(sizePolicy);
        note0_9->setMinimumSize(QSize(38, 32));
        note0_9->setMaximumSize(QSize(38, 32));
        note0_9->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_9->setChecked(true);
        note0_9->setAutoExclusive(true);

        gridNotes->addWidget(note0_9, 37, 9, 1, 1);

        note0_10 = new QRadioButton(layoutWidget);
        notes_10->addButton(note0_10);
        note0_10->setObjectName(QStringLiteral("note0_10"));
        sizePolicy.setHeightForWidth(note0_10->sizePolicy().hasHeightForWidth());
        note0_10->setSizePolicy(sizePolicy);
        note0_10->setMinimumSize(QSize(38, 32));
        note0_10->setMaximumSize(QSize(38, 32));
        note0_10->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_10->setChecked(true);
        note0_10->setAutoExclusive(true);

        gridNotes->addWidget(note0_10, 37, 10, 1, 1);

        note0_11 = new QRadioButton(layoutWidget);
        notes_11->addButton(note0_11);
        note0_11->setObjectName(QStringLiteral("note0_11"));
        sizePolicy.setHeightForWidth(note0_11->sizePolicy().hasHeightForWidth());
        note0_11->setSizePolicy(sizePolicy);
        note0_11->setMinimumSize(QSize(38, 32));
        note0_11->setMaximumSize(QSize(38, 32));
        note0_11->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_11->setChecked(true);
        note0_11->setAutoExclusive(true);

        gridNotes->addWidget(note0_11, 37, 11, 1, 1);

        note0_12 = new QRadioButton(layoutWidget);
        notes_12->addButton(note0_12);
        note0_12->setObjectName(QStringLiteral("note0_12"));
        sizePolicy.setHeightForWidth(note0_12->sizePolicy().hasHeightForWidth());
        note0_12->setSizePolicy(sizePolicy);
        note0_12->setMinimumSize(QSize(38, 32));
        note0_12->setMaximumSize(QSize(38, 32));
        note0_12->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_12->setChecked(true);
        note0_12->setAutoExclusive(true);

        gridNotes->addWidget(note0_12, 37, 12, 1, 1);

        note0_13 = new QRadioButton(layoutWidget);
        notes_13->addButton(note0_13);
        note0_13->setObjectName(QStringLiteral("note0_13"));
        sizePolicy.setHeightForWidth(note0_13->sizePolicy().hasHeightForWidth());
        note0_13->setSizePolicy(sizePolicy);
        note0_13->setMinimumSize(QSize(38, 32));
        note0_13->setMaximumSize(QSize(38, 32));
        note0_13->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_13->setChecked(true);
        note0_13->setAutoExclusive(true);

        gridNotes->addWidget(note0_13, 37, 13, 1, 1);

        note0_14 = new QRadioButton(layoutWidget);
        notes_14->addButton(note0_14);
        note0_14->setObjectName(QStringLiteral("note0_14"));
        sizePolicy.setHeightForWidth(note0_14->sizePolicy().hasHeightForWidth());
        note0_14->setSizePolicy(sizePolicy);
        note0_14->setMinimumSize(QSize(38, 32));
        note0_14->setMaximumSize(QSize(38, 32));
        note0_14->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_14->setChecked(true);
        note0_14->setAutoExclusive(true);

        gridNotes->addWidget(note0_14, 37, 14, 1, 1);

        note0_15 = new QRadioButton(layoutWidget);
        notes_15->addButton(note0_15);
        note0_15->setObjectName(QStringLiteral("note0_15"));
        sizePolicy.setHeightForWidth(note0_15->sizePolicy().hasHeightForWidth());
        note0_15->setSizePolicy(sizePolicy);
        note0_15->setMinimumSize(QSize(38, 32));
        note0_15->setMaximumSize(QSize(38, 32));
        note0_15->setStyleSheet(QLatin1String("QRadioBox::indicator	{\n"
"	width: 38px;\n"
"	height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked	{\n"
"	image: url(:/progect_resources/textures/button_reset.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked	{\n"
"	image: url(:/progect_resources/textures/button_reset_pressed.png);\n"
"}"));
        note0_15->setChecked(true);
        note0_15->setAutoExclusive(true);

        gridNotes->addWidget(note0_15, 37, 15, 1, 1);

        progress_3 = new QSlider(centralwidget);
        progress_3->setObjectName(QStringLiteral("progress_3"));
        progress_3->setEnabled(false);
        progress_3->setGeometry(QRect(790, 520, 220, 10));
        progress_3->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"	border: 1px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	image: url(:/progect_resources/textures/arrow.png);\n"
"}"));
        progress_3->setMinimum(0);
        progress_3->setMaximum(7);
        progress_3->setSingleStep(0);
        progress_3->setPageStep(0);
        progress_3->setOrientation(Qt::Horizontal);
        progress_3->setTickInterval(0);
        MainWindow->setCentralWidget(centralwidget);
        progress->raise();
        layoutWidget->raise();
        piano->raise();
        progress_2->raise();
        trackControlPanel->raise();
        layoutWidget2->raise();
        layoutWidget4->raise();
        muted1->raise();
        muted2->raise();
        muted3->raise();
        muted4->raise();
        channelVolume1->raise();
        channelVolume2->raise();
        channelVolume3->raise();
        channelVolume4->raise();
        credits->raise();
        channelControlPanel->raise();
        progress_3->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1170, 22));
        menuOption = new QMenu(menuBar);
        menuOption->setObjectName(QStringLiteral("menuOption"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuOption->menuAction());
        menuOption->addAction(resetBar);
        menuOption->addAction(resetChannel);
        menuOption->addAction(resetAll);
        menuOption->addSeparator();
        menuOption->addAction(loadExample);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qtracker", Q_NULLPTR));
        resetBar->setText(QApplication::translate("MainWindow", "Reset Bar", Q_NULLPTR));
        resetAll->setText(QApplication::translate("MainWindow", "Reset All", Q_NULLPTR));
        resetChannel->setText(QApplication::translate("MainWindow", "Reset Channel", Q_NULLPTR));
        loadExample->setText(QApplication::translate("MainWindow", "Load Example", Q_NULLPTR));
        trackControlPanel->setTitle(QApplication::translate("MainWindow", "TRACK CONTROL PANEL", Q_NULLPTR));
        label_volume->setText(QApplication::translate("MainWindow", "VOLUME:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        volumeSpinBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Global Volume</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        volumeSpinBox->setSuffix(QApplication::translate("MainWindow", "%", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tempoSlider->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Global Tempo</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_tempo->setText(QApplication::translate("MainWindow", "TEMPO:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tempoSpinBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Global Tempo</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tempoSpinBox->setSuffix(QApplication::translate("MainWindow", " BPM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        volumeSlider->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Global Volume</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        stop_button->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Stop</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stop_button->setText(QApplication::translate("MainWindow", " STOP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        play_button->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Play</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        play_button->setText(QApplication::translate("MainWindow", " PLAY", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        prev_button->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Previous Bar</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        prev_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        next_button->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Next Bar</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        next_button->setText(QString());
        piano->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_36->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>B<span style=\" vertical-align:sub;\">6</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_36->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_35->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>A#<span style=\" vertical-align:sub;\">6</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_35->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_34->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">6</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_34->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_33->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>G#<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_33->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_32->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>G<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_32->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_31->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>F#<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_31->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_30->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>F<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_30->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_29->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>E<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_29->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_28->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>D#<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_28->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_27->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>D<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_27->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_26->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>C#<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_26->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_25->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>C<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_25->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_24->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>B<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_24->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_23->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>A#<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_23->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_22->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">5</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_22->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_21->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>G#<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_21->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_20->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>G<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_20->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_19->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>F#<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_19->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_18->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>F<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_18->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_17->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>E<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_17->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_16->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>D#<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_16->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_15->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>D<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_15->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>C#<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_14->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>C<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_13->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>B<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_12->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>A#<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_11->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">4</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_10->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>G#<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_9->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>G<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>F#<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>F<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>E<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>D#<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>D<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>C#<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>C<span style=\" vertical-align:sub;\">3</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_1->setText(QString());
        channel1_1->setText(QString());
        channel1_2->setText(QString());
        channel1_3->setText(QString());
        channel1_4->setText(QString());
        channel1_5->setText(QString());
        channel1_6->setText(QString());
        channel1_7->setText(QString());
        channel1_8->setText(QString());
        channel2_1->setText(QString());
        channel2_2->setText(QString());
        channel2_3->setText(QString());
        channel2_4->setText(QString());
        channel2_5->setText(QString());
        channel2_6->setText(QString());
        channel2_7->setText(QString());
        channel2_8->setText(QString());
        channel3_1->setText(QString());
        channel3_2->setText(QString());
        channel3_3->setText(QString());
        channel3_4->setText(QString());
        channel3_5->setText(QString());
        channel3_6->setText(QString());
        channel3_7->setText(QString());
        channel3_8->setText(QString());
        channel4_1->setText(QString());
        channel4_2->setText(QString());
        channel4_3->setText(QString());
        channel4_4->setText(QString());
        channel4_5->setText(QString());
        channel4_6->setText(QString());
        channel4_7->setText(QString());
        channel4_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        muted1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Mute Channel 1</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        muted1->setText(QString());
#ifndef QT_NO_TOOLTIP
        muted2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Mute Channel 2</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        muted2->setText(QString());
#ifndef QT_NO_TOOLTIP
        muted3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Mute Channel 3</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        muted3->setText(QString());
#ifndef QT_NO_TOOLTIP
        muted4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Mute Channel 4</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        muted4->setText(QString());
#ifndef QT_NO_TOOLTIP
        channelVolume1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Channel 1 Volume</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        channelVolume2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Channel 2 Volume</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        channelVolume3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Channel 3 Volume</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        channelVolume4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Channel 4 Volume</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        credits->setText(QApplication::translate("MainWindow", "Qtracker", Q_NULLPTR));
        channelControlPanel->setTitle(QApplication::translate("MainWindow", "CHANNEL CONTROL PANEL", Q_NULLPTR));
        label_instrument->setText(QApplication::translate("MainWindow", "INSTRUMENT:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        instrumentBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Instrument Selector</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        kit_light->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Kit Instrument</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        kit_light->setText(QApplication::translate("MainWindow", "  Kit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stop_light->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Stoppable Instrument</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stop_light->setText(QApplication::translate("MainWindow", "  Stop", Q_NULLPTR));
        stop_0->setText(QString());
        stop_1->setText(QString());
        stop_2->setText(QString());
        stop_3->setText(QString());
        stop_4->setText(QString());
        stop_5->setText(QString());
        stop_6->setText(QString());
        stop_7->setText(QString());
        stop_8->setText(QString());
        stop_9->setText(QString());
        stop_10->setText(QString());
        stop_11->setText(QString());
        stop_12->setText(QString());
        stop_13->setText(QString());
        stop_14->setText(QString());
        stop_15->setText(QString());
        note36_0->setText(QString());
        note36_1->setText(QString());
        note36_2->setText(QString());
        note36_3->setText(QString());
        note36_4->setText(QString());
        note36_5->setText(QString());
        note36_6->setText(QString());
        note36_7->setText(QString());
        note36_8->setText(QString());
        note36_9->setText(QString());
        note36_10->setText(QString());
        note36_11->setText(QString());
        note36_12->setText(QString());
        note36_13->setText(QString());
        note36_14->setText(QString());
        note36_15->setText(QString());
        note35_0->setText(QString());
        note35_1->setText(QString());
        note35_2->setText(QString());
        note35_3->setText(QString());
        note35_4->setText(QString());
        note35_5->setText(QString());
        note35_6->setText(QString());
        note35_7->setText(QString());
        note35_8->setText(QString());
        note35_9->setText(QString());
        note35_10->setText(QString());
        note35_11->setText(QString());
        note35_12->setText(QString());
        note35_13->setText(QString());
        note35_14->setText(QString());
        note35_15->setText(QString());
        note34_0->setText(QString());
        note34_1->setText(QString());
        note34_2->setText(QString());
        note34_3->setText(QString());
        note34_4->setText(QString());
        note34_5->setText(QString());
        note34_6->setText(QString());
        note34_7->setText(QString());
        note34_8->setText(QString());
        note34_9->setText(QString());
        note34_10->setText(QString());
        note34_11->setText(QString());
        note34_12->setText(QString());
        note34_13->setText(QString());
        note34_14->setText(QString());
        note34_15->setText(QString());
        note33_0->setText(QString());
        note33_1->setText(QString());
        note33_2->setText(QString());
        note33_3->setText(QString());
        note33_4->setText(QString());
        note33_5->setText(QString());
        note33_6->setText(QString());
        note33_7->setText(QString());
        note33_8->setText(QString());
        note33_9->setText(QString());
        note33_10->setText(QString());
        note33_11->setText(QString());
        note33_12->setText(QString());
        note33_13->setText(QString());
        note33_14->setText(QString());
        note33_15->setText(QString());
        note32_0->setText(QString());
        note32_1->setText(QString());
        note32_2->setText(QString());
        note32_3->setText(QString());
        note32_4->setText(QString());
        note32_5->setText(QString());
        note32_6->setText(QString());
        note32_7->setText(QString());
        note32_8->setText(QString());
        note32_9->setText(QString());
        note32_10->setText(QString());
        note32_11->setText(QString());
        note32_12->setText(QString());
        note32_13->setText(QString());
        note32_14->setText(QString());
        note32_15->setText(QString());
        note31_0->setText(QString());
        note31_1->setText(QString());
        note31_2->setText(QString());
        note31_3->setText(QString());
        note31_4->setText(QString());
        note31_5->setText(QString());
        note31_6->setText(QString());
        note31_7->setText(QString());
        note31_8->setText(QString());
        note31_9->setText(QString());
        note31_10->setText(QString());
        note31_11->setText(QString());
        note31_12->setText(QString());
        note31_13->setText(QString());
        note31_14->setText(QString());
        note31_15->setText(QString());
        note30_0->setText(QString());
        note30_1->setText(QString());
        note30_2->setText(QString());
        note30_3->setText(QString());
        note30_4->setText(QString());
        note30_5->setText(QString());
        note30_6->setText(QString());
        note30_7->setText(QString());
        note30_8->setText(QString());
        note30_9->setText(QString());
        note30_10->setText(QString());
        note30_11->setText(QString());
        note30_12->setText(QString());
        note30_13->setText(QString());
        note30_14->setText(QString());
        note30_15->setText(QString());
        note29_0->setText(QString());
        note29_1->setText(QString());
        note29_2->setText(QString());
        note29_3->setText(QString());
        note29_4->setText(QString());
        note29_5->setText(QString());
        note29_6->setText(QString());
        note29_7->setText(QString());
        note29_8->setText(QString());
        note29_9->setText(QString());
        note29_10->setText(QString());
        note29_11->setText(QString());
        note29_12->setText(QString());
        note29_13->setText(QString());
        note29_14->setText(QString());
        note29_15->setText(QString());
        note28_0->setText(QString());
        note28_1->setText(QString());
        note28_2->setText(QString());
        note28_3->setText(QString());
        note28_4->setText(QString());
        note28_5->setText(QString());
        note28_6->setText(QString());
        note28_7->setText(QString());
        note28_8->setText(QString());
        note28_9->setText(QString());
        note28_10->setText(QString());
        note28_11->setText(QString());
        note28_12->setText(QString());
        note28_13->setText(QString());
        note28_14->setText(QString());
        note28_15->setText(QString());
        note27_0->setText(QString());
        note27_1->setText(QString());
        note27_2->setText(QString());
        note27_3->setText(QString());
        note27_4->setText(QString());
        note27_5->setText(QString());
        note27_6->setText(QString());
        note27_7->setText(QString());
        note27_8->setText(QString());
        note27_9->setText(QString());
        note27_10->setText(QString());
        note27_11->setText(QString());
        note27_12->setText(QString());
        note27_13->setText(QString());
        note27_14->setText(QString());
        note27_15->setText(QString());
        note26_0->setText(QString());
        note26_1->setText(QString());
        note26_2->setText(QString());
        note26_3->setText(QString());
        note26_4->setText(QString());
        note26_5->setText(QString());
        note26_6->setText(QString());
        note26_7->setText(QString());
        note26_8->setText(QString());
        note26_9->setText(QString());
        note26_10->setText(QString());
        note26_11->setText(QString());
        note26_12->setText(QString());
        note26_13->setText(QString());
        note26_14->setText(QString());
        note26_15->setText(QString());
        note25_0->setText(QString());
        note25_1->setText(QString());
        note25_2->setText(QString());
        note25_3->setText(QString());
        note25_4->setText(QString());
        note25_5->setText(QString());
        note25_6->setText(QString());
        note25_7->setText(QString());
        note25_8->setText(QString());
        note25_9->setText(QString());
        note25_10->setText(QString());
        note25_11->setText(QString());
        note25_12->setText(QString());
        note25_13->setText(QString());
        note25_14->setText(QString());
        note25_15->setText(QString());
        note24_0->setText(QString());
        note24_1->setText(QString());
        note24_2->setText(QString());
        note24_3->setText(QString());
        note24_4->setText(QString());
        note24_5->setText(QString());
        note24_6->setText(QString());
        note24_7->setText(QString());
        note24_8->setText(QString());
        note24_9->setText(QString());
        note24_10->setText(QString());
        note24_11->setText(QString());
        note24_12->setText(QString());
        note24_13->setText(QString());
        note24_14->setText(QString());
        note24_15->setText(QString());
        note23_0->setText(QString());
        note23_1->setText(QString());
        note23_2->setText(QString());
        note23_3->setText(QString());
        note23_4->setText(QString());
        note23_5->setText(QString());
        note23_6->setText(QString());
        note23_7->setText(QString());
        note23_8->setText(QString());
        note23_9->setText(QString());
        note23_10->setText(QString());
        note23_11->setText(QString());
        note23_12->setText(QString());
        note23_13->setText(QString());
        note23_14->setText(QString());
        note23_15->setText(QString());
        note22_0->setText(QString());
        note22_1->setText(QString());
        note22_2->setText(QString());
        note22_3->setText(QString());
        note22_4->setText(QString());
        note22_5->setText(QString());
        note22_6->setText(QString());
        note22_7->setText(QString());
        note22_8->setText(QString());
        note22_9->setText(QString());
        note22_10->setText(QString());
        note22_11->setText(QString());
        note22_12->setText(QString());
        note22_13->setText(QString());
        note22_14->setText(QString());
        note22_15->setText(QString());
        note21_0->setText(QString());
        note21_1->setText(QString());
        note21_2->setText(QString());
        note21_3->setText(QString());
        note21_4->setText(QString());
        note21_5->setText(QString());
        note21_6->setText(QString());
        note21_7->setText(QString());
        note21_8->setText(QString());
        note21_9->setText(QString());
        note21_10->setText(QString());
        note21_11->setText(QString());
        note21_12->setText(QString());
        note21_13->setText(QString());
        note21_14->setText(QString());
        note21_15->setText(QString());
        note20_0->setText(QString());
        note20_1->setText(QString());
        note20_2->setText(QString());
        note20_3->setText(QString());
        note20_4->setText(QString());
        note20_5->setText(QString());
        note20_6->setText(QString());
        note20_7->setText(QString());
        note20_8->setText(QString());
        note20_9->setText(QString());
        note20_10->setText(QString());
        note20_11->setText(QString());
        note20_12->setText(QString());
        note20_13->setText(QString());
        note20_14->setText(QString());
        note20_15->setText(QString());
        note19_0->setText(QString());
        note19_1->setText(QString());
        note19_2->setText(QString());
        note19_3->setText(QString());
        note19_4->setText(QString());
        note19_5->setText(QString());
        note19_6->setText(QString());
        note19_7->setText(QString());
        note19_8->setText(QString());
        note19_9->setText(QString());
        note19_10->setText(QString());
        note19_11->setText(QString());
        note19_12->setText(QString());
        note19_13->setText(QString());
        note19_14->setText(QString());
        note19_15->setText(QString());
        note18_0->setText(QString());
        note18_1->setText(QString());
        note18_2->setText(QString());
        note18_3->setText(QString());
        note18_4->setText(QString());
        note18_5->setText(QString());
        note18_6->setText(QString());
        note18_7->setText(QString());
        note18_8->setText(QString());
        note18_9->setText(QString());
        note18_10->setText(QString());
        note18_11->setText(QString());
        note18_12->setText(QString());
        note18_13->setText(QString());
        note18_14->setText(QString());
        note18_15->setText(QString());
        note17_0->setText(QString());
        note17_1->setText(QString());
        note17_2->setText(QString());
        note17_3->setText(QString());
        note17_4->setText(QString());
        note17_5->setText(QString());
        note17_6->setText(QString());
        note17_7->setText(QString());
        note17_8->setText(QString());
        note17_9->setText(QString());
        note17_10->setText(QString());
        note17_11->setText(QString());
        note17_12->setText(QString());
        note17_13->setText(QString());
        note17_14->setText(QString());
        note17_15->setText(QString());
        note16_0->setText(QString());
        note16_1->setText(QString());
        note16_2->setText(QString());
        note16_3->setText(QString());
        note16_4->setText(QString());
        note16_5->setText(QString());
        note16_6->setText(QString());
        note16_7->setText(QString());
        note16_8->setText(QString());
        note16_9->setText(QString());
        note16_10->setText(QString());
        note16_11->setText(QString());
        note16_12->setText(QString());
        note16_13->setText(QString());
        note16_14->setText(QString());
        note16_15->setText(QString());
        note15_0->setText(QString());
        note15_1->setText(QString());
        note15_2->setText(QString());
        note15_3->setText(QString());
        note15_4->setText(QString());
        note15_5->setText(QString());
        note15_6->setText(QString());
        note15_7->setText(QString());
        note15_8->setText(QString());
        note15_9->setText(QString());
        note15_10->setText(QString());
        note15_11->setText(QString());
        note15_12->setText(QString());
        note15_13->setText(QString());
        note15_14->setText(QString());
        note15_15->setText(QString());
        note14_0->setText(QString());
        note14_1->setText(QString());
        note14_2->setText(QString());
        note14_3->setText(QString());
        note14_4->setText(QString());
        note14_5->setText(QString());
        note14_6->setText(QString());
        note14_7->setText(QString());
        note14_8->setText(QString());
        note14_9->setText(QString());
        note14_10->setText(QString());
        note14_11->setText(QString());
        note14_12->setText(QString());
        note14_13->setText(QString());
        note14_14->setText(QString());
        note14_15->setText(QString());
        note13_0->setText(QString());
        note13_1->setText(QString());
        note13_2->setText(QString());
        note13_3->setText(QString());
        note13_4->setText(QString());
        note13_5->setText(QString());
        note13_6->setText(QString());
        note13_7->setText(QString());
        note13_8->setText(QString());
        note13_9->setText(QString());
        note13_10->setText(QString());
        note13_11->setText(QString());
        note13_12->setText(QString());
        note13_13->setText(QString());
        note13_14->setText(QString());
        note13_15->setText(QString());
        note12_0->setText(QString());
        note12_1->setText(QString());
        note12_2->setText(QString());
        note12_3->setText(QString());
        note12_4->setText(QString());
        note12_5->setText(QString());
        note12_6->setText(QString());
        note12_7->setText(QString());
        note12_8->setText(QString());
        note12_9->setText(QString());
        note12_10->setText(QString());
        note12_11->setText(QString());
        note12_12->setText(QString());
        note12_13->setText(QString());
        note12_14->setText(QString());
        note12_15->setText(QString());
        note11_0->setText(QString());
        note11_1->setText(QString());
        note11_2->setText(QString());
        note11_3->setText(QString());
        note11_4->setText(QString());
        note11_5->setText(QString());
        note11_6->setText(QString());
        note11_7->setText(QString());
        note11_8->setText(QString());
        note11_9->setText(QString());
        note11_10->setText(QString());
        note11_11->setText(QString());
        note11_12->setText(QString());
        note11_13->setText(QString());
        note11_14->setText(QString());
        note11_15->setText(QString());
        note10_0->setText(QString());
        note10_1->setText(QString());
        note10_2->setText(QString());
        note10_3->setText(QString());
        note10_4->setText(QString());
        note10_5->setText(QString());
        note10_6->setText(QString());
        note10_7->setText(QString());
        note10_8->setText(QString());
        note10_9->setText(QString());
        note10_10->setText(QString());
        note10_11->setText(QString());
        note10_12->setText(QString());
        note10_13->setText(QString());
        note10_14->setText(QString());
        note10_15->setText(QString());
        note9_0->setText(QString());
        note9_1->setText(QString());
        note9_2->setText(QString());
        note9_3->setText(QString());
        note9_4->setText(QString());
        note9_5->setText(QString());
        note9_6->setText(QString());
        note9_7->setText(QString());
        note9_8->setText(QString());
        note9_9->setText(QString());
        note9_10->setText(QString());
        note9_11->setText(QString());
        note9_12->setText(QString());
        note9_13->setText(QString());
        note9_14->setText(QString());
        note9_15->setText(QString());
        note8_0->setText(QString());
        note8_1->setText(QString());
        note8_2->setText(QString());
        note8_3->setText(QString());
        note8_4->setText(QString());
        note8_5->setText(QString());
        note8_6->setText(QString());
        note8_7->setText(QString());
        note8_8->setText(QString());
        note8_9->setText(QString());
        note8_10->setText(QString());
        note8_11->setText(QString());
        note8_12->setText(QString());
        note8_13->setText(QString());
        note8_14->setText(QString());
        note8_15->setText(QString());
        note7_0->setText(QString());
        note7_1->setText(QString());
        note7_2->setText(QString());
        note7_3->setText(QString());
        note7_4->setText(QString());
        note7_5->setText(QString());
        note7_6->setText(QString());
        note7_7->setText(QString());
        note7_8->setText(QString());
        note7_9->setText(QString());
        note7_10->setText(QString());
        note7_11->setText(QString());
        note7_12->setText(QString());
        note7_13->setText(QString());
        note7_14->setText(QString());
        note7_15->setText(QString());
        note6_0->setText(QString());
        note6_1->setText(QString());
        note6_2->setText(QString());
        note6_3->setText(QString());
        note6_4->setText(QString());
        note6_5->setText(QString());
        note6_6->setText(QString());
        note6_7->setText(QString());
        note6_8->setText(QString());
        note6_9->setText(QString());
        note6_10->setText(QString());
        note6_11->setText(QString());
        note6_12->setText(QString());
        note6_13->setText(QString());
        note6_14->setText(QString());
        note6_15->setText(QString());
        note5_0->setText(QString());
        note5_1->setText(QString());
        note5_2->setText(QString());
        note5_3->setText(QString());
        note5_4->setText(QString());
        note5_5->setText(QString());
        note5_6->setText(QString());
        note5_7->setText(QString());
        note5_8->setText(QString());
        note5_9->setText(QString());
        note5_10->setText(QString());
        note5_11->setText(QString());
        note5_12->setText(QString());
        note5_13->setText(QString());
        note5_14->setText(QString());
        note5_15->setText(QString());
        note4_0->setText(QString());
        note4_1->setText(QString());
        note4_2->setText(QString());
        note4_3->setText(QString());
        note4_4->setText(QString());
        note4_5->setText(QString());
        note4_6->setText(QString());
        note4_7->setText(QString());
        note4_8->setText(QString());
        note4_9->setText(QString());
        note4_10->setText(QString());
        note4_11->setText(QString());
        note4_12->setText(QString());
        note4_13->setText(QString());
        note4_14->setText(QString());
        note4_15->setText(QString());
        note3_0->setText(QString());
        note3_1->setText(QString());
        note3_2->setText(QString());
        note3_3->setText(QString());
        note3_4->setText(QString());
        note3_5->setText(QString());
        note3_6->setText(QString());
        note3_7->setText(QString());
        note3_8->setText(QString());
        note3_9->setText(QString());
        note3_10->setText(QString());
        note3_11->setText(QString());
        note3_12->setText(QString());
        note3_13->setText(QString());
        note3_14->setText(QString());
        note3_15->setText(QString());
        note2_0->setText(QString());
        note2_1->setText(QString());
        note2_2->setText(QString());
        note2_3->setText(QString());
        note2_4->setText(QString());
        note2_5->setText(QString());
        note2_6->setText(QString());
        note2_7->setText(QString());
        note2_8->setText(QString());
        note2_9->setText(QString());
        note2_10->setText(QString());
        note2_11->setText(QString());
        note2_12->setText(QString());
        note2_13->setText(QString());
        note2_14->setText(QString());
        note2_15->setText(QString());
        note1_0->setText(QString());
        note1_1->setText(QString());
        note1_2->setText(QString());
        note1_3->setText(QString());
        note1_4->setText(QString());
        note1_5->setText(QString());
        note1_6->setText(QString());
        note1_7->setText(QString());
        note1_8->setText(QString());
        note1_9->setText(QString());
        note1_10->setText(QString());
        note1_11->setText(QString());
        note1_12->setText(QString());
        note1_13->setText(QString());
        note1_14->setText(QString());
        note1_15->setText(QString());
        note0_0->setText(QString());
        note0_1->setText(QString());
        note0_2->setText(QString());
        note0_3->setText(QString());
        note0_4->setText(QString());
        note0_5->setText(QString());
        note0_6->setText(QString());
        note0_7->setText(QString());
        note0_8->setText(QString());
        note0_9->setText(QString());
        note0_10->setText(QString());
        note0_11->setText(QString());
        note0_12->setText(QString());
        note0_13->setText(QString());
        note0_14->setText(QString());
        note0_15->setText(QString());
#ifndef QT_NO_TOOLTIP
        progress_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Starting Bar</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menuOption->setTitle(QApplication::translate("MainWindow", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
