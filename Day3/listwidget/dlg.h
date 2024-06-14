#ifndef __DLG_H
#define __DLG_H

#include <QDialog>
#include <QListWidget>
#include <QHBoxLayout>
#include <QThread>

class Dlg : public QDialog {
Q_OBJECT
private:
	QListWidget *pListWidget;
	QHBoxLayout *pLayout;
public:
	Dlg();
	~Dlg();
};

#endif /* __DLG_H */
