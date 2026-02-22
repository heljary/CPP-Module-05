#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string name;
        bool sign;
        const int grade_s;
        const int grade_ex;
    public:
        Form();
        Form(const std::string& name, const int gradeToSign, const int gradeToExec);
        Form(const Form& form);
        Form& operator=(const Form& frm);
        ~Form();
        class GradeTooHighException:public std::exception{
            public:
                const char* what() const throw();
        };
        class GradeTooLowException:public std::exception{
            public:
                const char* what() const throw();
        };
        std::string getName() const;
        bool getSign() const;
        int getGradeIsSign() const;
        int getGradeIsExecute() const;
        int beSigned(Bureaucrat& br);
};

std::ostream& operator<<(std::ostream& out, const Form& of);

#endif
