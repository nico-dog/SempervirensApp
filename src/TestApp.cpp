#define TESTAPP_CPP
#include <TestApp.hpp>


sempervirens::app::Application* sempervirens::app::createApplication()
{
  return new TestApp{};
}
