#include "maindlg.h"

MainDlg::MainDlg() {
	pPrevBttn = new QPushButton("Prev");
	pNextBttn = new QPushButton("Next");
	pExitBttn = new QPushButton("Exit");

	pNavigationLayout = new QBoxLayout(QBoxLayout::LeftToRight);

	pNavigationLayout->addStretch();
	pNavigationLayout->addWidget(pPrevBttn);
	pNavigationLayout->addWidget(pNextBttn);
	pNavigationLayout->addWidget(pExitBttn);

	pStackedLayout = new QStackedLayout;

	pHBoxDlg = new HBoxDlg;
	pVBoxDlg = new VBoxDlg;
	pBoxDlg = new BoxDlg;

	qDebug() << "Widget count = " << pStackedLayout->count();
	pStackedLayout->addWidget ( pHBoxDlg );
	qDebug() << "Widget count = " << pStackedLayout->count();
	pStackedLayout->addWidget ( pVBoxDlg );
	qDebug() << "Widget count = " << pStackedLayout->count();
	pStackedLayout->addWidget ( pBoxDlg );
	qDebug() << "Widget count = " << pStackedLayout->count();

	pMainLayout = new QVBoxLayout;

	pMainLayout->addLayout (pStackedLayout); 
	pMainLayout->addLayout (pNavigationLayout); 

	setLayout ( pMainLayout );

	connect (
		pPrevBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onPrevButtonClicked() )
	);
	connect (
		pNextBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onNextButtonClicked() )
	);
	connect (
		pExitBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onExitButtonClicked() )
	);

	pPrevBttn->setFocus( );
}

void MainDlg::onPrevButtonClicked() {
	qDebug() << "Prev button clicked ...";

	int index = pStackedLayout->currentIndex();
	qDebug() << "Index = " << index;
	if ( HBOX != index ) {
		qDebug() << "inside if ";
		pStackedLayout->setCurrentIndex( --index );
	}
}

void MainDlg::onNextButtonClicked() {
	qDebug() << "Next button clicked ...";
	int index = pStackedLayout->currentIndex();

	qDebug() << "Index = " << index;

	if ( BOX != index ) {
		qDebug() << "inside if ";
		pStackedLayout->setCurrentIndex( ++index );
	}
}

void MainDlg::onExitButtonClicked() {
	qDebug() << "Exit button clicked ...";
	QDialog::close();
}

MainDlg::~MainDlg() {
}
