/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/24 21:29:13 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main() {
	Intern intern = Intern();
	std::cout	<< std::endl;

	// *** PresidentialPardonForm *** //
	std::cout	<< "-----{ PresidentialPardonForm }-----" << std::endl;
	{
		Bureaucrat bureaucrat = Bureaucrat("V1", 1);
		AForm *form = intern.makeForm("presidential pardon", "Gobelin");

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(*form);

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(*form);

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		delete form;
	}

	std::cout	<< std::endl;

	// *** RobotomyRequestForm *** //
	std::cout	<< "-----{ RobotomyRequestForm }-----" << std::endl;
	{
		Bureaucrat bureaucrat = Bureaucrat("V1", 1);
		AForm *form = intern.makeForm("robotomy request", "Gobelin");

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(*form);

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(*form);

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		delete form;
	}

	std::cout	<< std::endl;

	// *** ShrubberyCreationForm *** //
	std::cout	<< "-----{ ShrubberyCreationForm }-----" << std::endl;
	{
		Bureaucrat bureaucrat = Bureaucrat("V1", 1);
		AForm *form = intern.makeForm("shrubbery creation", "Gobelin");

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(*form);

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(*form);

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "] " << *form << std::endl;
		std::cout	<< std::endl;

		delete form;
	}

	std::cout	<< std::endl;

	// *** UnknownForm *** //
	std::cout	<< "-----{ UnknownForm }-----" << std::endl;
	{
		AForm *form = intern.makeForm("unknown", "Gobelin");

		std::cout	<< std::endl;
		std::cout	<< "[#" << form << "]" << std::endl;
		std::cout	<< std::endl;
	}

	return EXIT_SUCCESS;
}
