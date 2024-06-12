#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    pLayout = new QHBoxLayout;

    pBttn1  = new QPushButton("Button 1");
    pBttn2  = new QPushButton("Button 2");
    pBttn3  = new QPushButton("Button 2");

    pLayout->addWidget(pBttn1);

    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);

    setLayout(pLayout);

    //events<
    connect(
        pBttn1,
        SIGNAL( clicked(bool)),
        this,
        SLOT( onButton1Clicked() )
    );
    connect(
        pBttn2,
        SIGNAL( clicked(bool)),
        this,
        SLOT( onButton2Clicked() )
    );
    connect(
        pBttn3,
        SIGNAL( clicked(bool)),
        this,
        SLOT( onButton3Clicked() )
    );
}

void Dialog::onButton1Clicked() {
    qDebug() << "Button 1 clicked ...";
}


void Dialog::onButton2Clicked() {
    qDebug() << "Button 2 clicked ...";
}

void Dialog::onButton3Clicked() {
    qDebug() << "Button 3 clicked ...";
}


Dialog::~Dialog() {}
