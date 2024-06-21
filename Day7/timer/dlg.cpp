#include "dlg.h"

Dlg::Dlg() {
	pTimer1 = new QTimer;
	pMsgBox = new QMessageBox;
	pMsgBox->setText("Hello");

	connect(
		pTimer1,
		SIGNAL(timeout()),
		this,
		SLOT(onTimer1Triggered())
	);

	pTimer1->start(5000);
}

void Dlg::onTimer1Triggered() {
	qDebug()<< "Timer triggered";
     	QTimer::singleShot(2000, this, &Dlg::closeMsgBox);
	
	pMsgBox->exec();
}	

void Dlg::closeMsgBox() {
	pMsgBox->close();
}
