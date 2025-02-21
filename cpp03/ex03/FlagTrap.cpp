/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/21 22:00:27 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FlagTrap.hpp"
#include "ClapTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap() {
	this->_hitPoints = _defaultHitPoints;
	this->_energyPoints = _defaultEnergyPoints;
	this->_attackDamage = _defaultAttackDamage;
	std::cout	<< "ClapTrap " << this->_name << " evolved into a FlagTrap. (No params)." << std::endl;
}

FlagTrap::FlagTrap(const std::string &name) : ClapTrap(name) {
	this->_hitPoints = _defaultHitPoints;
	this->_energyPoints = _defaultEnergyPoints;
	this->_attackDamage = _defaultAttackDamage;
	std::cout	<< "ClapTrap " << this->_name << " evolved into a FlagTrap." << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &flagTrap) : ClapTrap(flagTrap) {
	std::cout	<< "A wild FlagTrap named " << this->_name << " has just been copied." << std::endl;
}

FlagTrap	&FlagTrap::operator=(const FlagTrap &flagTrap) {
	if (this != &flagTrap) {
		std::cout << "A wild FlagTrap named " << this->_name << " has just been asigned." << std::endl;
		ClapTrap::operator=(flagTrap);
	}
	return (*this);
}

FlagTrap::~FlagTrap() {
	std::cout	<< "FlagTrap " << this->_name << " turned back into a ClapTrap." << std::endl;
}

void	FlagTrap::highFivesGuys() {
	if (this->_hitPoints <= 0) {
		std::cout	<< "FlagTrap " << this->_name << " is died. He can't high fives." << std::endl;
		return;
	}

	std::cout	<< "FlagTrap " << this->_name << " wants to high fives!" << std::endl;
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

std::ostream &operator<<(std::ostream &out, const FlagTrap &flagTrap) {
	out	<< "[ Name: " << flagTrap.getName() << " | " << flagTrap.getHitPoints() << " HP | " << flagTrap.getEnergyPoints() << " EP | " << flagTrap.getAttackDamage() << " AD" << " ]";
	return out;
}
