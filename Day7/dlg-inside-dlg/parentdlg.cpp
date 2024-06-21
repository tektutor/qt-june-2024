#include "parentdlg.h"

ParentDlg::ParentDlg() {
	pMdiArea = new QMdiArea(this);	

	setCentralWidget ( pMdiArea );

	QMdiSubWindow *pMdiSubWindow1 = new QMdiSubWindow;
	pMdiSubWindow1->setWidget ( new QTextEdit() );

	QMdiSubWindow *pMdiSubWindow2 = new QMdiSubWindow;
	pMdiSubWindow2->setWidget ( new QTextEdit() );

	QMdiSubWindow *pMdiSubWindow3 = new QMdiSubWindow;
	pMdiSubWindow3->setWidget ( new QTextEdit() );

	QMdiSubWindow *pMdiSubWindow4 = new QMdiSubWindow;
	pMdiSubWindow4->setWidget ( new QTextEdit() );

	pMdiArea->addSubWindow( pMdiSubWindow1 );
	pMdiArea->addSubWindow( pMdiSubWindow2 );
	pMdiArea->addSubWindow( pMdiSubWindow3 );
	pMdiArea->addSubWindow( pMdiSubWindow4 );
	
	setWindowTitle("Parent dlg");
}

ParentDlg::~ParentDlg() {

}
