/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/13 02:44:26 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Golem") {
	std::cout << "A wild " << this->_name << " has just appeared" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name) {
	std::cout << "A wild " << this->_name << " has just appeared" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : _name(clapTrap._name),
	_hit_points(clapTrap._hit_points), _energy_points(clapTrap._energy_points),
	_attack_damage(clapTrap._attack_damage) {
		std::cout << "A wild " << this->_name << " has just been copied" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap) {
	if (this != &clapTrap)
	{
		std::cout << "A wild " << this->_name << " has just been asigned" << std::endl;
		this->_name = clapTrap._name;
		this->_hit_points = clapTrap._hit_points;

	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << " has just disappeared in the dark" << std::endl;
}

Fixed	Point::getX() const {
	return this->_x;
}

Fixed	Point::getY() const {
	return this->_y;
}
