#include "dialog.h"

Dialog::Dialog()
{
    pLayout = new QBoxLayout(QBoxLayout::LeftToRight); //Works like HBoxLayout
    //pLayout = new QBoxLayout(QBoxLayout::TopToBottom); //Works like VBoxLayout
    //pLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    //pLayout = new QBoxLayout(QBoxLayout::BottomToTop);

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");
    pBttn4 = new QPushButton("Button 4");
    pBttn5 = new QPushButton("Button 5");

    pLayout->addWidget(pBttn1);
    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);
    pLayout->addWidget(pBttn4);
    pLayout->addWidget(pBttn5);

    setLayout(pLayout);
}

Dialog::~Dialog() {

}
