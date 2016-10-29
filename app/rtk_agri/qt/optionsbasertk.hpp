#ifndef OPTIONS_BASE_RTK
#define OPTIONS_BASE_RTK

#include "include_qt.hpp"

class OptionsBaseRtk : public QDialog
{
    QRadioButton *RTCM2radioButton;
    QRadioButton *RTCM3radioButton;
    QRadioButton *NOVradioButton;
    QRadioButton *OEM3radioButton;
    QRadioButton *UBXradioButton;
    QRadioButton *SS2radioButton;
    QRadioButton *HEMISradioButton;
    QRadioButton *STQradioButton;
    QRadioButton *JAVADradioButton;
    QRadioButton *NVSradioButton;
    QRadioButton *BINEXradioButton;
    QRadioButton *RTCM3OutradioButton;
    QLineEdit *InStreamlineEdit;
    QLineEdit *InStreamlineEdit_2;
    QPushButton *pushButtonDefault1;
    QPushButton *pushButtonDefault2;
    QTextEdit *textEditDefault2;
    QTextEdit *textEditDefault1;

public:
    OptionsBaseRtk(QWidget *parent = 0);
    ~OptionsBaseRtk();
    
    void setupUi();
    void retranslateUi();
};

#endif
