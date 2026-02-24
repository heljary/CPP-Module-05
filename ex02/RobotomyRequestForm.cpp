#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",25,5), target("default_target"){
    std::cout << "RobotomyRequestForm defualt constructor is called !" << std::endl;
};


RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm",145,137), target(target){
    std::cout << "RobotomyRequestForm parameterized constructor is called !" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& scf) : AForm(scf),target(scf.target){
    std::cout << "RobotomyRequestForm copy constructor is called !" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& scf){
    if(this != &scf)
    {
        this->target = scf.target;
    }
    std::cout << "RobotomyRequestForm operator assignment is called !" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm deconstructor is called !" << std::endl;
}

void RobotomyRequestForm::ft_action() const{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

