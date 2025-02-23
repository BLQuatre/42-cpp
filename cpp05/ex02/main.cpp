/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/23 03:14:49 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	// *** PresidentialPardonForm *** //
	std::cout	<< "-----{ PresidentialPardonForm }-----" << std::endl;
	{
		PresidentialPardonForm form = PresidentialPardonForm("Gobelin");
		Bureaucrat bureaucrat = Bureaucrat("V1", 1);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(form);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(form);

		std::cout	<< std::endl;
		std::cout	<< form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(form);

		std::cout	<< std::endl;
		std::cout	<< form << std::endl;
		std::cout	<< std::endl;

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(form);
	}

	std::cout	<< std::endl;

	// *** RobotomyRequestForm *** //
	std::cout	<< "-----{ RobotomyRequestForm }-----" << std::endl;
	{
		RobotomyRequestForm form = RobotomyRequestForm("Gobelin");
		Bureaucrat bureaucrat = Bureaucrat("V1", 1);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(form);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(form);

		std::cout	<< std::endl;
		std::cout	<< form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(form);

		std::cout	<< std::endl;
		std::cout	<< form << std::endl;
		std::cout	<< std::endl;

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(form);
	}

	std::cout	<< std::endl;

	// *** ShrubberyCreationForm *** //
	std::cout	<< "-----{ ShrubberyCreationForm }-----" << std::endl;
	{
		ShrubberyCreationForm form = ShrubberyCreationForm("Gobelin");
		Bureaucrat bureaucrat = Bureaucrat("V1", 1);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(form);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(form);

		std::cout	<< std::endl;
		std::cout	<< form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(form);

		std::cout	<< std::endl;
		std::cout	<< form << std::endl;
		std::cout	<< std::endl;

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.executeForm(form);
	}

	return EXIT_SUCCESS;
}
