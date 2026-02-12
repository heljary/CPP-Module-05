#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat brc1("yassine",2);
	Bureaucrat brc2("hamza",1);
	Form fr1;
	std::cout << brc1 << std::endl;
	std::cout << brc2 << std::endl;
	std::cout << fr1 << std::endl;
}
