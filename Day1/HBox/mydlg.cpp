#include "mydlg.h"

MyDlg::MyDlg() {
    pLayout = new QHBoxLayout();

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");
    pBttn4 = new QPushButton("Button 4");
    pBttn5 = new QPushButton("Button 5");

    pBttn1->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    pBttn2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn5->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    pLayout->addWidget(pBttn1);
    pLayout->addSpacing(50);
    pLayout->addWidget(pBttn2);
    pLayout->addSpacing(50);
    pLayout->addWidget(pBttn3);
    pLayout->addSpacing(50);
    pLayout->addWidget(pBttn4);
    pLayout->addSpacing(50);
    pLayout->addWidget(pBttn5);

    setLayout(pLayout);
}

MyDlg::~MyDlg() {

}
