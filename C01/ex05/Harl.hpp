#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl
{

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    struct ComplainLevel
    {
        std::string level;        // classifiacatoin level
        void (Harl::*fonction)(); // pointer to fonction
    };
    static ComplainLevel levels[4]; // the 4 levels store here
public:
    // Hard();
    // ~Hard();
    void complain(std::string level);
};

#endif