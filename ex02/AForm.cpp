//#include "Form.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():name("Defualt"),grade_s(1),grade_ex(1),sign(false){}

AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExec) 
    : name(name), sign(false), grade_s(gradeToSign), grade_ex(gradeToExec) {
}

AForm::AForm(const AForm& form): name(form.name),grade_s(form.grade_s),grade_ex(form.grade_ex),sign(form.sign){}

AForm& AForm::operator=(const AForm& frm){
    if(this != &frm)
    {
        this->sign = frm.sign;
    }
    return *this;
}


AForm::~AForm(){}

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
    if(br.getGrade() > grade_s)
    {
        throw   GradeTooLowException();
    }
    this->sign = true;
    return (this->sign);
}

void AForm::execute(Bureaucrat const& execute) const
{
    if(!this->getSign() || execute.getGrade() > this->getGradeIsExecute())
    {
        throw AForm::GradeTooLowException();
    }
    this->ft_action();
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade Too Low !";
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade Too Hight !";
}