#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Hamza", 42);
        Form f1("Contract", 50, 20);

        std::cout << b1 << std::endl;
        std::cout << f1 << std::endl;

        b1.signedForm(f1);
        std::cout << f1 << std::endl;

        Bureaucrat b2("Ayoub", 100);
        Form f2("Secret", 50, 20);

        std::cout << b2 << std::endl;
        std::cout << f2 << std::endl;

        b2.signedForm(f2);
        std::cout << f2 << std::endl;

        Bureaucrat b3("High", 1);
        std::cout << b3 << std::endl;

        Form f3("TopSecret", 1, 1);
        std::cout << f3 << std::endl;

        b3.signedForm(f3);
        std::cout << f3 << std::endl;

        Bureaucrat b4("Error", 151);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}