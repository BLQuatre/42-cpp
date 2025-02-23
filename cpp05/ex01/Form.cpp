/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:51:52 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/23 03:17:24 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

Form::Form(): _name("Peace and love"), _signed(false), _gradeToSign(10), _gradeToExecute(1) {
	std::cout	<< "[#" << this << "] Form " << this->_name << " was created without params." << std::endl;
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw Form::GradeTooLowException();
	std::cout	<< "[#" << this << "] Form " << this->_name << " was created with params." << std::endl;
}

Form::Form(const Form &form): _name(form._name), _signed(form._signed), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	std::cout	<< "[#" << this << "] Form " << this->_name << " was copied." << std::endl;
}

Form	&Form::operator=(const Form &form) {
	if (this != &form) {
		this->_signed = form._signed;
		std::cout	<< "[#" << this << "] Form " << this->_name << "was assigned." << std::endl;
	}
	return (*this);
}

Form::~Form() {
	std::cout	<< "[#" << this << "] Form " << this->_name << " was destroyed." << std::endl;
}

const std::string	Form::getName() const {
	return this->_name;
}
bool	Form::isSigned() const {
	return this->_signed;
}

int	Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int	Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void	Form::beSigned(const Bureaucrat &bureaucrat) {
	std::cout	<< "[#" << this << "] Trying to sign Form " << this->_name << " with Bureaucrat " << bureaucrat.getName() << "." << std::endl;
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::AlreadySignedException();
	else
		this->_signed = true;
}

const char	*Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char	*Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char	*Form::AlreadySignedException::what() const throw() {
	return "Form already signed";
}

std::ostream	&operator<<(std::ostream &out, const Form &form) {
	out	<< "[ Name: " << form.getName() << " | Signed: " << form.isSigned() << " | Sign Grade: " << form.getGradeToSign() << " | Execute Grade: " << form.getGradeToExecute() << " ]";
	return out;
}
