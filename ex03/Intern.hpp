#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern{
    public:
        Intern();
        AForm* makeForm(const std::string n_Form,const std::string _target);
};

#endif