#include "logindialog.h"
#include "ui_logindialog.h"
#include <QDebug>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    qWarning()<<ui->buttonBox->buttonRole(button);
    switch(ui->buttonBox->buttonRole(button))
    {
    case QDialogButtonBox::AcceptRole:
        if(ui->txtUsername->text()=="eko")
        {
            this->accept();
        }
        break;

    case QDialogButtonBox::RejectRole:
        this->reject();
        break;
    }
}
