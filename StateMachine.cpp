#include "StateMachine.h"
#include "State.h"

void StateMachine::init(State *state)
{
  currentState = state;
  currentState->enter();
}

void StateMachine::changeState(State *newState)
{
  currentState->exit();
  currentState = newState;
  currentState->enter();
}

State *StateMachine::getCurrentState()
{
  return currentState;
}
