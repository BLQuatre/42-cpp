/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:51:52 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/26 05:32:23 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request", 72, 45), _target("Golem") {
	std::cout	<< "[#" << this << "] RobotomyRequestForm " << this->getName() << " was created without params." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request", 72, 45), _target(target) {
	std::cout	<< "[#" << this << "] RobotomyRequestForm " << this->getName() << " was created with params." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm): AForm(robotomyRequestForm) {
	std::cout	<< "[#" << this << "] RobotomyRequestForm " << this->getName() << " was copied." << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm) {
	if (this != &robotomyRequestForm) {
		this->_target = robotomyRequestForm._target;
		std::cout	<< "[#" << this << "] RobotomyRequestForm " << this->getName() << "was assigned." << std::endl;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout	<< "[#" << this << "] RobotomyRequestForm " << this->getName() << " was destroyed." << std::endl;
}

const std::string	&RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void	RobotomyRequestForm::executeAction() const {
	std::cout	<< " * DRILLING NOISES *" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout	<< this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout	<< this->_target << " robotomy failed." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &robotomyRequestForm) {
	out	<< "[ Name: " << robotomyRequestForm.getName() << " | Signed: " << robotomyRequestForm.isSigned() << " | Sign Grade: " << robotomyRequestForm.getGradeToSign() << " | Execute Grade: " << robotomyRequestForm.getGradeToExecute() << " | Target: " <<  robotomyRequestForm.getTarget() << " ]";
	return out;
}
