#ifndef __FILE_H
#define __FILE_H

#include <QDebug>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDataStream>
#include <QTextCodec>

class File {
private:
	QFile *pFile;
	QString fileName;
public:
	File(QString name);
	~File();
	void readFromTextFile();
	void readFromBinaryFile();
	void writeToTextFile(QString);
	void writeToBinaryFile(QString);
};


#endif /* __FILE_H */
