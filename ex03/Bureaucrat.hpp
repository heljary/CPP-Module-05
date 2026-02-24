#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string nm, int gd);
        Bureaucrat(const Bureaucrat& oth);
        Bureaucrat& operator=(const Bureaucrat& oth);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();
        class GradeTooHighException:public std::exception{
            public:
                const char* what() const throw();
        };

        class GradeTooLowException:public std::exception{
            public:
                const char* what() const throw();
        };
	    void  signedForm(AForm& fr);
        void  executeForm(AForm const & form) const;
};
std::ostream& operator<<(std::ostream& out,const Bureaucrat& oth);
#endif
