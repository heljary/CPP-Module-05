#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string nm, int gd) : name(nm)
{
    if(gd > 150)
        throw GradeTooLowException();
    else if(gd < 1)
        throw GradeTooHighException();
    else
        this->grade = gd;
}

Bureaucrat::Bureaucrat(const Bureaucrat& oth) : name(oth.getName()) {
    grade = oth.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& oth){
    if(this != &oth)
    {
        grade = oth.grade;
    }
    return *this;
}


std::ostream& operator<<(std::ostream& out,const Bureaucrat& oth){
    out << oth.getName() << ", bureaucrat grade " << oth.getGrade();
    return out;
}

std::string Bureaucrat::getName() const{
    return this->name;
}
    

int Bureaucrat::getGrade() const{
    return this->grade;
}

void Bureaucrat::incrementGrade(){
    if(this->grade == 1)
    {
        throw GradeTooHighException();
    }
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if(this->grade == 150)
    {
        throw GradeTooLowException();
    }
    grade++;
}


const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade to hight !\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade to Low !\n";
}

Bureaucrat::~Bureaucrat(){}