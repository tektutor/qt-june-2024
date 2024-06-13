#include "boxdlg.h"

BoxDlg::BoxDlg() {
	pBttn1 = new QPushButton("Button 1");
	pBttn2 = new QPushButton("Button 2");
	pBttn3 = new QPushButton("Button 3");

	pLayout = new QBoxLayout(QBoxLayout::BottomToTop);

	pLayout->addWidget ( pBttn1 );
	pLayout->addWidget ( pBttn2 );
	pLayout->addWidget ( pBttn3 );

	setLayout ( pLayout );

	setWindowTitle ( "Box Layout" );
}

BoxDlg::~BoxDlg() {
}
