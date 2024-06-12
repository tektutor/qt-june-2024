#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>

//Arranges the Widgets in Horizontal fashion from left to right direction - Buttons, Labels, checkbox, radibutton, etc
#include <QHBoxLayout>

#include <QPushButton> //Normal windows like button


class MyDlg : public QDialog
{
private:
    QHBoxLayout *pLayout;
    QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4, *pBttn5;
public:
    MyDlg();
    ~MyDlg();
};
#endif // MYDLG_H
