#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{

    QMessageBox::information(this,"Information","Body text");

    QMessageBox::warning(this,"Warning","Body text");

    QMessageBox::critical(this,"Critical","Body text");

    QMessageBox::question(this,"Question","Close the dialog?");
}

Dialog::~Dialog() {}
