#ifndef BRAIN_CPP
#define BRAIN_CPP

#include <iostream>

class Brain{
    protected : 
        std::string ideas[100];
    public :
        Brain();
        Brain(Brain& obj);
        Brain& operator=(Brain& obj);
        ~Brain();
};

#endif