#include <string>

struct ITask { 
  virtual ~ITask() = 0;
  virtual std::string GetName() = 0;
  virtual void Execute() = 0;
};
