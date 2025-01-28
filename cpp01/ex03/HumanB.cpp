/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:08:45 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/28 13:58:35 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB() {}

void	HumanB::attack() {
	std::cout << this->name << " attacks with their ";
	if (this->weapon != NULL)
		std::cout	<< this->weapon->getType();
	else
		std::cout	<< "fists";
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
