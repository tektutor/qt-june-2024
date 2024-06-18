#include <QCoreApplication>
#include "file.h"

int main( int argc, char **argv ) {
	QCoreApplication theApp(argc, argv);
#if 0
	File textFile("/home/jegan/greeting.txt");
	textFile.writeToTextFile("Line 1");
	textFile.writeToTextFile("Line 2");
	textFile.writeToTextFile("Line 3");
	textFile.writeToTextFile("Line 4");
	textFile.readFromTextFile();
#endif

	File binaryFile("/home/jegan/greeting.bin");
	binaryFile.writeToBinaryFile("Line 1");
//	binaryFile.writeToBinaryFile("Line 2");
//	binaryFile.writeToBinaryFile("Line 3");
//	binaryFile.writeToBinaryFile("Line 4");
//	binaryFile.readFromBinaryFile();

	return theApp.exec();
}
