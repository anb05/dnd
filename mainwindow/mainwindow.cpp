#include "mainwindow.hpp"

#include <QTextEdit>

namespace dnd {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    _pTextEdit = new QTextEdit(this);
    _pTextEdit->setAcceptDrops(false);

    setCentralWidget(_pTextEdit);
    setWindowTitle(tr("Text Editor"));
    setAcceptDrops(true);
}

MainWindow::~MainWindow()
{ }

void MainWindow::dragEnterEvent(QDragEnterEvent* event)
{

}

void MainWindow::dropEvent(QDropEvent* event)
{

}

bool MainWindow::readFile(const QString& fileName)
{

}

} // namespace dnd
