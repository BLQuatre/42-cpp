/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:48:06 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/13 14:23:19 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <PhoneBook.hpp>

int	main(void)
{
	std::string msg;
	PhoneBook phonebook;

	while (true) {
		std::cout << "Do action > ";
		if (!(std::getline(std::cin, msg))) {
			std::cout << "EXIT" << std::endl;
			return 1;
		}
		if (msg == "EXIT")
			break;
		else if (msg == "SEARCH")
			phonebook.searchContact();
		else if (msg == "ADD")
			phonebook.addContact();
		else {
			std::cout << msg << " is not a valid action !" << std::endl;
			std::cout << "Valid actions: SEARCH, ADD, EXIT" << std::endl;
		}
	}
	return 0;
}
