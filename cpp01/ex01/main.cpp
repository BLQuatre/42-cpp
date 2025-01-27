/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:39:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/27 16:23:02 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

int	main(int argc, char *argv[]) {
	if (argc != 3) {
		std::cout << "Usage: " << argv[0] << " <zombie_amount> <zombies_name>" << std::endl;
		return EXIT_FAILURE;
	}

	int number = std::atoi(argv[1]);
	if (number <= 0) {
		std::cout << "The number of zombie must be at least one !" << std::endl;
		return EXIT_FAILURE;
	}
	std::string name = argv[2];
	if (name.length() == 0) {
		std::cout << "The name of zombies must be at least one char long" << std::endl;
		return EXIT_FAILURE;
	}
	Zombie *horde = zombieHorde(number, argv[2]);
	for (int i = 0; i < number; i++)
		horde[i].announce();

	delete[] horde;
	return EXIT_SUCCESS;
}
