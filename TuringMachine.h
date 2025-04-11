#pragma once

#include <vector>

#include "State.h"
#include "StateMachine.h"

class TuringMachine
{
private:
  std::vector<int> tape;
  StateMachine *stateMachine;

public:
  int index = 0;
  State *haltState;
  State *state0;

  TuringMachine(std::vector<int> tape);
  void init();
  std::vector<int> runMachine();
};
