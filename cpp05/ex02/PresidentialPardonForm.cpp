/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:51:52 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/23 03:11:08 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon", 25, 5), _target("Golem") {
	std::cout	<< "[#" << this << "] PresidentialPardonForm " << this->getName() << " was created without params." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon", 25, 5), _target(target) {
	std::cout	<< "[#" << this << "] PresidentialPardonForm " << this->getName() << " was created with params." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm): AForm(presidentialPardonForm) {
	std::cout	<< "[#" << this << "] PresidentialPardonForm " << this->getName() << " was copied." << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm) {
	if (this != &presidentialPardonForm) {
		this->_target = presidentialPardonForm._target;
		std::cout	<< "[#" << this << "] PresidentialPardonForm " << this->getName() << "was assigned." << std::endl;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout	<< "[#" << this << "] PresidentialPardonForm " << this->getName() << " was destroyed." << std::endl;
}

const std::string	&PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void	PresidentialPardonForm::executeAction() const {
	std::cout	<< this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &presidentialPardonForm) {
	out	<< "[ Name: " << presidentialPardonForm.getName() << " | Signed: " << presidentialPardonForm.isSigned() << " | Sign Grade: " << presidentialPardonForm.getGradeToSign() << " | Execute Grade: " << presidentialPardonForm.getGradeToExecute() << " | Target: " <<  presidentialPardonForm.getTarget() << " ]";
	return out;
}
