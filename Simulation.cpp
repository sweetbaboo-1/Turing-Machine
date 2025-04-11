#include "Simulation.h"

Simulation::Simulation()
{
  turingMachine = new TuringMachine({1, 1, 0, 0});
  turingMachine->init();
}

void Simulation::simulate()
{
  auto result = turingMachine->runMachine();
  std::string sep = "";
  for (auto i : result)
  {
    std::cout << sep << i;
    sep = " ";
  }
  std::cout << std::endl;
}
