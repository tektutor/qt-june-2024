#ifndef DLG_H 
#define DLG_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QDebug>

class Dlg : public QDialog {
Q_OBJECT
private:
	QCheckBox *pQtWidgets, *pQML;
	QRadioButton *pOnline, *pinPerson;
private slots:
	void onCheckBoxSelected(bool);
	void onRadioButtonSelected(bool);

public:
	Dlg();
	~Dlg();

};

#endif /* DLG_H */
