#ifndef WELCOME_HPP
#define WELCOME_HPP
#include <string>

class Welcome {
    private:
     std::string Name;

    public:
        void printWelcome();
        Welcome();
        ~Welcome();
};


#endif