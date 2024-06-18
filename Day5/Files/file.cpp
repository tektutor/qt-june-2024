#include "file.h"

File::File( QString fileName ) {
	this->fileName = fileName;
	pFile = new QFile(fileName);
}

void File::readFromBinaryFile() {
	pFile->open(QFile::ReadOnly);

	QDataStream in(pFile);

	QByteArray byteArray;
	in >> byteArray;

	QString msg = QString::fromUtf8(byteArray.data(), byteArray.size());

	qDebug() << msg;

	pFile->close();
}

void File::readFromTextFile() {
	pFile->open(QFile::ReadOnly | QFile::Text);

	QTextStream in(pFile);
	qDebug() << in.readAll();

	pFile->close();
}

void File::writeToTextFile(QString msg) {
	pFile->open(QFile::WriteOnly | QFile::Text | QFile::Append);

	QTextStream out(pFile);
	out << msg << "\n";
	pFile->flush();
	pFile->close();
}

void File::writeToBinaryFile(QString msg) {
	pFile->open(QFile::WriteOnly|QFile::Append);

	QDataStream out(pFile);
	out << msg << "\n";
	pFile->flush();
	pFile->close();
}

File::~File() {

}
