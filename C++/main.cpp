#include "mytask.h"
#include "loggingtask.h"
#include "timingtask.h"
#include "taskadapter.h"

int main(void) {

  // Uma task simples.
  std::cout << "Task 1 - Uma task simples " << std::endl;
  MyTask t1;
  t1.Execute();
  std::cout  << "\n";

  // Uma task com timing.
  std::cout << "Task 2 - Uma task com timing "<< std::endl;
  TimingTask< MyTask > t2;
  t2.Execute();
  std::cout  << "\n";

  // Uma task com logging
  std::cout << "Task 3 - Uma task com logging"<< std::endl;
  LoggingTask< MyTask > t3;
  t3.Execute();
  std::cout  << "\n";

  // Uma task com logging e timing.
  std::cout << "Task 4 - uma task com logging e timing" << std::endl;
  LoggingTask< TimingTask< MyTask > > t4;
  t4.Execute();
  std::cout  << "\n";

  std::cout << "Task 5 - uma task com logging e timing" << std::endl;
  typedef LoggingTask< TimingTask< MyTask > > Task;
  Task t5;
  t5.Execute();
  std::cout  << "\n";

  std::cout << "Task 6 - uma task com timing e logging" << std::endl;
  typedef TimingTask< LoggingTask< MyTask > > Task_;
  Task_ t6;
  t6.Execute();
  std::cout  << "\n";

  std::cout << "Task 7 - usando um taskadapter" << std::endl;
  TaskAdapter<TimingTask < LoggingTask< MyTask > > > t7;
  ITask* it = &t7;
  it->Execute();
}
