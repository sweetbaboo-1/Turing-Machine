#pragma once

#include "State.h"

class HaltState : public State
{
public:
  HaltState(TuringMachine *turingMachine, StateMachine *machine);
  Action execute(int *tapeValue) override;
  void enter() override;
};
