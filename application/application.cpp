#include "application.hpp"

namespace dnd {

Application::Application(int& argc, char** argv)
    : QApplication(argc, argv)
{  }

Application::~Application() = default;

} // namespace dnd
