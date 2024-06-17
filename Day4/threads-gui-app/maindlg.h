#ifndef __MAINDLG_H
#define __MAINDLG_H

#include <QDialog>
#include <QTabWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>

#include "tabdlg.h"

class MainDlg : public QDialog {
Q_OBJECT
private:
	QTabWidget *pTabWidget;
	QPushButton *pCreateBttn, *pStartBttn, *pStopBttn, *pExitBttn;
	QHBoxLayout *pNavigationLayout;
	QVBoxLayout *pMainLayout;
private slots:
	void onCreateBttnClicked();
	void onStartBttnClicked();
	void onStopBttnClicked();
signals:
	void startThread(QString);
	void stopThread(QString);

public:
	MainDlg();
	~MainDlg();

};

#endif /* __MAINDLG_H */
