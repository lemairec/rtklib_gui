#include "include_qt.hpp"
#include "mainwindow.hpp"
#include "rtklib.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    MainWindow m;
    //m.showFullScreen();
    m.showMaximized();
    
    return a.exec();
}

int showmsg(char *format,...) {return 0;}
void settspan(gtime_t ts, gtime_t te) {}
void settime(gtime_t time) {}
