#ifndef CLOCKDLG_H
#define CLOCKDLG_H

#include <QDialog>
#include <QLabel>
#include <QHBoxLayout>
#include <QTimer>
#include <QTime>

class ClockDlg : public QDialog {
Q_OBJECT
private:
	QTimer *pTimer;
	QLabel *pHoursLabel, *pMinutesLabel, *pSecondsLabel;
	QLabel *pSeparator1, *pSeparator2;
	QHBoxLayout *pLayout;

	int hours, mins, secs;
	
private slots:
	void onTimerTriggered();
signals:
public:
	ClockDlg();
	~ClockDlg();
};

#endif /* CLOCKDLG_H */
