#include "Bureaucrat.hpp"

int main()
{
    try
    {        
        Bureaucrat brc2("hamza",1);
        Bureaucrat brc1(brc2);
        std::cout << brc1 << std::endl;
        std::cout << brc2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}