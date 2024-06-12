#include "dialog.h"

Dialog::Dialog()
{
    pBttn1 = new QPushButton ("Button 1");
    pBttn2 = new QPushButton ("Button 2");
    pBttn3 = new QPushButton ("Button 3");
    pBttn4 = new QPushButton ("Button 4");

    pBttn5 = new QPushButton ("Button 1");
    pBttn6 = new QPushButton ("Button 2");
    pBttn7 = new QPushButton ("Button 3");
    pBttn8 = new QPushButton ("Button 4");

    pLayout = new QGridLayout();

    pLayout->addWidget(pBttn1, 0, 0);
    pLayout->addWidget(pBttn2, 0, 1);
    pLayout->addWidget(pBttn3, 0, 2);
    pLayout->addWidget(pBttn4, 0, 3);

    pLayout->addWidget(pBttn5, 1, 0);
    pLayout->addWidget(pBttn6, 1, 1);
    pLayout->addWidget(pBttn7, 1, 2);
    pLayout->addWidget(pBttn8, 1, 3);

    //pLayout->setSpacing(100);

    setLayout(pLayout);

}

Dialog::~Dialog() {}
