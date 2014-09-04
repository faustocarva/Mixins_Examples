template< class T >
class LoggingTask : public T {
 public:
  void Execute() { 
    std::cout << "LOG: The task is starting - " << T::GetName().c_str() << std::endl;
    T::Execute();
    std::cout << "LOG: The task has completed - " << T::GetName().c_str() << std::endl;
  }
};
