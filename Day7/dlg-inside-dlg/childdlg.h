#ifndef CHILDDLG_H
#define CHILDDLG_H

#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>

class ChildDlg : public QDialog{
Q_OBJECT
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3;
public:
	ChildDlg(QWidget *parent);
	~ChildDlg();
};

#endif /* CHILDDLG_H */
