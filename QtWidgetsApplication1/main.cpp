#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication1* w = new  QtWidgetsApplication1();
    QLabel* label = new QLabel("<h2><i>Hello</i>" 
                               "<font color=red>Qt!</font></h2>");
    QPushButton* pushbutton = new QPushButton("Quit");
    QObject::connect(pushbutton, SIGNAL(clicked()), &a, SLOT(quit()));
    QObject::connect(pushbutton, SIGNAL(clicked()), w, SLOT(close()));
    label->setParent(w);
    pushbutton->setParent(w);
    pushbutton->resize(300, 100);
    w->show();
    return a.exec();
}
