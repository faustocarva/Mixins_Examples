#ifndef TASKADAPTER_H
#define TASKADAPTER_H


#include "itask.h"

template< class T >
class TaskAdapter : public ITask, public T {
 public:
  virtual void Execute() { 
    T::Execute();
  }

  virtual std::string GetName() { 
    return T::GetName();
  };

};


#endif /* TASKADAPTER_H */
