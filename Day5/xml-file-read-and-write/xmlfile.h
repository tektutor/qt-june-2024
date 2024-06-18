#ifndef XMLFILE_H
#define XMLFILE_H

#include <QtXml>
#include <QDebug>
#include <QString>

class XMLFile {
private:
	QString filename;
public:
	XMLFile(QString);
	void write();
	void read();	
};

#endif /* XMLFILE_H */
