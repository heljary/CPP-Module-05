#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern{
    private:
        AForm* createShrubbery(const std::string target);
        AForm* createRobotomy(const std::string target);
        AForm* createPresidential(const std::string target);
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();
        AForm* makeForm(const std::string n_Form,const std::string _target);
};

#endif