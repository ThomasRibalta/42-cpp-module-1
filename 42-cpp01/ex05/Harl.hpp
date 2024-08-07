#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
  private:
    std::string name;
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    struct level{
      std::string name;
      void (Harl::*func)(void);
    };
    level levels[4];
  public:
    Harl(void);
    void complain(std::string level);
};

#endif