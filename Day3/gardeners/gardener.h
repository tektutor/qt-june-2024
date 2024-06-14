#ifndef __GARDENER_H
#define __GARDENER_H

#include <QThread>
#include <QString>
#include <QDebug>
#include <QWaitCondition>
#include <QMutex>

enum TYPE_OF_GARDENER {
	DIGGER,
	PLANTER,
	FILLER
};
class Gardener : public QThread {
Q_OBJECT
private:
	int type;
	static int saplingCount;
	static QWaitCondition diggerCondition, planterCondition;
	static QWaitCondition startWork;
	static QMutex mutex; 
public:
	Gardener( TYPE_OF_GARDENER );
	~Gardener();
	void run();
	static void startGardeningActivities();
};

#endif /* __GARDENER_H */
