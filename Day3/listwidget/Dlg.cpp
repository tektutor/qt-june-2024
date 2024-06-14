#include "dlg.h"

Dlg::Dlg() {
	pLayout = new QHBoxLayout;

	pListWidget = new QListWidget;
	pLayout->addWidget ( pListWidget );
	setLayout ( pLayout );

	pListWidget->addItem ( "Line 1" );
	pListWidget->setCurrentRow(0);

	pListWidget->addItem ( "Line 2" );
	pListWidget->setCurrentRow(1);
	QThread::sleep(3);

	pListWidget->addItem ( "Line 3" );
	pListWidget->setCurrentRow(2);
	QThread::sleep(3);
}

Dlg::~Dlg() {
}
