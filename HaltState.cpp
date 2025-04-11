#include "HaltState.h"
#include "TuringMachine.h"
#include "StateMachine.h"
#include "Action.h"

HaltState::HaltState(TuringMachine *turingMachine, StateMachine *machine)
    : State(turingMachine, machine, "HaltState") {}

Action HaltState::execute(int *tapeValue)
{
  return {Direction::STAY, *tapeValue};
}

void HaltState::enter()
{
  stateMachine->isHalted = true;
  State::enter();
}
