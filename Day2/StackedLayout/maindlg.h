#ifndef __MAINDLG__H  
#define __MAINDLG__H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QStackedLayout>

#include "hboxdlg.h"
#include "vboxdlg.h"
#include "boxdlg.h"

#define HBOX 0
#define VBOX 1
#define BOX  2

class MainDlg : public QDialog {
Q_OBJECT
private:
	QPushButton *pPrevBttn, *pNextBttn, *pExitBttn;
	QBoxLayout *pNavigationLayout;
	QStackedLayout *pStackedLayout;

	HBoxDlg *pHBoxDlg;
	VBoxDlg *pVBoxDlg;
	BoxDlg *pBoxDlg;
	
	QVBoxLayout *pMainLayout;
private slots:
	void onPrevButtonClicked();
	void onNextButtonClicked();
	void onExitButtonClicked();
public:
	MainDlg();
	~MainDlg();
};

#endif /* __MAINDLG__H */

