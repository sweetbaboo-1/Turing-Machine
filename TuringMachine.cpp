#include "TuringMachine.h"
#include "StateMachine.h"
#include "State0.h"
#include "HaltState.h"
#include "Action.h"

TuringMachine::TuringMachine(std::vector<int> tape)
    : tape(tape)
{
  stateMachine = new StateMachine();
}

void TuringMachine::init()
{
  // create all states
  haltState = new HaltState(this, stateMachine);
  state0 = new State0(this, stateMachine);

  stateMachine->init(state0);
}

std::vector<int> TuringMachine::runMachine()
{
  while (!stateMachine->isHalted)
  {
    Action action = stateMachine->getCurrentState()->execute(&tape[index]);
    tape[index] = action.write;
    index += static_cast<int>(action.direction);
  }
  return tape;
}
