#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
class ShrubberyCreationForm : public AForm {
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& scf);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
		void ft_action() const;
};

#endif
