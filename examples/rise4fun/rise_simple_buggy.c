#include "smack.h"

int main(void) {
  int x, y, z;

  x = 10;
  y = 20;
  z = x + y;
  __SMACK_assert(z != 30);
  return 0;
}
