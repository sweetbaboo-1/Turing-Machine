#pragma once

#include <cstdint>
#include <unordered_map>
#include "State.h"

class StateMachine
{
public:
  std::unordered_map<uint32_t, State *> states;
  State *currentState;

  StateMachine(std::unordered_map<uint32_t, State *> &&states) : states(std::move(states)) {}
  void init()
  {
    this->changeState(states[1]);
  }
  void changeState(State *newState);
  State *getCurrentState() { return currentState; };
  void step(bool &read_bit, bool &write_bit, bool &move_right);
};
