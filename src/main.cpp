#include <iostream>
#include "module.h"

int main ()
{
  std::cout << "Smart Mirror is Running" << std::endl;
  Core core;

  while(true){
    core.SetTime();
    std::string time =  core.GetTime();
    std::cout << time << std::endl;
    std::this_thread::sleep_for(std::chrono::minutes(1));
  }

  return 0;
}
