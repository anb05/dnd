#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

namespace dnd {

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    explicit MainWindow(const MainWindow& ) = delete;
    explicit MainWindow(MainWindow&& )      = delete;

public:
    MainWindow& operator= (const MainWindow& ) = delete;
    MainWindow& operator= (MainWindow&& )      = delete;
};

} // namespace dnd

#endif // MAINWINDOW_HPP
