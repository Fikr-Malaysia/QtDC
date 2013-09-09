#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class Dashboard;
}

class Dashboard : public QWidget
{
    Q_OBJECT
    
public:
    explicit Dashboard(QWidget *parent = 0);
    ~Dashboard();
    
private slots:
    void on_actionRegister_new_branch_triggered();

private:
    Ui::Dashboard *ui;
    QSqlQueryModel *model;
};

#endif // DASHBOARD_H
