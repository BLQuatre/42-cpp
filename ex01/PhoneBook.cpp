/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:38:57 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/10 22:44:52 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactsNumber(0), lastAddedIndex(-1) {};

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact()
{
	Contact		contact;
	std::string	msg;

	while (contact.getFirstName() == "")
	{
		std::cout << "First Name > ";
		std::getline(std::cin, msg);
		contact.setFirstName(msg);
	}
	while (contact.getLastName() == "")
	{
		std::cout << "Last Name > ";
		std::getline(std::cin, msg);
		contact.setLastName(msg);
	}
	while (contact.getNickname() == "")
	{
		std::cout << "Nickname > ";
		std::getline(std::cin, msg);
		contact.setNickname(msg);
	}
	while (contact.getPhoneNumber() == "")
	{
		std::cout << "Phone Number > ";
		std::getline(std::cin, msg);
		contact.setPhoneNumber(msg);
	}
	while (contact.getDarkestSecret() == "")
	{
		std::cout << "Darkest Secret > ";
		std::getline(std::cin, msg);
		contact.setDarkestSecret(msg);
	}

	if (this->lastAddedIndex >= 7)
		this->lastAddedIndex = 0;
	else
		(this->lastAddedIndex)++;

	if (this->contactsNumber < CONTACT_NUMBER)
		(this->contactsNumber)++;
	this->contacts[this->lastAddedIndex] = contact;
}

void	PhoneBook::searchContact()
{
	int			i;
	int			indexToGet;
	std::string	indexStr;

	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	i = 0;
	while (i < CONTACT_NUMBER)
	{
		if (i < this->contactsNumber)
		{
			std::cout << "|         " << i << "|";
			showShortString(contacts[i].getFirstName());
			std::cout << "|";
			showShortString(contacts[i].getLastName());
			std::cout << "|";
			showShortString(contacts[i].getNickname());
			std::cout << "|" << std::endl;
		}
		else
			std::cout << "|          |          |          |          |" << std::endl;
		i++;
	}

	std::cout << "|----------|----------|----------|----------|" << std::endl;

	if (this->contactsNumber == 0)
	{
		std::cout << "Add contacts if you want to get more infos" << std::endl;
		return;
	}

	indexToGet = -1;
	while (indexToGet < 0 || indexToGet >= CONTACT_NUMBER)
	{
		std::cout << "Index > ";
		std::getline(std::cin, indexStr);
		indexToGet = atoi(indexStr.c_str());
		if ((indexStr != "0" && indexToGet == 0) || indexToGet >= this->contactsNumber)
			indexToGet = -1;
	}

	std::cout << "Contact #" << indexToGet << " informations" << std::endl;
	std::cout << "First Name: " << this->contacts[indexToGet].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contacts[indexToGet].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[indexToGet].getNickname() << std::endl;
	std::cout << "Phone Number: " << this->contacts[indexToGet].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[indexToGet].getDarkestSecret() << std::endl;
}

void PhoneBook::showShortString(std::string str)
{
	int spaces = 10 - str.length();
	if (spaces > 0)
	{
		while (spaces > 0)
		{
			std::cout << " ";
			spaces--;
		}
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		if (spaces == 0)
			std::cout << str[9];
		else
			std::cout << ".";
	}
}