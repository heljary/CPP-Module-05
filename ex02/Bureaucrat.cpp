#include "Bureaucrat.hpp"
#include "AForm.hpp"

/*---------------HAMZA ELJARY-------------------------*/

Bureaucrat::Bureaucrat() : name("default"), grade(150) {
    std::cout << "Default Constructor Bureacrat Called!" << std::endl;
}

/*---------------HAMZA ELJARY-------------------------*/

Bureaucrat::Bureaucrat(std::string nm, int gd) : name(nm)
{
    if(gd > 150)
        throw GradeTooLowException();
    else if(gd < 1)
        throw GradeTooHighException();
    else
        this->grade = gd;
}

/*---------------HAMZA ELJARY-------------------------*/

Bureaucrat::Bureaucrat(const Bureaucrat& oth){
    std::cout << "Copy Constructor Called !" << std::endl;
    grade = oth.grade;
}

/*---------------HAMZA ELJARY-------------------------*/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& oth){
    std::cout << "Copy assignment operator Called !" << std::endl;
    if(this != &oth)
    {
        grade = oth.grade;
    }
    return *this;
}

/*---------------HAMZA ELJARY-------------------------*/


std::ostream& operator<<(std::ostream& out,const Bureaucrat& oth){
    out << oth.getName() << ", bureaucrat grade " << oth.getGrade();
    return out;
}

/*---------------HAMZA ELJARY-------------------------*/

std::string Bureaucrat::getName() const{
    return this->name;
}
    
    /*---------------HAMZA ELJARY-------------------------*/

int Bureaucrat::getGrade() const{
    return this->grade;
}

/*---------------HAMZA ELJARY-------------------------*/

void Bureaucrat::incrementGrade(){
    grade--;
    if(this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
}

/*---------------HAMZA ELJARY-------------------------*/

void Bureaucrat::decrementGrade()
{
    grade++;
    if(this->grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

/*---------------HAMZA ELJARY-------------------------*/


const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade to hight !";
}

/*---------------HAMZA ELJARY-------------------------*/

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade to Low !";
}

/*---------------HAMZA ELJARY-------------------------*/

Bureaucrat::~Bureaucrat()
{
    std::cout << "Deconstructor Called!" << std::endl;
}


void Bureaucrat::signedForm(AForm& fr){
	//if(fr.beSigned(*this))
	//{
	  // std::cout << this->name << " is signed " << fr.getName() << std::endl;
	//}else{
       	  // std::cout << this->name << " couldn’t sign " << fr.getName() << " because " << fr.what() << std::endl;
	//}
	try{
		fr.beSigned(*this);
		std::cout << this->name << " is signed " << fr.getName() << std::endl;
	}catch(const AForm::GradeTooLowException& e){
		std::cout << this->name << " couldn't sign " << fr.getName() << " because " << e.what() << std::endl;
	}
}
