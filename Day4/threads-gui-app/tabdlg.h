#ifndef __TABDLG_H
#define __TABDLG_H

#include <QDialog>
#include <QHBoxLayout>
#include <QListWidget>
#include <QString>

#include "thread.h"

class TabDlg : public QDialog {
Q_OBJECT
private:
	QListWidget *pListWidget;
	QHBoxLayout *pLayout;
	Thread *pThread;
	QString name;
private slots:
	void startThread(QString);
	void stopThread(QString);
	void onThreadMessage(QString);
signals:
public:
	TabDlg(QString);
	~TabDlg();
};
#endif /** __TABDLG_H */
