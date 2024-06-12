#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>

class MyDlg : public QDialog
{
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4, *pBttn5;
    QVBoxLayout *pLayout;

public:
    MyDlg();
    ~MyDlg();
};
#endif // MYDLG_H
