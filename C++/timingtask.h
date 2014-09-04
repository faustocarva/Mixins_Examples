#ifndef TIMINGTASK_H
#define TIMINGTASK_H

#include "timer.h"

template< class T >
class TimingTask : public T {
  Timer timer;
 public:
  void Execute() {
    timer.start();
    T::Execute();
    timer.stop();
    std::cout << timer.getFormatedTime("Task Duration: %w seconds\n");
  }

};


#endif /* TIMINGTASK_H */
