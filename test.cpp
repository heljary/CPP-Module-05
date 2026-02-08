#include <iostream>

// class Test{
//     public:
//         Test()noexcept(false){
//             std::cout << "hamza" << std::endl;
            
//         };
//         ~Test() {
//             std::cout << "~hamza" << std::endl;
//             throw std::runtime_error("error!");
//         };
// };

int main()
{
    
    try{
        int a = 900;
        int b = 0;
        if(b == 0)
        {
            throw "ca not divid by 0 !";
        }
        int c = a / b;
        std::cout << c << std::endl;
    }catch(char const* e){
        std::cout << e << std::endl;
    }
}