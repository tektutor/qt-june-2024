#ifndef __BOXDLG__
#define __BOXDLG__

#include <QDialog>
#include <QBoxLayout>
#include <QPushButton>

class BoxDlg : public QDialog {
Q_OBJECT
private: 
	QPushButton *pBttn1, *pBttn2, *pBttn3;
	QBoxLayout *pLayout;
public:
	BoxDlg();
	~BoxDlg();
};

#endif /* __BOXDLG__ */
