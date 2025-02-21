/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:45:53 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/21 22:12:04 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.hpp"

int main() {
	ScavTrap a("Gobelin");
	ScavTrap b( a );
	ScavTrap c;

	c = b;

	std::cout << "a: " << a << std::endl;
	a.attack("Golem");
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.guardGate();
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.beRepaired(1);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.guardGate();
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(20);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(50);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.guardGate();
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(100);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(0);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.beRepaired(1);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.guardGate();
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.attack("Golem");
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.guardGate();
	std::cout << "a: " << a << std::endl << std::endl;

	return EXIT_SUCCESS;
}
