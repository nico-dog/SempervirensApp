#define TESTAPP_CPP
#include <TestApp.hpp>

TestApp::TestApp()
{
  SEMPERVIRENS_MSG("TestApp ctor, size of TestApp: " << sizeof(TestApp));
}

TestApp::~TestApp()
{
  SEMPERVIRENS_MSG("TestApp dtor");
}

Block<sempervirens::app::Application> sempervirens::app::createApplication(Arena_t& arena)  
{
  auto app = SEMPERVIRENS_NEW(TestApp, arena);
  return {app._ptr, app._size};
}
