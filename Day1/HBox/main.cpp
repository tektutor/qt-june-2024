#include "mydlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDlg dlg;
    dlg.show();
    return a.exec();
}
