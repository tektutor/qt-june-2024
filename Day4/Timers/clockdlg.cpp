#include "clockdlg.h"

ClockDlg::ClockDlg() {
	pTimer = new QTimer();
	pTimer->setInterval(1000); //1000 milliseconds makes 1 second

	pHoursLabel = new QLabel("");	
	pSeparator1 = new QLabel("");
	pMinutesLabel = new QLabel("");	
	pSeparator2 = new QLabel("");
	pSecondsLabel = new QLabel("");	

	pLayout = new QHBoxLayout;
	pLayout->addWidget ( pHoursLabel );
	pLayout->addWidget ( pSeparator1 );
	pLayout->addWidget ( pMinutesLabel );
	pLayout->addWidget ( pSeparator2 );
	pLayout->addWidget ( pSecondsLabel );

	setLayout ( pLayout );

	connect (
		pTimer,
		SIGNAL( timeout() ),
		this,
		SLOT( onTimerTriggered() )

	);

	QTime time = QTime::currentTime();

	hours = time.hour();
	mins  = time.minute();
	secs  = time.second();

	QString tmp;
	tmp.setNum( hours );
	pHoursLabel->setText( tmp  );
	tmp.setNum( mins );
	pMinutesLabel->setText( tmp );
	tmp.setNum( secs );
	pSecondsLabel->setText( tmp );
	pTimer->start();

	setFont ( QFont("digital-7", 100 ) );
}

void ClockDlg::onTimerTriggered() {
	secs = pSecondsLabel->text().toInt();		

	if ( secs < 59 )
		++secs;
	else {
		secs = 0;
		mins = pMinutesLabel->text().toInt();
		if ( mins < 59 ) 
			++mins;
		else {
			mins=0;
			hours = pHoursLabel->text().toInt();
			if ( hours < 23 )
				++hours;
			else {
				hours = 0;
			}
		}
	}

	QString tmp;
	tmp.setNum( hours );
	pHoursLabel->setText ( tmp );
	tmp.setNum( mins );
	pMinutesLabel->setText ( tmp );
	tmp.setNum ( secs);
	pSecondsLabel->setText ( tmp );
}

ClockDlg::~ClockDlg() {

}
