/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:51:52 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/23 03:11:26 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation", 145, 137), _target("Golem") {
	std::cout	<< "[#" << this << "] ShrubberyCreationForm " << this->getName() << " was created without params." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation", 145, 137), _target(target) {
	std::cout	<< "[#" << this << "] ShrubberyCreationForm " << this->getName() << " was created with params." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm): AForm(shrubberyCreationForm) {
	std::cout	<< "[#" << this << "] ShrubberyCreationForm " << this->getName() << " was copied." << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm) {
	if (this != &shrubberyCreationForm) {
		this->_target = shrubberyCreationForm._target;
		std::cout	<< "[#" << this << "] ShrubberyCreationForm " << this->getName() << "was assigned." << std::endl;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout	<< "[#" << this << "] ShrubberyCreationForm " << this->getName() << " was destroyed." << std::endl;
}

const std::string	&ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void	ShrubberyCreationForm::executeAction() const {
	std::string fileName = this->_target + "_shrubbery";
	std::ofstream outfile(fileName.c_str());
	if (!outfile.is_open()) {
		std::cerr << "error: " << fileName << ": Unable to open or write file" << std::endl;
		return;
	}
	outfile.flush();

	outfile	<< "               ,@@@@@@@," << std::endl
			<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
			<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
			<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
			<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
			<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
			<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
			<< "       |o|        | |         | |" << std::endl
			<< "       |.|        | |         | |" << std::endl
			<< "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;

	outfile.close();
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &shrubberyCreationForm) {
	out	<< "[ Name: " << shrubberyCreationForm.getName() << " | Signed: " << shrubberyCreationForm.isSigned() << " | Sign Grade: " << shrubberyCreationForm.getGradeToSign() << " | Execute Grade: " << shrubberyCreationForm.getGradeToExecute() << " | Target: " <<  shrubberyCreationForm.getTarget() << " ]";
	return out;
}
