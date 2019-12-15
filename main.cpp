#include "mainwindow/mainwindow.hpp"
#include "application/application.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    dnd::Application app(argc, argv);
    dnd::MainWindow win;
    win.show();

    int retCode = app.exec();
    return retCode;
}
