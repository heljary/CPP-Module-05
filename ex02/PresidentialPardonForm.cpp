#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",25,5), target("default_target"){
    std::cout << "PresidentialPardonForm defualt constructor is called !" << std::endl;
};


PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm",145,137), target(target){
    std::cout << "PresidentialPardonForm parameterized constructor is called !" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& scf) : AForm(scf),target(scf.target){
    std::cout << "PresidentialPardonForm copy constructor is called !" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& scf){
    if(this != &scf)
    {
        this->target = scf.target;
    }
    std::cout << "PresidentialPardonForm operator assignment is called !" << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm deconstructor is called !" << std::endl;
}

void PresidentialPardonForm::ft_action() const{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

