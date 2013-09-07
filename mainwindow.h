#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionE_xit_triggered();

    void on_action_Connect_triggered();

    void on_actionLogin_triggered();

    void on_action_About_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *labelStatus;
};

#endif // MAINWINDOW_H
