#pragma once

namespace ecs {

class Engine;

class System
{
public:
  System() {}
  virtual ~System() {}

  virtual void run(Engine&, double delta) = 0;
  virtual unsigned priority() { return 1000; }; // Lower number -> runs earlier. I.e. "0" runs before "10" etc
};

}