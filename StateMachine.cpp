#include "StateMachine.h"
#include <iostream>

void StateMachine::changeState(State* newState)
{
  currentState = newState;
  std::cout << "Changed to state: " << currentState->stateID << std::endl;
}

void StateMachine::step(bool &read_bit, bool &write_bit, bool &move_right)
{
  if (read_bit)
  {
    write_bit = currentState->writeOnReadOne;
    move_right = currentState->moveOnReadOne;
    this->changeState(states[currentState->stateOnReadOne]);
  }
  else
  {
    write_bit = currentState->writeOnReadZero;
    move_right = currentState->moveOnReadZero;
    this->changeState(states[currentState->stateOnReadZero]);
  }
};
