#include "maindlg.h"

MainDlg::MainDlg() {

	pCreateBttn = new QPushButton("Create Thread");
	pStartBttn = new QPushButton("Start Thread");
	pStopBttn = new QPushButton("Stop Thread");
	pExitBttn = new QPushButton("Exit Thread");

	pNavigationLayout = new QHBoxLayout;
	pNavigationLayout->addStretch();

	pNavigationLayout->addWidget( pCreateBttn );
	pNavigationLayout->addWidget( pStartBttn );
	pNavigationLayout->addWidget( pStopBttn );
	pNavigationLayout->addWidget( pExitBttn );

	pTabWidget = new QTabWidget();

	pMainLayout = new QVBoxLayout;

	pMainLayout->addWidget ( pTabWidget );
	pMainLayout->addLayout ( pNavigationLayout );

	setLayout ( pMainLayout );

	setWindowTitle ( "Multi-thread GUI App" );
	
	setMinimumHeight( 500 );
	setMinimumWidth( 800 );
	setMaximumHeight( 1000 );
	setMaximumWidth( 1200 );

	connect (
			pCreateBttn,
			SIGNAL ( clicked() ),
			this,
			SLOT ( onCreateBttnClicked() )
	);
	connect (
			pStartBttn,
			SIGNAL ( clicked() ),
			this,
			SLOT ( onStartBttnClicked() )
	);
	connect (
			pStopBttn,
			SIGNAL ( clicked() ),
			this,
			SLOT ( onStopBttnClicked() )
	);
	connect (
			pExitBttn,
			SIGNAL ( clicked() ),
			this,
			SLOT ( close() )
	);

}

void MainDlg::onCreateBttnClicked() {
	qDebug() << "Create button clicked ...";

	QString tabCaption = "Thread ";
	QString tabCount;
	tabCount.setNum( pTabWidget->count() );
	tabCaption.append( tabCount );

	TabDlg *pTabDlg = new TabDlg(tabCaption);	
	pTabWidget->addTab ( pTabDlg, tabCaption );

	connect (
		this,
		SIGNAL ( startThread(QString) ),
		pTabDlg,
		SLOT ( startThread(QString) )
	);
	connect (
		this,
		SIGNAL ( stopThread(QString) ),
		pTabDlg,
		SLOT ( stopThread(QString) )
	);
}

void MainDlg::onStartBttnClicked() {
	qDebug() << "Start button clicked ...";

	QString threadName = pTabWidget->tabText( pTabWidget->currentIndex() );
	emit startThread(threadName);
}

void MainDlg::onStopBttnClicked() {
	qDebug() << "Stop button clicked ...";

	QString threadName = pTabWidget->tabText( pTabWidget->currentIndex() );
	emit stopThread(threadName);
}

MainDlg::~MainDlg() {
}
