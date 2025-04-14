#pragma once

#include <vector>

#include "StateMachine.h"

class TuringMachine
{
private:
  std::vector<int> tape;
  StateMachine *stateMachine;
  int index = 0;

public:
  TuringMachine(std::vector<int> tape, std::unordered_map<uint32_t, State *> states)
      : tape(std::move(tape)), stateMachine(new StateMachine(std::move(states))) {}
  ~TuringMachine() { delete stateMachine; }
  void init()
  {
    stateMachine->init();
  }
  std::vector<int> runMachine();
};
