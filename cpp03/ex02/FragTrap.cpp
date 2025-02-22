/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 16:46:19 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->_hitPoints = _defaultHitPoints;
	this->_energyPoints = _defaultEnergyPoints;
	this->_attackDamage = _defaultAttackDamage;
	std::cout	<< "ClapTrap " << this->_name << " evolved into a FragTrap. (No params)." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->_hitPoints = _defaultHitPoints;
	this->_energyPoints = _defaultEnergyPoints;
	this->_attackDamage = _defaultAttackDamage;
	std::cout	<< "ClapTrap " << this->_name << " evolved into a FragTrap." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) {
	std::cout	<< "A wild FragTrap named " << this->_name << " has just been copied." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap) {
	if (this != &fragTrap) {
		std::cout << "A wild FragTrap named " << this->_name << " has just been asigned." << std::endl;
		ClapTrap::operator=(fragTrap);
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout	<< "FragTrap " << this->_name << " turned back into a ClapTrap." << std::endl;
}

void	FragTrap::highFivesGuys() {
	if (this->_hitPoints <= 0) {
		std::cout	<< "FragTrap " << this->_name << " is died. He can't high fives." << std::endl;
		return;
	}

	std::cout	<< "FragTrap " << this->_name << " wants to high fives!" << std::endl;
	std::string res;
	while (res.empty() || res != "yes")
	{
		if (res == "no")
			std::cout << "You can't refuse a high fives!" << std::endl;
		else if (!res.empty())
			std::cout << "Please answer with 'yes' or 'no'!" << std::endl;
		std::cout << "High fives ? [yes/no] > ";
		if (!(std::getline(std::cin, res))) {
			std::cout << "^D" << std::endl <<"YOU CAN'T REFUSE A HIGH FIVES!!!" << std::endl;
			return;
		}
	}
	std::cout << "BIG HIGH FIVES, YEAH!!!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const FragTrap &fragTrap) {
	out	<< "[ Name: " << fragTrap.getName() << " | " << fragTrap.getHitPoints() << " HP | " << fragTrap.getEnergyPoints() << " EP | " << fragTrap.getAttackDamage() << " AD" << " ]";
	return out;
}
