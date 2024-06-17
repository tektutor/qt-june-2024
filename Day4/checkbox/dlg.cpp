#include "dlg.h"

Dlg::Dlg() {

	pQtWidgets = new QCheckBox("Qt Widgets Framework");
	pQML = new QCheckBox("QML Framework");

	QVBoxLayout *pCheckBoxLayout = new QVBoxLayout;
	pCheckBoxLayout->addWidget ( pQtWidgets );
	pCheckBoxLayout->addWidget ( pQML );


	QGroupBox *pGroup1 = new QGroupBox("Topics Covered");
	pGroup1->setLayout ( pCheckBoxLayout );

	pOnline = new QRadioButton("Online Training");
	pinPerson = new QRadioButton("Classroom Training");

	QVBoxLayout *pRadioButtonLayout = new QVBoxLayout;
	pRadioButtonLayout->addWidget ( pOnline );
	pRadioButtonLayout->addWidget ( pinPerson );

	QGroupBox *pGroup2 = new QGroupBox("Mode of Training");
	pGroup2->setLayout ( pRadioButtonLayout );

	QHBoxLayout *pMainLayout = new QHBoxLayout;
	pMainLayout->addWidget ( pGroup1 );
	pMainLayout->addWidget ( pGroup2 );

	setLayout ( pMainLayout );
}
void Dlg::onCheckBoxSelected(bool isSelected) {

}

void Dlg::onRadioButtonSelected(bool isSelected) {
}

Dlg::~Dlg() {}
