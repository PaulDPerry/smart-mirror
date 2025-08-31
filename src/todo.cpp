#include "todo.h"

ToDo::ToDo(){
  std::vector<task> list;
}

void ToDo::ViewList(std::vector<task> list){
  for(auto const& item: list){

    std::cout<< item.index_ << std::endl;
    std::cout<< item.due_date_ << std::endl;
    std::cout<< item.description_ << std::endl;
    std::cout<< item.status_ << std::endl;
  }
}
// need to change to make new task when called then populate from cmd line
void ToDo::AddItem(task new_task , std::vector<task> list){
  std::cout << "Enter Due Date: " << std::endl;
  std::cin >> new_task.due_date_;

  std::cout << "Enter Description: " << std::endl;
  std::cin >> new_task.description_;

  new_task.index_ = list.size()+1;
  new_task.status_ = NOT_STARTED;

  list.push_back(new_task);

}

void ToDo::RemoveItem(std::vector<task> list){

}
