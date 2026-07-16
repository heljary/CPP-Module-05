#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat a("Hamza", 42);
        std::cout << a << std::endl;

        std::cout << a.getName() << std::endl;
        std::cout << a.getGrade() << std::endl;

        a.incrementGrade();
        std::cout << a << std::endl;

        a.decrementGrade();
        std::cout << a << std::endl;

        Bureaucrat high("High", 1);
        std::cout << high << std::endl;
        high.incrementGrade();

        Bureaucrat low("Low", 150);
        std::cout << low << std::endl;
        low.decrementGrade();

        Bureaucrat x("Error", 0);
        Bureaucrat y("Error", 151);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}