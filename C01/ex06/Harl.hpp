#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
// #include "st"

class Harl{
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    //     void (Harl::*functions[4])(void);
    public:

        void FolterComplain(std::string level);
};



#endif