#ifndef __HBOXDLG__H
#define __HBOXDLG__H

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>

class HBoxDlg : public QDialog {
Q_OBJECT
private: 
	QPushButton *pBttn1, *pBttn2, *pBttn3;
	QHBoxLayout *pLayout;
public:
	HBoxDlg();
	~HBoxDlg();
};

#endif /* __HBOXDLG__H */
