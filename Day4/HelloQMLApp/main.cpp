#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QFile>
#include <QUrl>

int main ( int argc, char **argv ) {
	QGuiApplication theApp( argc, argv );

	QQmlApplicationEngine engine;
	engine.load ( QUrl::fromLocalFile ( "./main.qml" ) );

	return theApp.exec();
}
