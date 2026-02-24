#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137), target("default_target"){
    std::cout << "ShrubberyCreationForm defualt constructor is called !" << std::endl;
};


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm",145,137), target(target){
    std::cout << "ShrubberyCreationForm parameterized constructor is called !" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) : AForm(scf),target(scf.target){
    std::cout << "ShrubberyCreationForm copy constructor is called !" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf){
    if(this != &scf)
    {
        this->target = scf.target;
    }
    std::cout << "ShrubberyCreationForm operator assignment is called !" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm deconstructor is called !" << std::endl;
}

void ShrubberyCreationForm::ft_action() const{
    std::ofstream file((target + "_shrubbery").c_str());
    if(file.is_open()){
        file << "       /\\ " << std::endl;
        file << "      /\\*\\ " << std::endl;
        file << "     /\\O\\*\\ " << std::endl;
        file << "    /*/*\\/*\\/*\\ " << std::endl;
        file << "   /\\O\\/0\\0\\/0\\ " << std::endl;
        file << "  /\\*\\/\\*\\/\\/\\ " << std::endl;
        file << " /\\O\\/\\/*\\/\\/O/\\ " << std::endl;
        file << "      ||      " << std::endl;
        file << "      ||      " << std::endl;
        file << "      ||      " << std::endl;
        file << "----HAMZA------" << std::endl;
        file.close();
    }
}

