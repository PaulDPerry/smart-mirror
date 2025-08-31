#ifndef TODO_H
#define TODO_H
#include "core.h"
struct task
{
  int index_;
  std::string due_date_;
  std::string description_;
  TaskStatus status_;

};


enum TaskStatus{
  NOT_STARTED = 0,
  STARTED,
  COMPLETED
};


class ToDo{
  public:
  ToDo();

  void ViewList(std::vector<task> list);
  void AddItem(task new_task, std::vector<task> list);
  void RemoveItem(std::vector<task> list);


  private:
};




#endif
