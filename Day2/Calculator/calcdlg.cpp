#include "calcdlg.h"

CalculatorDlg::CalculatorDlg() {
	pBttn0 = new QPushButton("0");	
	pBttn1 = new QPushButton("1");	
	pBttn2 = new QPushButton("2");	
	pBttn3 = new QPushButton("3");	
	pBttn4 = new QPushButton("4");	
	pBttn5 = new QPushButton("5");	
	pBttn6 = new QPushButton("6");	
	pBttn7 = new QPushButton("7");	
	pBttn8 = new QPushButton("8");	
	pBttn9 = new QPushButton("9");	
	pBttnDot = new QPushButton(".");

	pAddBttn = new QPushButton("+");
	pSubtractBttn = new QPushButton("-");
	pMultiplyBttn = new QPushButton("*");
	pDivideBttn = new QPushButton("/");
	pEqualBttn = new QPushButton("=");
	pClearBttn = new QPushButton("C");

	QGridLayout *pGrid = new QGridLayout;
	pGrid->addWidget( pClearBttn, 0, 0 );
	pGrid->addWidget( pBttn7, 1, 0 );
	pGrid->addWidget( pBttn8, 1, 1 );
	pGrid->addWidget( pBttn9, 1, 2 );
	pGrid->addWidget( pBttn4, 2, 0 );
	pGrid->addWidget( pBttn5, 2, 1 );
	pGrid->addWidget( pBttn6, 2, 2 );
	pGrid->addWidget( pBttn1, 3, 0 );
	pGrid->addWidget( pBttn2, 3, 1 );
	pGrid->addWidget( pBttn3, 3, 2 );
	pGrid->addWidget( pBttn0, 4, 0 );
	pGrid->addWidget( pBttnDot, 4, 1 );
	pGrid->addWidget( pEqualBttn, 4, 2 );

	QVBoxLayout *pOperatorLayout = new QVBoxLayout;
	pOperatorLayout->addSpacing(32);
	pOperatorLayout->addWidget( pAddBttn );
	pOperatorLayout->addWidget( pSubtractBttn );
	pOperatorLayout->addWidget( pMultiplyBttn );
	pOperatorLayout->addWidget( pDivideBttn );

	QHBoxLayout *pHBoxLayout = new QHBoxLayout;
	pHBoxLayout->addLayout( pGrid);
	pHBoxLayout->addLayout( pOperatorLayout);

	pEdit = new QLineEdit;	
	pEdit->setEnabled(false);

	pMainLayout = new QVBoxLayout;

	pMainLayout->addWidget ( pEdit );
	pMainLayout->addLayout ( pHBoxLayout );

	setLayout ( pMainLayout );

	pSignalMapper = new QSignalMapper;

	connect (
		pBttn0, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn1, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn2, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn3, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn4, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn5, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn6, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn7, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn8, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttn9,
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);
	connect (
		pBttnDot, 
		SIGNAL( clicked() ),
		pSignalMapper,
		SLOT ( map() )
	);

	connect ( 
			pClearBttn,
			SIGNAL( clicked() ),
			this,
			SLOT ( onClearButtonClicked() )
	);
	connect ( 
			pAddBttn,
			SIGNAL( clicked() ),
			this,
			SLOT ( onAddButtonClicked() )
	);
	connect ( 
			pSubtractBttn,
			SIGNAL( clicked() ),
			this,
			SLOT ( onSubtractButtonClicked() )
	);
	connect ( 
			pMultiplyBttn,
			SIGNAL( clicked() ),
			this,
			SLOT ( onMultiplyButtonClicked() )
	);
	connect ( 
			pDivideBttn,
			SIGNAL( clicked() ),
			this,
			SLOT ( onDivideButtonClicked() )
	);
	connect ( 
			pEqualBttn,
			SIGNAL( clicked() ),
			this,
			SLOT ( onEqualButtonClicked() )
	);

	pSignalMapper->setMapping( pBttn0, "0" );
	pSignalMapper->setMapping( pBttn1, "1" );
	pSignalMapper->setMapping( pBttn2, "2" );
	pSignalMapper->setMapping( pBttn3, "3" );
	pSignalMapper->setMapping( pBttn4, "4" );
	pSignalMapper->setMapping( pBttn5, "5" );
	pSignalMapper->setMapping( pBttn6, "6" );
	pSignalMapper->setMapping( pBttn7, "7" );
	pSignalMapper->setMapping( pBttn8, "8" );
	pSignalMapper->setMapping( pBttn9, "9" );
	pSignalMapper->setMapping( pBttnDot, "." );

	connect ( 
			pSignalMapper,
			SIGNAL( mappedString(QString) ),
			this,
			SLOT ( onNumberBttnsClicked(QString) ) 
	);
		
}

void CalculatorDlg::onNumberBttnsClicked( QString buttonCaption ) {
	QString txtEdit = pEdit->text();
	txtEdit.append(buttonCaption);
	pEdit->setText ( txtEdit );
}

void CalculatorDlg::onAddButtonClicked() {
	qDebug() << "Add button clicked";
	QString txtEdit = pEdit->text();
	firstNumber = txtEdit.toDouble();
	pEdit->setText("");
	pEdit->clear();
	operation = '+';
}

void CalculatorDlg::onSubtractButtonClicked() {
	qDebug()<< "Subtract button clicked";
	QString txtEdit = pEdit->text();
	firstNumber = txtEdit.toDouble();
	pEdit->setText("");
	pEdit->clear();
	operation = '-';
}
void CalculatorDlg::onMultiplyButtonClicked() {
	qDebug() << "Multiply button clicked";
	QString txtEdit = pEdit->text();
	firstNumber = txtEdit.toDouble();
	pEdit->setText("");
	pEdit->clear();
	operation = '*';
}
void CalculatorDlg::onDivideButtonClicked() {
	qDebug() << "Divide button clicked";
	QString txtEdit = pEdit->text();
	firstNumber = txtEdit.toDouble();
	pEdit->setText("");
	pEdit->clear();
	operation = '/';
}

void CalculatorDlg::onEqualButtonClicked() {
	QString txtEdit = pEdit->text();
	secondNumber = txtEdit.toDouble();
	pEdit->clear();

	switch ( operation ) {
		case '+': {
		  result = firstNumber + secondNumber;
		  QString strResult;
		  strResult.setNum ( result );
		  pEdit->setText("");
		  pEdit->setText ( strResult );
		}
		break;
		case '-': {
		  result = firstNumber - secondNumber;
		  QString strResult;
		  strResult.setNum ( result );
		  pEdit->setText("");
		  pEdit->setText ( strResult );
		}
		break;
		case '*': {
		  result = firstNumber * secondNumber;
		  QString strResult;
		  strResult.setNum ( result );
		  pEdit->setText("");
		  pEdit->setText ( strResult );
		}
		break;
		case '/': {
		  result = firstNumber / secondNumber;
		  QString strResult;
		  strResult.setNum ( result );
		  pEdit->setText("");
		  pEdit->setText ( strResult );
		}
		break;
	}
}

void CalculatorDlg::onClearButtonClicked() {
	pEdit->setText("");
	pEdit->clear();
	operation=' ';
	firstNumber = secondNumber = result = 0.0;
}

CalculatorDlg::~CalculatorDlg() {
}

