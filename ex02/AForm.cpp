//#include "Form.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():name("Messi"),grade_s(1),grade_ex(1){
    	std::cout << "From => Default Constructer is Called !" << std::endl;
	this->sign = false;
}


AForm::AForm(const Form& form): name(form.name),grade_s(form.grade_s),grade_ex(form.grade_ex){
    std::cout << "Form => Copy Constructer is Called !" << std::endl;
    this->sign = form.sign;
}

AForm& AForm::operator=(const AForm& frm){
    std::cout << "Form => Copy assignment operator Called !" << std::endl;
    if(this != &frm)
    {
        this->sign = frm.sign;
    }
    return *this;
}


AForm::~AForm(){
    std::cout << "AForm => Deconstructor Called !" << std::endl;
}

std::string AForm::getName() const {
    return this->name;
}

bool AForm::getSign() const
{
    return this->sign;
}

std::ostream& operator<<(std::ostream& out,const AForm& of)
{
	out << of.getName()<< " " << of.getSign() << " " << of.getGradeIsSign() << " " << of.getGradeIsExecute();
	return out;
}

int AForm::getGradeIsSign() const {
    return this->grade_s;
}

int AForm::getGradeIsExecute() const{
    return this->grade_ex;
}

int AForm::beSigned(Bureaucrat& br)
{
    if(this->grade_s >= br.getGrade())
    {
	this->sign = true;
	return this->sign;
    }else{
	throw	GradeTooLowException();
    }
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade Too Low !";
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade Too Hight !";
}
