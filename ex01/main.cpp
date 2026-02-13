#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat const  brc1("yassine",2);
	Bureaucrat brc2("hamza",1);
	Form fr1;
	try
	{
	   fr1.beSigned(brc1);
	}catch(const std::exception& ex)
	{
	  std::cout << ex.what() << std::endl; 
	}
	std::cout << brc1 << std::endl;
	std::cout << brc2 << std::endl;
	std::cout << fr1 << std::endl;
}
