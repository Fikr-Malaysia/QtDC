#include "dashboard.h"
#include "ui_dashboard.h"
#include "entrydc.h"

Dashboard::Dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);
    model->setQuery("select branchid as `ID`,name as `Branch` from branch order by branchid");
    model->query();
    ui->tableBranch->setModel(model);
    ui->tableBranch->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->btnRegisterBranch->setDefaultAction(ui->actionRegister_new_branch);
    ui->btnDelete->setDefaultAction(ui->actionDelete_Branch);

}

Dashboard::~Dashboard()
{
    delete ui;
}



void Dashboard::on_actionRegister_new_branch_triggered()
{
    EntryDC* entryDC = new EntryDC;
    entryDC->exec();
}
