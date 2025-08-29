#include "todo.h"

ToDo::ToDo(){
  std::vector<task> list;
}

void ToDo::ViewList(std::vector<task> list){
  for(auto const& item: list){

    std::cout<< item.index << std::endl;
    std::cout<< item.due_date_ << std::endl;
    std::cout<< item.description_ << std::endl;
    std::cout<< item.status_ << std::endl;
  }
}

void ToDo::AddItem(task new_task , std::vector<task> list){
  list.push_back(new_task);
}

void ToDo::RemoveItem(std::vector<task> list){

}
