#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGridLayout>
#include <QPushButton>

class Dialog : public QDialog
{
public:
    Dialog();
    ~Dialog();
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4;
    QPushButton *pBttn5, *pBttn6, *pBttn7, *pBttn8;

    QGridLayout *pLayout;
};
#endif // DIALOG_H
