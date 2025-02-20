/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/20 15:58:58 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), _guardingGate(false) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout	<< "ClapTrap " << this->_name << " evolved into a ScavTrap. (No params)." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name), _guardingGate(false) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout	<< "ClapTrap " << this->_name << " evolved into a ScavTrap." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap), _guardingGate(scavTrap._guardingGate) {
	std::cout	<< "A wild ScavTrap named " << this->_name << " has just been copied." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap) {
	if (this != &scavTrap) {
		std::cout << "A wild ScavTrap named " << this->_name << " has just been asigned." << std::endl;
		ClapTrap::operator=(scavTrap);
		this->_guardingGate = scavTrap._guardingGate;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout	<< "ScavTrap " << this->_name << " turned back into a ClapTrap." << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (!this->hasEnoughPoints())
		return;
	this->_energyPoints--;
	std::cout	<< "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	if (this->_hitPoints <= 0 && !this->_guardingGate) {
		std::cout	<< "ScavTrap " << this->_name << " is died. He can't guard the gate." << std::endl;
		return;
	}

	this->_guardingGate = !(this->_guardingGate);
	if (this->_guardingGate)
		std::cout	<< "ScavTrap " << this->_name << " is now guarding gate." << std::endl;
	else
		std::cout	<< "ScavTrap " << this->_name << " is no longer guarding gate." << std::endl;

}

bool	ScavTrap::isGuardingGate() const {
	return this->_guardingGate;
}

std::ostream &operator<<(std::ostream &out, const ScavTrap &scavTrap) {
	out	<< "[ Name: " << scavTrap.getName() << " | " << scavTrap.getHitPoints() << " HP | " << scavTrap.getEnergyPoints() << " EP | " << scavTrap.getAttackDamage() << " AD | Guarding Gate: " << scavTrap.isGuardingGate() << " ]";
	return out;
}
