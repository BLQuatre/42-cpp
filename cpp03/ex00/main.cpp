/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:45:53 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/21 22:12:31 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Gobelin");
	ClapTrap b( a );
	ClapTrap c;

	c = b;

	std::cout << "a: " << a << std::endl;
	a.attack("Golem");
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.beRepaired(1);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(2);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(4);
	std::cout << "a: " << a << std::endl << std::endl;

	std::cout << "a: " << a << std::endl;
	a.takeDamage(8);
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
