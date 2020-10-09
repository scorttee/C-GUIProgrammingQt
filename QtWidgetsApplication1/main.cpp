#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication1* w = new  QtWidgetsApplication1();
    QLabel* label = new QLabel("Hello Qt!");
    label->setParent(w);
    w->show();
    return a.exec();
}
