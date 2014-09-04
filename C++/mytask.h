#ifndef MYTASK_H
#define MYTASK_H

#include <iostream>

class MyTask {
 public:
  void Execute() {
    std::cout << "...This is where the task is executed..." << std::endl;
  }

  std::string GetName() {
    return "My task name";
  }

};

#endif /* MYTASK_H */
