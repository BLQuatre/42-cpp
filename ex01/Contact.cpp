/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:52:41 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/10 23:23:45 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "iostream"

Contact::Contact() :	firstName(""), lastName(""),
						nickname(""), phoneNumber(""),
						darkestSecret("") {}

Contact::Contact(std::string firstName, std::string lastName,
				std::string nickname, std::string phoneNumber,
				std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

Contact::~Contact() {}

std::string	Contact::getFirstName(void)
{
	return (this->firstName);
}

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

std::string	Contact::getLastName(void)
{
	return (this->lastName);
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

void	Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void	Contact::showInformations(void)
{
	std::cout << "Contact informations" << std::endl;
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}
