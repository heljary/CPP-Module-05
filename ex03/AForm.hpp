#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;

class AForm{
    private:
        const std::string name;
        bool sign;
        const int grade_s;
        const int grade_ex;
    public:
       AForm();
       AForm(const std::string& name, const int gradeToSign, const int gradeToExec);
       AForm(const AForm& form);
       AForm& operator=(const AForm& frm);
       virtual ~AForm();
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
        virtual void execute(Bureaucrat const & executor) const;
        virtual void ft_action() const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& of);

#endif
