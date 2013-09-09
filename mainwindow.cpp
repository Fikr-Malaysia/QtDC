#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "logindialog.h"
#include "initdb.h"
#include "dashboard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labelStatus = new QLabel("Ready");
    ui->statusBar->addWidget(labelStatus);

    if (!QSqlDatabase::drivers().contains("QSQLITE"))
        QMessageBox::critical(this, "Unable to load database", "This demo needs the SQLITE driver");

    // initialize the database
    qWarning() << "Begin initDB";
    QSqlError err = initDb();

    if (err.type() != QSqlError::NoError) {
        showError(err);
        return;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionE_xit_triggered()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle(tr("FikrPos Distribution Centre"));
    msgBox.setText(tr("Are you sure you want to quit?"));
    msgBox.setStandardButtons(QMessageBox::No|QMessageBox::Yes);
    msgBox.setDefaultButton(QMessageBox::Yes);
    if(msgBox.exec()==QMessageBox::Yes)
    {
        qApp->quit();
    }
}

void MainWindow::on_action_Connect_triggered()
{

}

void MainWindow::on_actionLogin_triggered()
{
    LoginDialog *login = new LoginDialog;
    login->exec();

}

void MainWindow::on_action_About_triggered()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle(tr("FikrPos Distribution Centre"));
    msgBox.setText(tr("Programmer : Eko SW\nLife is good"));
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}

void MainWindow::showError(const QSqlError &err)
{
    QMessageBox::critical(this, "Unable to initialize Database",
                "Error initializing database: " + err.text());
}

void MainWindow::on_actionDashboard_triggered()
{
    this->setCentralWidget(NULL);
    this->setCentralWidget(new Dashboard);
}
