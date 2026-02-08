#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& oth);
        Bureaucrat& operator=(const Bureaucrat& oth);
        std::ostream& operator<<(std::ostream& out,const Bureaucrat& oth);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();
};

#endif