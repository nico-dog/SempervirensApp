#ifndef TESTAPP_HPP
#define TESTAPP_HPP
#include <Sempervirens.hpp>

class TestApp : public sempervirens::app::Application {

public:
  TestApp() = default;
  ~TestApp() = default;
};

sempervirens::app::Application* sempervirens::app::createApplication();

#endif
