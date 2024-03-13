#include "startup.h"
#include <QObject>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ps::Startup start_up;
    QObject::connect(&a,&QApplication::lastWindowClosed,&a,&QApplication::quit);
    start_up.show();
    return a.exec();
}
