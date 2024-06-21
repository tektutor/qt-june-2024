#include "childdlg.h"

ChildDlg::ChildDlg(QWidget *parent)
	: QDialog(parent)
{
	QHBoxLayout *pLayout = new QHBoxLayout;

	pBttn1 = new QPushButton("Button 1");
	pBttn2 = new QPushButton("Button 2");
	pBttn3 = new QPushButton("Button 3");

	pLayout->addWidget(pBttn1);
	pLayout->addWidget(pBttn2);
	pLayout->addWidget(pBttn3);

	setLayout ( pLayout );

	setWindowTitle("Child Dlg");
}

ChildDlg::~ChildDlg() {

}
