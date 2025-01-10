/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:38:57 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/10 23:28:46 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : contactsNumber(0), lastAddedIndex(-1) {};

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::addContact(void)
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

void	PhoneBook::searchContact(void)
{
	int			indexToGet;
	std::string	indexStr;

	if (this->contactsNumber == 0)
	{
		std::cout << "Add contacts if you want to get more infos" << std::endl;
		return;
	}

	this->showContacts();

	indexToGet = -1;
	while (indexToGet < 0 || indexToGet >= CONTACT_NUMBER)
	{
		std::cout << "Index > ";
		std::getline(std::cin, indexStr);
		indexToGet = atoi(indexStr.c_str());
		if ((indexStr != "0" && indexToGet == 0) || indexToGet >= this->contactsNumber)
			indexToGet = -1;
	}

	this->contacts[indexToGet].showInformations();
}

void	PhoneBook::showContacts(void)
{
	int	i;

	std::cout	<< "+----------+----------+----------+----------+" << std::endl
				<< "|     Index|First Name| Last Name|  Nickname|" << std::endl
				<< "+----------+----------+----------+----------+" << std::endl;

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

	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void	PhoneBook::showShortString(std::string str)
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
