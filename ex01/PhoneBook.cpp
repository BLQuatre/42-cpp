/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:38:57 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/08 15:47:51 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : lastAddedIndex(-1) {};

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact()
{
	// Contact contact

	// if (contact.getFirstName().length() == 0
	// 	|| contact.getLastName().length() == 0
	// 	|| contact.getNickname().length() == 0
	// 	|| contact.getPhoneNumber().length() == 0
	// 	|| contact.getDarkestSecret().length() == 0
	// )
	// 	return;

	if (this->lastAddedIndex >= 7)
		this->lastAddedIndex = 0;
	else
		(this->lastAddedIndex)++;

	// this->contacts[this->lastAddedIndex] = contact;
}

void	PhoneBook::searchContact()
{
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
}