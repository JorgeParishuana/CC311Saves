#include "demo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    demo w;
    w.show();
    return a.exec();
}
