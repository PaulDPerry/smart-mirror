#include "core.h"

Core::Core(){};


void Core::SetTime(){
  time_t now = time(NULL);
  struct tm datetime = *localtime(&now);
  char output[50];
  strftime(output, 50, "%I%M", &datetime);
  current_time_ = output;
}

std::string Core::GetTime(){
  return current_time_;
}