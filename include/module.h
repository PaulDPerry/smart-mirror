#ifndef MODUEL_H
#define MODUEL_H

#include<iostream>

class Module{
  virtual ~Module();
  virtual std::string getData() = 0;
  virtual void setData() = 0;

};

class Weather : public Module{
  public:
  std::string getData();
  void setData();
};

class Clock : public Module{
  public:
  std::string getData();
  void setData();
};

class Calander : public Module{
  public:
  std::string getData();
  void setData();
};

#endif