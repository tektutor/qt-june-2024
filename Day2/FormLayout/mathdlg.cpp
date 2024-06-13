#include "mathdlg.h"

MathDlg::MathDlg() {
	pFirstNumberLbl = new QLabel("First Number");
	pSecondNumberLbl = new QLabel("Second Number");
	pResultLbl = new QLabel("Result");

	pFirstNumberEdit = new QLineEdit();
	pSecondNumberEdit = new QLineEdit();
	pResultEdit = new QLineEdit();
	pResultEdit->setEnabled ( false );

	pLayout = new QFormLayout();

	pLayout->addRow ( pFirstNumberLbl, pFirstNumberEdit );
	pLayout->addRow ( pSecondNumberLbl, pSecondNumberEdit );
	pLayout->addRow ( pResultLbl, pResultEdit );

	pAddBttn = new QPushButton("Add");
	pSubtractBttn = new QPushButton("Subtract");
	pMultiplyBttn = new QPushButton("Multiply");
	pDivideBttn = new QPushButton("Divide");
	pExitBttn = new QPushButton("Exit");

	pNavigationLayout = new QBoxLayout(QBoxLayout::LeftToRight);
	pNavigationLayout->addStretch();

	pNavigationLayout->addWidget ( pAddBttn );
	pNavigationLayout->addWidget ( pSubtractBttn );
	pNavigationLayout->addWidget ( pMultiplyBttn );
	pNavigationLayout->addWidget ( pDivideBttn );
	pNavigationLayout->addWidget ( pExitBttn );

	pMainLayout = new QVBoxLayout;

	pMainLayout->addLayout ( pLayout );
	pMainLayout->addLayout ( pNavigationLayout );

	setLayout ( pMainLayout );

	connect ( 
		pAddBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onAddButtonClicked() )
	);
	connect ( 
		pSubtractBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onSubtractButtonClicked() )
	);
	connect ( 
		pMultiplyBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onMultiplyButtonClicked() )
	);
	connect ( 
		pDivideBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onDivideButtonClicked() )
	);
	connect ( 
		pExitBttn,
		SIGNAL ( clicked() ),
		this,
		SLOT ( close() ) 
	);
}

void MathDlg::onAddButtonClicked() {
	qDebug() << "Add button clicked ...";

	QString firstNumberStr = pFirstNumberEdit->text();
	QString secondNumberStr = pSecondNumberEdit->text();

	double firstNumber = firstNumberStr.toDouble();
	double secondNumber = secondNumberStr.toDouble();
	double result = firstNumber + secondNumber;

	QString resultStr;
	resultStr.setNum( result);

	pResultEdit->setText ( resultStr );
}


void MathDlg::onSubtractButtonClicked() {
	qDebug() << "Subtract button clicked ...";

	QString firstNumberStr = pFirstNumberEdit->text();
	QString secondNumberStr = pSecondNumberEdit->text();

	double firstNumber = firstNumberStr.toDouble();
	double secondNumber = secondNumberStr.toDouble();
	double result = firstNumber - secondNumber;

	QString resultStr;
	resultStr.setNum( result);

	pResultEdit->setText ( resultStr );
}

void MathDlg::onMultiplyButtonClicked() {
	qDebug() << "Multiply button clicked ...";

	QString firstNumberStr = pFirstNumberEdit->text();
	QString secondNumberStr = pSecondNumberEdit->text();

	double firstNumber = firstNumberStr.toDouble();
	double secondNumber = secondNumberStr.toDouble();
	double result = firstNumber * secondNumber;

	QString resultStr;
	resultStr.setNum( result);

	pResultEdit->setText ( resultStr );
}

void MathDlg::onDivideButtonClicked() {
	qDebug() << "Divide button clicked ...";

	QString firstNumberStr = pFirstNumberEdit->text();
	QString secondNumberStr = pSecondNumberEdit->text();

	double firstNumber = firstNumberStr.toDouble();
	double secondNumber = secondNumberStr.toDouble();
	double result = firstNumber / secondNumber;

	QString resultStr;
	resultStr.setNum( result);

	pResultEdit->setText ( resultStr );
}

MathDlg::~MathDlg() {

}
