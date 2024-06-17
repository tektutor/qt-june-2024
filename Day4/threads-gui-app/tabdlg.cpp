#include "tabdlg.h"

TabDlg::TabDlg(QString name) {
	this->name = name;
	pListWidget = new QListWidget;

	pLayout = new QHBoxLayout;
	pLayout->addWidget ( pListWidget );

	setLayout( pLayout );

	pThread = new Thread(name);

	connect ( 
			pThread,
			SIGNAL( threadMessage( QString ) ),
			this,
			SLOT ( onThreadMessage( QString ) )
	);
}

void TabDlg::startThread(QString name) {
	if ( 0 == this->name.compare( name ) )
		pThread->start();
}

void TabDlg::stopThread(QString name) {
	if ( 0 == this->name.compare( name ) )
		pThread->terminate();
}

void TabDlg::onThreadMessage(QString msg) {
	pListWidget->addItem ( msg );
	pListWidget->setCurrentRow ( pListWidget->count() -1 );
}

TabDlg::~TabDlg() {

}
