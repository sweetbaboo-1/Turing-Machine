#include "State.h"
#include "Action.h"
#include "StateMachine.h"
#include "TuringMachine.h"

State::State(TuringMachine *turingMachine, StateMachine *stateMachine, std::string stateName)
    : turingMachine(turingMachine), stateMachine(stateMachine), stateName(stateName) {}

void State::enter()
{
  std::cout << "Entering " << stateName << std::endl;
}

void State::exit() {}

State::~State() = default;
