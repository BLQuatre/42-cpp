/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:52:41 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/13 12:18:04 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "iostream"

Contact::Contact() :	_firstName(""), _lastName(""),
						_nickname(""), _phoneNumber(""),
						_darkestSecret("") {}

Contact::Contact(std::string firstName, std::string lastName,
				std::string nickname, std::string phoneNumber,
				std::string darkestSecret) {
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

Contact::~Contact() {}

std::string	Contact::getFirstName(void) {
	return this->_firstName;
}

void	Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}

std::string	Contact::getLastName(void) {
	return this->_lastName;
}

void	Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}

std::string	Contact::getNickname(void) {
	return this->_nickname;
}

void	Contact::setNickname(std::string nickname){
	this->_nickname = nickname;
}

std::string	Contact::getPhoneNumber(void) {
	return this->_phoneNumber;
}

void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

std::string	Contact::getDarkestSecret(void) {
	return this->_darkestSecret;
}

void	Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

void	Contact::showInformations(void) {
	std::cout	<< "Contact informations" << std::endl
				<< "First Name: " << this->getFirstName() << std::endl
				<< "Last Name: " << this->getLastName() << std::endl
				<< "Nickname: " << this->getNickname() << std::endl
				<< "Phone Number: " << this->getPhoneNumber() << std::endl
				<< "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}
