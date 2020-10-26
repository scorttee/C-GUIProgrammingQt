#include "Dialog1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*
    QLabel* label = new QLabel("<h2><i>Hello</i>" 
                               "<font color=red>Qt!</font></h2>");
    QPushButton* pushbutton = new QPushButton("Quit");
    QObject::connect(pushbutton, SIGNAL(clicked()), &a, SLOT(quit()));
    QObject::connect(pushbutton, SIGNAL(clicked()), w, SLOT(close()));
    label->setParent(w);
    pushbutton->setParent(w);
    pushbutton->resize(300, 100);
    */
    DlgFirst* dlg = new DlgFirst();
    while (dlg->exec()) {
        return -1;
    }
    return a.exec();
}
