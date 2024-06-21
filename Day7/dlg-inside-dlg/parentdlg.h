#ifndef PARENTDLG_H
#define PARENTDLG_H

#include <QMainWindow>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QTextEdit>
#include "childdlg.h"

class ParentDlg : public QMainWindow {
Q_OBJECT
private:
	ChildDlg *pChildDlg;
	QMdiArea *pMdiArea;

public:
	ParentDlg();
	~ParentDlg();
};

#endif /* PARENTDLG_H */
