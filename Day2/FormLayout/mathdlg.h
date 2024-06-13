#ifndef __MATHDLG__H 
#define __MATHDLG__H

#include <QDialog>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class MathDlg : public QDialog {
Q_OBJECT
private slots:
	void onAddButtonClicked();
	void onSubtractButtonClicked();
	void onMultiplyButtonClicked();
	void onDivideButtonClicked();
private:
	QFormLayout *pLayout;	
	QLabel *pFirstNumberLbl, *pSecondNumberLbl, *pResultLbl;	
	QLineEdit *pFirstNumberEdit, *pSecondNumberEdit, *pResultEdit; 
	QPushButton *pAddBttn, *pSubtractBttn, *pMultiplyBttn, *pDivideBttn, *pExitBttn;

	QBoxLayout *pNavigationLayout;

	QVBoxLayout *pMainLayout;
public:
	MathDlg();
	~MathDlg();
};

#endif /* __MATHDLG__H */
