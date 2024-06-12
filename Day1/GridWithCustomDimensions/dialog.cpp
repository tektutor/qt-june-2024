#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{

    setWindowTitle( "Grid Layout with Custom Dimensions");

    rows = QInputDialog::getInt(this,"Rows?",0,0,3,10);
    cols = QInputDialog::getInt(this,"Columns?",0,0,3,10);

    pLayout = new QGridLayout;

    int index = 0;
    QString buttonCaption;
    QPushButton *pBttn;

    for (int row=0; row < rows; ++row ) {
        for (int col=0; col < cols; ++col ) {
            buttonCaption.setNum(++index);
            pBttn = new QPushButton(buttonCaption);
            pBttn->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
            pLayout->addWidget(pBttn, row, col);
        }
    }

    setLayout (pLayout);

    setMinimumHeight(100);
    setMinimumWidth(100);
    setMaximumWidth(500);
    setMaximumHeight(500);
}

Dialog::~Dialog() {}
