#include <iostream>
#include "widget.h"

int main ()
{
  std::cout << "Smart Mirror is Running" << std::endl;

  Clock myClock;
  myClock.setData();

  return 0;
}
