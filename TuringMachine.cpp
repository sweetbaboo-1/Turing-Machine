#include "TuringMachine.h"
#include "StateMachine.h"

std::vector<int> TuringMachine::runMachine()
{
  while (true)
  {
    bool readBit = tape[index];
    bool writeBit, moveBit;
    stateMachine->step(readBit, writeBit, moveBit);

    tape[index] = writeBit;
    index += moveBit ? 1 : -1;

    if (stateMachine->getCurrentState()->stateID == 0)
    {
      break;
    }

    // Handle infinite tape growth
    if (index < 0)
    {
      tape.insert(tape.begin(), 0);
      index = 0;
    }
    else if (index >= tape.size())
    {
      tape.push_back(0);
    }
  }

  return tape;
}
