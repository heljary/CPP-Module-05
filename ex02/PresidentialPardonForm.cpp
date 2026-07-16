#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",25,5), target("default_target"){};


PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm",25,5), target(target){};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& scf) : AForm(scf),target(scf.target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& scf){
    if(this != &scf)
    {
        this->target = scf.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::ft_action() const{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

