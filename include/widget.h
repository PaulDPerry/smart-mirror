#ifndef WIDGET_H
#define WIDGET_H

#include<iostream>
#include<chrono>
#include<format>


class Widget{
 public:
  virtual ~Widget();
  virtual std::string getData() = 0;
  virtual void setData() = 0;

};

class Weather : public Widget{
  public:
  std::string getData();
  void setData();
};

class Clock : public Widget{
  public:
  std::string getData();
  void setData();
};

class Calander : public Widget{
  public:
  std::string getData();
  void setData();
};

#endif