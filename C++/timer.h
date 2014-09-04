#ifndef TIMER_H
#define TIMER_H

#include <boost/timer/timer.hpp>

struct Timer {

  boost::timer::cpu_timer t;
  
  Timer() {
  }

  void start() {
    t.start();
  }

  void stop() {
    t.stop();
  }

  std::string getFormatedTime(const std::string& format) {
    return  t.format(3, format);
  }

};

#endif /* TIMER_H */
