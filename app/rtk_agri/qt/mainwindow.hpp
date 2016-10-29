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
    
public slots:
    void OuvreOptionsBaseRtk();
    void OuvreOptionsRover();

private:
    void setupUi();
    void retranslateUi();
};
