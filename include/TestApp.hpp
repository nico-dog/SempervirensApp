#ifndef TESTAPP_HPP
#define TESTAPP_HPP
#include <Sempervirens.hpp>

class TestApp : public sempervirens::app::Application
{
public:
  TestApp();
  ~TestApp();
};

Block<sempervirens::app::Application> sempervirens::app::createApplication(Arena_t& arena);

#endif
