#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Default Constructor Called!" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Constructor paramitersed is called !" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& oth){
    std::cout << "Copy Constructor Called !" << std::endl;
    name = oth.name;
    grade = oth.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& oth){
    std::cout << "Copy assignment operator Called !" << std::endl;
    if(name != oth.name && grade != oth.grade)
    {
        name = oth.name;
        grade = oth.grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const{
    std::cout << this->name << std::endl;
}
int Bureaucrat::getGrade() const{
    std::cout << this->grade << std::endl;
}
void Bureaucrat::incrementGrade(){
}
void Bureaucrat::decrementGrade()
{
    
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Deconstructor Called!" << std::endl;
}