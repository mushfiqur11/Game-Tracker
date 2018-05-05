#include "qtlinking.h"
#include "mainwindow.h"
#include "ball.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    qtlinking qt;
    qt.show();
    //w.show();

    return a.exec();
}
