#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137), target("default_target"){
    std::cout << "ShrubberyCreationForm defualt constructor is called !" << std::endl;
};


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm",145,137), target(target){
    std::cout << "ShrubberyCreationForm parameterized constructor is called !" std::endl;
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

