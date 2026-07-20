#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",72,45), target("default_target"){};


RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm",72,45), target(target){};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& scf) : AForm(scf),target(scf.target){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& scf){
    if(this != &scf)
    {
        this->target = scf.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::ft_action() const{
    srand(time(NULL));
    std::cout << this->target << " Drilling noises: Woooooooooo! " << std::endl;
    if(std::rand() % 2 == 0)
    {
        std::cout << this->target << "has been robotomized successfully 50% of the time " << std::endl;
    }else{
        
        std::cout << this->target << "it informs that the robotomy failed " << std::endl;
    }
}