#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

class QTextEdit;
class QString;
class QDragEnterEvent;
class QDropEvent;

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

protected:
    void dragEnterEvent(QDragEnterEvent* event) override;
    void dropEvent(QDropEvent* event) override;

private:
    bool readFile(const QString& fileName);

private:
    QTextEdit* _pTextEdit {nullptr};
};

} // namespace dnd

#endif // MAINWINDOW_HPP
