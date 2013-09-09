#ifndef ENTRYDC_H
#define ENTRYDC_H

#include <QDialog>

namespace Ui {
class EntryDC;
}

class EntryDC : public QDialog
{
    Q_OBJECT
    
public:
    explicit EntryDC(QWidget *parent = 0);
    ~EntryDC();
    
private:
    Ui::EntryDC *ui;
};

#endif // ENTRYDC_H
