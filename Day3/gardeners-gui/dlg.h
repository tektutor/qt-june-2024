#ifndef __DLG_H
#define __DLG_H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QListWidget>
#include <QLabel>

#include "gardener.h"

class Dlg : public QDialog {
Q_OBJECT
private:
	QListWidget *pListWidget;
	QVBoxLayout *pMainLayout;
	QBoxLayout *pNavigationLayout;
	QPushButton *pStartBttn, *pExitBttn;
	QSpinBox *pSpinBox;

	Gardener *pDigger, *pPlanter, *pFiller;
private slots:
	void onStartButtonClicked();
	void onExitButtonClicked();
	void onThreadMsgReceived(QString);
signals:
	void updateSaplingCount(int);
public:
	Dlg();
	~Dlg();
};

#endif /* _DLG_H */
