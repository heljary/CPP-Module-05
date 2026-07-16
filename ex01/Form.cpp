#include "Bureaucrat.hpp"

Form::Form():name("Messi"),grade_s(1),grade_ex(1),sign(false){}


Form::Form(const Form& form): name(form.name), grade_s(form.grade_s),grade_ex(form.grade_ex),sign(form.sign){}

Form::Form(const std::string& name, const int gradeToSign, const int gradeToExec): name(name), grade_s(gradeToSign), grade_ex(gradeToExec), sign(false)
{
    if (gradeToExec > 150 || gradeToSign > 150)
        throw GradeTooLowException();
    else if (gradeToExec < 1 || gradeToSign < 1)
        throw GradeTooHighException();
}


Form& Form::operator=(const Form& frm){
    if(this != &frm)
    {
        this->sign = frm.sign;
    }
     return *this;
}



Form::~Form(){}

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

int Form::beSigned(Bureaucrat& br)
{
    if(br.getGrade() > grade_s){
        throw   GradeTooLowException();
    }
	this->sign = true;
    return (this->sign);
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade Too Low !";
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade Too Hight !";
}
