#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <QApplication>

namespace dnd {

class Application : public QApplication
{
    Q_OBJECT
public:
    explicit Application(int& argc, char** argv);
    ~Application() override;

    explicit Application(const Application& ) = delete;
    explicit Application(Application&& )      = delete;

public:
    Application& operator= (const Application& ) = delete;
    Application& operator= (Application&& )      = delete;
};

} // namespace dnd

#endif // APPLICATION_HPP
