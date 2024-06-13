#ifndef __CACLDLG__H
#define __CACLDLG__H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QSignalMapper>
#include <QString>

class CalculatorDlg : public QDialog {
Q_OBJECT
private:
	char operation;
	double firstNumber, secondNumber, result;
	QLineEdit *pEdit;
	QPushButton *pBttn0,*pBttn1, *pBttn2, *pBttn3,*pBttn4,*pBttn5;
	QPushButton *pBttn6,*pBttn7, *pBttn8, *pBttn9,*pBttnDot;
	QPushButton *pAddBttn, *pSubtractBttn, *pMultiplyBttn, *pDivideBttn, *pEqualBttn, *pClearBttn;

	QVBoxLayout *pMainLayout;
	QSignalMapper *pSignalMapper;
private slots:
	void onNumberBttnsClicked( QString );
	void onAddButtonClicked();
	void onSubtractButtonClicked();
	void onMultiplyButtonClicked();
	void onDivideButtonClicked();
	void onEqualButtonClicked();
	void onClearButtonClicked();

public:
	CalculatorDlg();
	~CalculatorDlg();
};

#endif /* __CALCDLG__H */
