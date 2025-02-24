/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:51:52 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/24 21:15:46 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	std::cout	<< "[#" << this << "] Intern spawned without params." << std::endl;
}

Intern::Intern(const Intern &intern) {
	(void) intern;
	std::cout	<< "[#" << this << "] Intern spawned with copy." << std::endl;
}

Intern	&Intern::operator=(const Intern &intern) {
	(void) intern;
	std::cout	<< "[#" << this << "] Intern spawned with assignment." << std::endl;
	return (*this);
}

Intern::~Intern() {
	std::cout	<< "[#" << this << "] Intern exploded." << std::endl;
}

AForm	*Intern::makeForm(const std::string formName, const std::string target) const {
	std::string formsStr[FORMS] = { "robotomy request", "shrubbery creation", "presidential pardon" };
	int	i;
	for (i = 0; i < FORMS; i++) {
		if (formsStr[i] == formName) {
			break;
		}
	}

	AForm	*form = NULL;

	switch (i) {
		case 0:
			return new RobotomyRequestForm(target);
			break;
		case 1:
			return new ShrubberyCreationForm(target);
			break;
		case 2:
			return new PresidentialPardonForm(target);
			break;
		default:
			std::cout	<< formName << " is not a valid form." << std::endl;
			return NULL;
	}
	std::cout	<< "Intern creates " << formName << "." << std::endl;
	return form;
}
