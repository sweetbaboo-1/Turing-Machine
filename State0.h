#pragma once

#include "State.h"

class State0 : public State
{
public:
  State0(TuringMachine *turingMachine, StateMachine *machine);
  Action execute(int *tapeValue) override;
};
