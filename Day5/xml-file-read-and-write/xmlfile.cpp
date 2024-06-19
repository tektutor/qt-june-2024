#include "xmlfile.h"

/**
<employees>
	<employee id="1" name="jegan" title="Software consultant", employer="TekTutor"/>
	<employee id="2" name="nitesh" title="Software Engineer I" employer="TekTutor"/>
</employees>
**/

XMLFile::XMLFile( QString filename ) {
	this->filename = filename;
}

void XMLFile::write() {
	//Create an XML document in memory
	QDomDocument document;

	QDomElement root = document.createElement("employees");  

	//Adding the employee root element to the xml document
	document.appendChild(root);

	QDomElement employee1 = document.createElement("employee");
	employee1.setAttribute("id", "1");
	employee1.setAttribute("name", "Jegan");
	employee1.setAttribute("title", "Software Consultant");
	employee1.setAttribute("employer", "TekTutor");
	root.appendChild( employee1 );

	QDomElement employee2 = document.createElement("employee");
	employee2.setAttribute("id", "2");
	employee2.setAttribute("name", "Nitesh");
	employee2.setAttribute("title", "Software Architect");
	employee2.setAttribute("employer", "TekTutor");
	root.appendChild( employee2 );

	QDomElement employee3 = document.createElement("employee");
	employee3.setAttribute("id", "3");
	employee3.setAttribute("name", "Sriram");
	employee3.setAttribute("title", "CTO");
	employee3.setAttribute("employer", "TekTutor");
	root.appendChild( employee3 );

	QFile file(filename);
	file.open( QFile::WriteOnly | QFile::Text );
	QTextStream out(&file);
	out << document.toString();

	file.close();
}

void XMLFile::read() { 
	QDomDocument document;

	QFile file(filename);
	file.open(QFile::ReadOnly | QFile::Text);
	document.setContent(&file);
	file.close();

	QDomElement root = document.firstChildElement();

	QDomNodeList nodes = root.elementsByTagName("employee"); 

	for(int count=0; count < nodes.count(); ++count) {
		QDomNode node = nodes.at(count);

		if ( node.isElement() ) {
			QDomElement e = node.toElement();
			qDebug() << e.attribute("id");
			qDebug() << e.attribute("name");
			qDebug() << e.attribute("title");
			qDebug() << e.attribute("employer");
		}
	}
}
