#include "mainwindow.hpp"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
{
    setupUi();
    retranslateUi();
    
    QObject::connect(QuitterButton,SIGNAL(clicked()),qApp,SLOT(quit()));
    QObject::connect(RoverButton,SIGNAL(clicked()),this,SLOT(OuvreRover()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupUi(){
    if (this->objectName().isEmpty())
        this->setObjectName(QString::fromUtf8("MainWindow"));
    this->resize(800, 480);
    
    
    centralWidget = new QWidget(this);
    this->setObjectName(QString::fromUtf8("centralWidget"));
    this->setCentralWidget(centralWidget);
    
    RoverButton = new QPushButton(centralWidget);
    RoverButton->setObjectName(QString::fromUtf8("RoverButton"));
    RoverButton->setGeometry(QRect(20, 100, 261, 171));
    QFont font;
    font.setPointSize(16);
    font.setBold(true);
    font.setWeight(75);
    RoverButton->setFont(font);
    
    BasestationButton = new QPushButton(centralWidget);
    BasestationButton->setObjectName(QString::fromUtf8("BasestationButton"));
    BasestationButton->setGeometry(QRect(320, 100, 251, 171));
    BasestationButton->setFont(font);
    
    QuitterButton = new QPushButton(centralWidget);
    QuitterButton->setObjectName(QString::fromUtf8("QuitterButton"));
    QuitterButton->setGeometry(QRect(620, 145, 141, 81));
    QFont font2;
    font2.setPointSize(14);
    font2.setBold(true);
    font2.setWeight(75);
    QuitterButton->setFont(font2);
}

void MainWindow::retranslateUi()
{
    this->setWindowTitle(QApplication::translate("MainWindow", "RTKLIB for Raspberry", 0));
    RoverButton->setText(QApplication::translate("MainWindow", "ROVER"));
    BasestationButton->setText(QApplication::translate("MainWindow", "BASESTATION", 0));
    //TimeEdit->setText(QApplication::translate("MainWindow", "TIME:", 0, QApplication::UnicodeUTF8));
    //TimeRetourEdit->setText(QString());
    QuitterButton->setText(QApplication::translate("MainWindow", "CLOSE GUI", 0));
    /*textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
                                              "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
                                              "p, li { white-space: pre-wrap; }\n"
                                              "</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
                                              "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600;\">RTKLIB</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    Rtkliblabel->setText(QString());
    ensglabel->setText(QString());
    ensgIconlabel->setText(QString());
    HelpButton->setText(QApplication::translate("MainWindow", "HELP", 0, QApplication::UnicodeUTF8));
    PowerOFFButton->setText(QApplication::translate("MainWindow", "POWER OFF", 0, QApplication::UnicodeUTF8));*/
}
