/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:45:53 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 16:47:38 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"

int main() {
	FragTrap a("Gobelin");
	FragTrap b( a );
	FragTrap c;

	c = b;

	std::cout << "a: " << a << std::endl;
	a.attack("Golem");
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.beRepaired(1);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(20);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(50);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.highFivesGuys();
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(100);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.highFivesGuys();
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(0);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.beRepaired(1);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.attack("Golem");
	std::cout << "a: " << a << std::endl << std::endl;

	return EXIT_SUCCESS;
}
