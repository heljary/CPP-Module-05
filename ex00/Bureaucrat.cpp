#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Default Constructor Called!" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name,int grade)
{
    std::cout << "Constructer paramitersed is called !" << std::endl;
}
// std::string Bureaucrat::getName() const{
//     std::cout << "getName is called !" << std::endl;
// }
// int Bureaucrat::getGrade() const{
//     std::cout << "getGrade is called !" << std::endl;
// }
// void Bureaucrat::incrementGrade(){
//     std::cout << "incrementGrade is called !" << std::endl;
// }
// void Bureaucrat::decrementGrade()
// {
//     std::cout << "decrement is called !" << std::endl;
// }
Bureaucrat::~Bureaucrat()
{
    std::cout << "Deconstructor Called!" << std::endl;
}