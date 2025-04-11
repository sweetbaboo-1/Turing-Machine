#include "State0.h"
#include "TuringMachine.h"
#include "StateMachine.h"
#include "Action.h"

State0::State0(TuringMachine *turingMachine, StateMachine *machine)
    : State(turingMachine, machine, "State0") {}

Action State0::execute(int *tapeValue)
{
  if (*tapeValue == 1)
  {
    return {Direction::RIGHT, 0};
  }
  if (*tapeValue == 0)
  {
    stateMachine->changeState(turingMachine->haltState);
    return {Direction::STAY, 1};
  }
}
