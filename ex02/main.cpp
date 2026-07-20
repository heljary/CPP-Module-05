#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm sh("home");
        Bureaucrat b("Hamza", 14);

        b.signedForm(sh);
        b.executeForm(sh);
    }
    catch (std::exception &e)
    {
        std::cout << "error: " << e.what() << std::endl;
    }

    try
    {
        RobotomyRequestForm rrf("robot");
        Bureaucrat b2("messi",30);
        b2.signedForm(rrf);
        b2.executeForm(rrf);
    }
    catch (std::exception &e)
    {
        std::cout << "error: " << e.what() << std::endl;
    }


    try
    {
        PresidentialPardonForm ppf("doctor");
        Bureaucrat b2("yamal",3);
        b2.signedForm(ppf);
        b2.executeForm(ppf);
    }
    catch (std::exception &e)
    {
        std::cout << "error: " << e.what() << std::endl;
    }

    return 0;
}