#ifndef __VBOXDLG__V
#define __VBOXDLG__V

#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>

class VBoxDlg : public QDialog {
Q_OBJECT
private: 
	QPushButton *pBttn1, *pBttn2, *pBttn3;
	QVBoxLayout *pLayout;
public:
	VBoxDlg();
	~VBoxDlg();
};

#endif /* __VBOXDLG__V */
