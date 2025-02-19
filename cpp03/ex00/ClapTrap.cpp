/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/19 01:58:45 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Golem"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout	<< "A wild " << this->_name << " ClapTrap has just appeared" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout	<< "A wild " << this->_name << " ClapTrap has just appeared" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : _name(clapTrap._name), _hitPoints(clapTrap._hitPoints),
	_energyPoints(clapTrap._energyPoints), _attackDamage(clapTrap._attackDamage) {
		std::cout	<< "A wild " << this->_name << " ClapTrap has just been copied" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap) {
	if (this != &clapTrap) {
		std::cout << "A wild " << this->_name << " has just been asigned" << std::endl;
		this->_name = clapTrap._name;
		this->_hitPoints = clapTrap._hitPoints;
		this->_energyPoints = clapTrap._energyPoints;
		this->_attackDamage = clapTrap._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << " has just disappeared in the dark" << std::endl;
}

bool	ClapTrap::hasEnoughPoints() {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		return true;
	std::cout << "ClapTrap " << this->_name << " doesn't have enough energy or hit points to do that." << std::endl;
	return false;
}

const std::string	ClapTrap::getName() const {
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}

void	ClapTrap::attack(const std::string &target) {
	if (!this->hasEnoughPoints())
		return;
	this->_energyPoints--;
	std::cout	<< "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return;
	}
	if (this->_hitPoints > amount) {
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes damage and loses " << amount << " hit points." << std::endl;
	} else {
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " died." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->hasEnoughPoints())
		return;
	std::cout	<< "ClapTrap " << this->_name << " repairs itself with " << amount << " hit points." << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clapTrap) {
	out	<< "[ Name: " << clapTrap.getName() << " | " << clapTrap.getHitPoints() << " HP | " << clapTrap.getEnergyPoints() << " EP | " << clapTrap.getAttackDamage() << " AD ]";
	return out;
}
