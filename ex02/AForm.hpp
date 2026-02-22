#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
    private:
        const std::string name;
        bool sign;
        const int grade_s;
        const int grade_ex;
    public:
       AForm();
       AForm(const Form& form);
       AForm& operator=(const Form& frm);
       ~AForm();
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
