#pragma once

#include <cstdint>

namespace ecs {

typedef std::uint64_t ComponentID;

class Component
{
public:
  Component() {}
  virtual ~Component() {}
  virtual ComponentID id() = 0;
};

}

// Helper macro
#define COMPONENT_ID(compId) \
ecs::ComponentID id() override final { \
  return compId; \
} \
static ecs::ComponentID staticId() { \
  return compId; \
}