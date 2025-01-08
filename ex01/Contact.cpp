/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:52:41 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/08 15:23:55 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstname(""), lastname(""),
					nickname(""), phone_number(""),
					darkest_secret("") {}

Contact::Contact(std::string firstname, std::string lastname,
				std::string nickname, std::string phone_number,
				std::string darkest_secret)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

Contact::~Contact() {}

std::string	Contact::getFirstName(void)
{
	return (this->firstname);
}

void	Contact::setFirstName(std::string firstname)
{
	this->firstname = firstname;
}

std::string	Contact::getLastName(void)
{
	return (this->lastname);
}

void	Contact::setLastName(std::string lastname)
{
	this->lastname = lastname;
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
	return (this->phone_number);
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkest_secret);
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
