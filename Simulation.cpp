#include "Simulation.h"

Simulation::Simulation()
{
  // want to add one to a number n number of times.
  auto tape = std::vector<int>{1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1};
  auto states = std::unordered_map<uint32_t, State *>();

  int N = 5;
  uint32_t stateID = 0;

  // halt state
  auto haltState = new State{stateID, 0, 0, false, false, false, false};
  states[stateID] = haltState;
  stateID++;
  for (int i = 0; i < N - 1; i++) 
  {
    auto state = new State{stateID, stateID + 1, stateID, true, true, true, true};
    states[stateID] = state;
    stateID++;
  }
  auto state = new State{stateID, 0, stateID, true, true, true, true};
  states[stateID] = state;
  stateID++;
  turingMachine = new TuringMachine(tape, states); // state 0 is the start
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
