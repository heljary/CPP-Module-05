#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    try {
        Bureaucrat boss("Hamza", 1);
        Bureaucrat mid("Salah", 140);
        Bureaucrat low("Stagiaire", 150);

        RobotomyRequestForm s1("home");

        std::cout << "--- Test 1: Executing without signature ---" << std::endl;
        boss.executeForm(s1); // Fail: Not signed

        std::cout << "\n--- Test 2: Signing with low grade ---" << std::endl;
        low.signedForm(s1); // Fail: Grade too low to sign

        std::cout << "\n--- Test 3: Signing and Executing (Success) ---" << std::endl;
        boss.signedForm(s1);    // Success: Signed
        boss.executeForm(s1); // Success: Executed (check home_shrubbery file)

        std::cout << "\n--- Test 4: Signed but grade too low to execute ---" << std::endl;
        mid.executeForm(s1); // Fail: Salah is grade 140, needs 137

    } catch (std::exception & e) {
        std::cout << "Fatal error: " << e.what() << std::endl;
    }
    return 0;
}