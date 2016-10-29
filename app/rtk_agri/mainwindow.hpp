#include "include_qt.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
    QWidget *centralWidget;
    QPushButton *RoverButton;
    QPushButton *BasestationButton;
    QPushButton *QuitterButton;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
    void setupUi();
    void retranslateUi();
};
