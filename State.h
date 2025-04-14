#include <cstdint>

struct State
{
  uint32_t stateID;
  uint32_t stateOnReadZero;
  uint32_t stateOnReadOne;
  
  // true is write 1 or move right
  // zero is write 0 or move left
  bool writeOnReadZero;
  bool writeOnReadOne;
  bool moveOnReadZero;
  bool moveOnReadOne;
};
