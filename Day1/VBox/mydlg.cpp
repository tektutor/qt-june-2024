#include "mydlg.h"


MyDlg::MyDlg() {

    //arranging widgets from top to bottom orientation
    pLayout = new QVBoxLayout();

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");
    pBttn4 = new QPushButton("Button 4");
    pBttn5 = new QPushButton("Button 5");

    pBttn1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pBttn5->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    pLayout->addWidget( pBttn1 );
    pLayout->addWidget( pBttn2 );
    pLayout->addWidget( pBttn3 );
    pLayout->addWidget( pBttn4 );
    pLayout->addWidget( pBttn5 );

    setLayout( pLayout );

    setMinimumHeight(500);
    setMinimumWidth(500);

    setMaximumWidth(1000);
    setMaximumHeight(1000);
}

MyDlg::~MyDlg() {

}
