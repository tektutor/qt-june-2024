#ifndef DLG_H
#define DLG_H

#include <QDialog>
#include <QMessageBox>
#include <QTimer>
#include <QDebug>

class Dlg : public QDialog {
Q_OBJECT
private:
	QTimer *pTimer1;
	QMessageBox *pMsgBox;
private slots:
	void onTimer1Triggered();
	void closeMsgBox();
public:
	Dlg();
};

#endif
