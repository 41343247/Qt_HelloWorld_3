#include "designwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DesignWidget w1;
    w1.show();
    return a.exec();
}
