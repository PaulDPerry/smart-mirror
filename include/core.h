#ifndef CORE_H
#define CORE_H

#include<iostream>
#include <thread>
#include <ctime>
#include <string>
#include <chrono>

class Core{
  public:
  //constructor
  Core();
  //functions for time moduel
  void SetTime();
  std::string GetTime();

  private:
  std::string current_time_;
  //void get_keys();
};





#endif