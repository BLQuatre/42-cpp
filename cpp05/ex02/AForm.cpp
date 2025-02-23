/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:51:52 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/23 03:11:54 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"

AForm::AForm(): _name("Peace and love"), _signed(false), _gradeToSign(10), _gradeToExecute(1) {
	std::cout	<< "[#" << this << "] Form " << this->_name << " was created without params." << std::endl;
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw AForm::GradeTooLowException();
	std::cout	<< "[#" << this << "] Form " << this->_name << " was created with params." << std::endl;
}

AForm::AForm(const AForm &form): _name(form._name), _signed(form._signed), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	std::cout	<< "[#" << this << "] Form " << this->_name << " was copied." << std::endl;
}

AForm	&AForm::operator=(const AForm &form) {
	if (this != &form) {
		this->_signed = form._signed;
		std::cout	<< "[#" << this << "] Form " << this->_name << "was assigned." << std::endl;
	}
	return (*this);
}

AForm::~AForm() {
	std::cout	<< "[#" << this << "] Form " << this->_name << " was destroyed." << std::endl;
}

const std::string	AForm::getName() const {
	return this->_name;
}
bool	AForm::isSigned() const {
	return this->_signed;
}

int	AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int	AForm::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	std::cout	<< "[#" << this << "] Trying to sign Form " << this->getName() << " with Bureaucrat " << bureaucrat.getName() << "." << std::endl;
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	else if (this->_signed)
		throw AForm::AlreadySignedException();
	else
		this->_signed = true;
}

void	AForm::execute(const Bureaucrat &executor) const {
	std::cout	<< "[#" << this << "] Trying to execute Form " << this->getName() << " with Bureaucrat " << executor.getName() << "." << std::endl;
	if (!this->_signed)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		this->executeAction();
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char	*AForm::NotSignedException::what() const throw() {
	return "Form not signed";
}

const char	*AForm::AlreadySignedException::what() const throw() {
	return "Form already signed";
}

std::ostream	&operator<<(std::ostream &out, const AForm &form) {
	out	<< "[ Name: " << form.getName() << " | Signed: " << form.isSigned() << " | Sign Grade: " << form.getGradeToSign() << " | Execute Grade: " << form.getGradeToExecute() << " ]";
	return out;
}
