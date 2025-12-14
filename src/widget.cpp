#include "widget.h"


Widget::Widget(){};

std::string Weather::getData(){

};

void Weather::setData(){

};

std::string Clock::getData(){

};

void Clock::setData(){
  auto now = std::chrono::system_clock::now();
  std::cout << now << std::endl;
};

std::string Calander::getData(){

};

void Calander::setData(){

}