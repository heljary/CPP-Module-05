#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
    std::cout << " Default constructor Intern is called " << std::endl;
}

Intern::Intern(const Intern& other){
    (void)other;
    std::cout << " Copy constructor Intern is called " << std::endl;
}

Intern& Intern::operator=(const Intern& other){
    (void)other;
    std::cout << " Operator Assignment Intern is called " << std::endl;
    return *this;
}

Intern::~Intern(){
    std::cout << " Deconstructor Intern is called " << std::endl;
}

AForm* Intern::createShrubbery(const std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createPresidential(const std::string target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::createRobotomy(const std::string target) {
    return new RobotomyRequestForm(target);
}




AForm* Intern::makeForm(const std::string n_Form, const std::string _target)
{
    std::string arrfunc[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern::*methods[])(std::string) = {&Intern::createShrubbery, &Intern::createRobotomy, &Intern::createPresidential};

    for (int i = 0; i < 3; i++)
    {
        if (arrfunc[i] == n_Form)
        {
            std::cout << "Intern creates " << n_Form << std::endl;
            return (this->*methods[i])(_target);
        }
    }
    std::cout << "Error: Intern cannot create " << n_Form << std::endl;
    return NULL;
}

