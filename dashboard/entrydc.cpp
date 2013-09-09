#include "entrydc.h"
#include "ui_entrydc.h"

EntryDC::EntryDC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EntryDC)
{
    ui->setupUi(this);
}

EntryDC::~EntryDC()
{
    delete ui;
}
