#include "dlg.h"

Dlg::Dlg() {
	pStartBttn = new QPushButton("Start");
	pExitBttn = new QPushButton("Exit");

	pNavigationLayout = new QBoxLayout(QBoxLayout::LeftToRight);
	pNavigationLayout->addStretch();

	pNavigationLayout->addWidget( pStartBttn );
	pNavigationLayout->addWidget( pExitBttn );

	pListWidget = new QListWidget();
	pSpinBox = new QSpinBox();
	pSpinBox->setMinimum(5);
	pSpinBox->setMaximum(100);

	QLabel *pLabel = new QLabel("Saplings to be planted");

	QBoxLayout *pTopLayout = new QBoxLayout(QBoxLayout::LeftToRight);
	pTopLayout->addStretch();
	pTopLayout->addWidget ( pLabel );
	pTopLayout->addWidget( pSpinBox );

	pMainLayout = new QVBoxLayout;

	pMainLayout->addLayout ( pTopLayout );
	pMainLayout->addWidget ( pListWidget );
	pMainLayout->addLayout ( pNavigationLayout );

	setLayout( pMainLayout );

	connect (
		pStartBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onStartButtonClicked() )
	);
	connect (
		pExitBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onExitButtonClicked() )
	);

	pDigger  = new Gardener( TYPE_OF_GARDENER::DIGGER );
	pPlanter = new Gardener( TYPE_OF_GARDENER::PLANTER);
	pFiller  = new Gardener( TYPE_OF_GARDENER::FILLER );

	connect (
		pDigger,
		SIGNAL ( threadMessage( QString ) ),
		this,
		SLOT ( onThreadMsgReceived( QString ) )
	);
	connect (
		pPlanter,
		SIGNAL ( threadMessage( QString ) ),
		this,
		SLOT ( onThreadMsgReceived( QString ) )
	);
	connect (
		pFiller,
		SIGNAL ( threadMessage( QString ) ),
		this,
		SLOT ( onThreadMsgReceived( QString ) )
	);

	connect ( 
		this,
		SIGNAL ( updateSaplingCount(int) ),
		pDigger,
		SLOT ( onUpdateSaplingCount(int) )
		
	);

	pPlanter->start();
	pFiller->start();
	pDigger->start();


}

void Dlg::onStartButtonClicked() {
	qDebug() << "Start button clicked ";
	emit updateSaplingCount( pSpinBox->value() );
	Gardener::startGardeningActivities();
}

void Dlg::onThreadMsgReceived(QString msg) {
	pListWidget->addItem( msg );
	pListWidget->setCurrentRow ( pListWidget->count()-1 );
}

void Dlg::onExitButtonClicked() {
	qDebug() << "Exit button clicked ";
	close();
}

Dlg::~Dlg() {
}
