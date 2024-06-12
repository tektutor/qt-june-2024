#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QBoxLayout>
#include <QPushButton>

class Dialog : public QDialog
{
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4, *pBttn5;
    QBoxLayout *pLayout;

public:
    Dialog();
    ~Dialog();
};
#endif // DIALOG_H
