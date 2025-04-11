#pragma once

#include <iostream>
#include "TuringMachine.h"

class Simulation
{
private:
  TuringMachine *turingMachine;

public:
  Simulation();
  void simulate();
};
