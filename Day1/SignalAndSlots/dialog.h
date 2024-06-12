#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>


class Dialog : public QDialog
{
    Q_OBJECT

    QHBoxLayout *pLayout;
    QPushButton *pBttn1, *pBttn2, *pBttn3;

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private slots:
    void onButton1Clicked();
    void onButton2Clicked();
    void onButton3Clicked();
};
#endif // DIALOG_H
