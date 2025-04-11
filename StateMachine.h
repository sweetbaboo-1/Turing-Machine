#pragma once

#include "State.h"

class StateMachine
{
private:
  State *currentState;

public:
  bool isHalted = false;

  void init(State *state);
  void changeState(State *newState);
  State *getCurrentState();
};
