#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

Bureaucrat::Bureaucrat(const Bureaucrat& oth){
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
    grade--;
    if(this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade()
{
    grade++;
    if(this->grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}


const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade to hight !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade to Low !";
}

Bureaucrat::~Bureaucrat(){}


void Bureaucrat::signedForm(AForm& fr){
	try{
		fr.beSigned(*this);
		std::cout << this->name << " is signed " << fr.getName() << std::endl;
	}catch(const AForm::GradeTooLowException& e){
		std::cout << this->name << " couldn't sign " << fr.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) const {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << this->getName() << " couldn't execute " << form.getName() 
                  << " because " << e.what() << std::endl;
    }
}
