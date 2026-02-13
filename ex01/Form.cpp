#include "Form.hpp"

Form::Form():name("default"),grade_s(false),grade_ex(false){
    	std::cout << "From => Default Constructer is Called !" << std::endl;
	this->sign = false;
}


Form::Form(const Form& form): name(form.name),grade_s(form.grade_s),grade_ex(form.grade_ex){
    std::cout << "Form => Copy Constructer is Called !" << std::endl;
    this->sign = form.sign;
}

Form& Form::operator=(const Form& frm){
    std::cout << "Form => Copy assignment operator Called !" << std::endl;
    if(this != &frm)
    {
        this->sign = frm.sign;
    }
     return *this;
}



Form::~Form(){
    std::cout << "Form => Deconstructor Called !" << std::endl;
}

std::string Form::getName() const {
    return this->name;
}

bool Form::getSign() const
{
    return this->sign;
}

std::ostream& operator<<(std::ostream& out,const Form& of)
{
	out << of.getName()<< " " << of.getSign() << " " << of.getGradeIsSign() << " " << of.getGradeIsExecute();
	return out;
}

int Form::getGradeIsSign() const {
    return this->grade_s;
}

int Form::getGradeIsExecute() const{
    return this->grade_ex;
}

void Form::beSigned(Bureaucrat& br)
{
    std::cout << "Im here in besigned " << std::endl;
    if(this->grade_s >= br.getGrade())
    {
        std::cout << "is not signed yet" << std::endl;
    }else{
	throw	GradeTooLowException();
    }
}

void Form::signForm(){
    // if()
    // {
        // if()
    // }
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade Too Low !";
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade Too Hight !";
}
