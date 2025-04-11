#pragma once

#include <string>
#include <iostream>
#include "Action.h"

class StateMachine; // Forward declaration
class TuringMachine; // Forward declaration

class State
{
protected:
  StateMachine *stateMachine;
  TuringMachine *turingMachine;
  std::string stateName;

public:
  State(TuringMachine *turingMachine, StateMachine *stateMachine, std::string stateName);

  virtual void enter();
  virtual void exit();
  virtual Action execute(int *tapeValue) = 0;

  virtual ~State();
};
