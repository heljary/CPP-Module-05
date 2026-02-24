#include "Intern.hpp"

Intern::Intern(){
    std::cout << " Default constructor Intern is called " << std::endl;
}

Intern::Intern(const Intern& other){
    std::cout << " Copy constructor Intern is called " << std::endl;
}

Intern& Intern::operator=(const Intern& other){
    std::cout << " Operator Assignment Intern is called " << std::endl;
}

Intern::~Intern(){
    std::cout << " Deconstructor Intern is called " << std::endl;
}


AForm* Intern::makeForm(const std::string n_Form,const std::string _target)
{
    int i = 0;
    std::string arrfunc[]{
        "shrubbery creation","robotomy request","presidential pardon",
    };

    while(arrfunc[i] != n_Form)
    {
        i++;
    }
}

