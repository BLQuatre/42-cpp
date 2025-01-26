/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:38:57 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/26 21:01:11 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactsNumber(0), _lastAddedIndex(-1) {};

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact() {
	this->_lastAddedIndex = (this->_lastAddedIndex + 1) % MAX_CONTACTS_NUMBER;
	if (this->_contactsNumber < MAX_CONTACTS_NUMBER)
		(this->_contactsNumber)++;

	std::string firstName;
	while (firstName.empty()) {
		std::cout << "First Name > ";
		if (!(std::getline(std::cin, firstName))) {
			std::cout << "ERROR" << std::endl;
			return;
		}
	}
	this->_contacts[this->_lastAddedIndex].setFirstName(firstName);

	std::string lastName;
	while (lastName.empty()) {
		std::cout << "Last Name > ";
		if (!(std::getline(std::cin, lastName))) {
			std::cout << "ERROR" << std::endl;
			return;
		}
	}
	this->_contacts[this->_lastAddedIndex].setLastName(lastName);

	std::string nickname;
	while (nickname.empty()) {
		std::cout << "Nickname > ";
		if (!(std::getline(std::cin, nickname))) {
			std::cout << "ERROR" << std::endl;
			return;
		}
	}
	this->_contacts[this->_lastAddedIndex].setNickname(nickname);

	std::string phoneNumber;
	while (phoneNumber.empty()) {
		std::cout << "Phone Number > ";
		if (!(std::getline(std::cin, phoneNumber))) {
			std::cout << "ERROR" << std::endl;
			return;
		}
	}
	this->_contacts[this->_lastAddedIndex].setPhoneNumber(phoneNumber);

	std::string darkestSecret;
	while (darkestSecret.empty()) {
		std::cout << "Darkest Secret > ";
		if (!(std::getline(std::cin, darkestSecret))) {
			std::cout << "ERROR" << std::endl;
			return;
		}
	}
	this->_contacts[this->_lastAddedIndex].setDarkestSecret(darkestSecret);
}

void	PhoneBook::searchContact() {
	if (this->_contactsNumber == 0) {
		std::cout << "Add contacts if you want to get more infos" << std::endl;
		return;
	}

	this->showContacts();

	int indexToGet = -1;
	std::string indexStr;
	while (indexToGet < 0 || indexToGet >= MAX_CONTACTS_NUMBER) {
		std::cout << "Index > ";
		if (!(std::getline(std::cin, indexStr))) {
			std::cout << "ERROR" << std::endl;
			return;
		}
		indexToGet = atoi(indexStr.c_str());
		if ((indexStr != "0" && indexToGet == 0) || indexToGet >= this->_contactsNumber)
			indexToGet = -1;
	}

	this->_contacts[indexToGet].showInformations();
}

void	PhoneBook::showContacts() {
	std::cout	<< "+----------+----------+----------+----------+" << std::endl
				<< "|     Index|First Name| Last Name|  Nickname|" << std::endl
				<< "+----------+----------+----------+----------+" << std::endl;

	for (int i = 0; i < MAX_CONTACTS_NUMBER; i++) {
		if (i < this->_contactsNumber) {
			std::cout << "|         " << i << "|";
			this->showShortString(this->_contacts[i].getFirstName());
			std::cout << "|";
			this->showShortString(this->_contacts[i].getLastName());
			std::cout << "|";
			this->showShortString(this->_contacts[i].getNickname());
			std::cout << "|" << std::endl;
		} else
			std::cout << "|          |          |          |          |" << std::endl;
	}

	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void	PhoneBook::showShortString(std::string str) {
	int spaces = 10 - str.length();
	if (spaces > 0) {
		while (spaces-- > 0)
			std::cout << " ";
		std::cout << str;
	} else {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		if (spaces == 0)
			std::cout << str[9];
		else
			std::cout << ".";
	}
}
