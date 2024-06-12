#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>
#include <QInputDialog>
#include <QString>

class Dialog : public QDialog
{
    Q_OBJECT

    int rows;
    int cols;

    QGridLayout *pLayout;

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
