/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:48:06 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/04 18:30:17 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <PhoneBook.hpp>

int	main() {
	std::string msg;
	PhoneBook phonebook;

	while (true) {
		std::cout << "Do action > ";
		if (!(std::getline(std::cin, msg))) {
			std::cout << "EXIT" << std::endl;
			return EXIT_SUCCESS;
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
	return EXIT_SUCCESS;
}
