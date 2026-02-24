#ifndef c
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>
class RobotomyRequestForm : public AForm {
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& scf);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& scf);
		~RobotomyRequestForm();
		void ft_action() const;
};

#endif
