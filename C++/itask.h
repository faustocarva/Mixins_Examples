#include <string>

struct ITask { 
  virtual std::string GetName() = 0;
  virtual void Execute() = 0;
};
