#include <iostream>
#include "core.h"
#include "todo.h"

int main ()
{
  std::cout << "Smart Mirror is Running" << std::endl;
  Core core;
  ToDo ToDo;

  task mytask;
  mytask.description_ = "sample";
  mytask.due_date_ = "Today";
  mytask.index_ = 0;


  while(true){
    /* core.SetTime();
    std::string time =  core.GetTime();
    std::cout << time << std::endl;
    std::this_thread::sleep_for(std::chrono::minutes(1)); */
  }

  return 0;
}
