/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:51:52 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/23 03:17:38 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name("Matthieu") {
	this->setGrade(LOWEST_GRADE);
	std::cout	<< "[#" << this << "] Bureaucrat " << this->_name << " with grade " << this->_grade << " spawned without params." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name) {
	this->setGrade(grade);
	std::cout	<< "[#" << this << "] Bureaucrat " << this->_name << " with grade " << this->_grade << " spawned with params." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): _name(bureaucrat._name), _grade(bureaucrat._grade) {
	std::cout	<< "[#" << this << "] Bureaucrat " << this->_name << " with grade " << this->_grade << " spawned with copy." << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat) {
		this->_grade = bureaucrat._grade;
		std::cout	<< "[#" << this << "] Bureaucrat " << this->_name << " with grade " << this->_grade << " spawned with assignment." << std::endl;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout	<< "[#" << this << "] Bureaucrat " << this->_name << " exploded." << std::endl;
}

const std::string	Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::setGrade(int grade) {
	if (grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

void	Bureaucrat::incrementGrade() {
	std::cout	<< "[#" << this << "] Trying to increment Bureaucrat " << this->_name << "'s grade from " << this->_grade << " to " << this->_grade - 1 << "." << std::endl;
	this->setGrade(this->_grade - 1);
}

void	Bureaucrat::decrementGrade() {
	std::cout	<< "[#" << this << "] Trying to decrement Bureaucrat " << this->_name << "'s grade from " << this->_grade << " to " << this->_grade + 1 << "." << std::endl;
	this->setGrade(this->_grade + 1);
}

void	Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout	<< this->_name << " signed " << form.getName() << "." << std::endl;
	} catch (const Form::GradeTooLowException &ex) {
		std::cout	<< this->_name << " couldn’t sign " << form.getName() << " because " << ex.what() << "." << std::endl;
	} catch (const Form::AlreadySignedException &ex) {
		std::cout	<< this->_name << " couldn’t sign " << form.getName() << " because " << ex.what() << "." << std::endl;
	}
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out	<< bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
