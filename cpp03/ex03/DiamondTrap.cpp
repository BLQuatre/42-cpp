/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/20 17:01:51 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"
#include "DiamondTrap.hpp"
#include "FlagTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Golem_clap_name"), _name("Golem") {
	this->_hitPoints = FlagTrap::_hitPoints;
	this->_energyPoints = DiamondTrap::_energyPoints;
	this->_attackDamage = FlagTrap::_attackDamage;
	std::cout	<< "ClapTrap " << this->_name << " evolved into a DiamondTrap. (No params)." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), _name(name) {
	this->_hitPoints = FlagTrap::_hitPoints;
	this->_energyPoints = DiamondTrap::_energyPoints;
	this->_attackDamage = FlagTrap::_attackDamage;
	std::cout	<< "ClapTrap " << this->_name << " evolved into a DiamondTrap." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FlagTrap(diamondTrap), _name(diamondTrap._name) {
	std::cout	<< "A wild DiamondTrap named " << this->_name << " has just been copied." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	if (this != &diamondTrap) {
		std::cout << "A wild DiamondTrap named " << this->_name << " has just been asigned." << std::endl;
		ClapTrap::operator=(diamondTrap);
		this->_name = diamondTrap._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout	<< "DiamondTrap " << this->_name << " turned back into a ClapTrap." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout	<< "Hey !" << std::endl
				<< "My ClapTrap name is " << ClapTrap::_name << "." << std::endl
				<< "My DiamondTrap name is " << this->_name << "." << std::endl
				<< "Nice to meet you!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const DiamondTrap &diamondTrap) {
	out	<< "[ Name: " << diamondTrap.getName() << " | " << diamondTrap.getHitPoints() << " HP | " << diamondTrap.getEnergyPoints() << " EP | " << diamondTrap.getAttackDamage() << " AD ]";
	return out;
}
