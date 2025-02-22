/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:26:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 03:27:37 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout	<< "[#" << this << "] New Ice created. (Type: " << this->_type << ") (No params)" << std::endl;
}

Ice::Ice(const Ice &ice): AMateria("ice") {
	(void) ice;
	std::cout	<< "[#" << this << "] New Ice created. (Type: " << this->_type << ") (Copy)" << std::endl;
}

Ice	&Ice::operator=(const Ice &ice) {
	if (this != &ice) {
		this->_type = ice._type;
		std::cout	<< "[#" << this << "] New Ice created. (Type: " << this->_type << ") (Assignment)" << std::endl;
	}
	return (*this);
}

Ice::~Ice() {
	std::cout	<< "[#" << this << "] Ice destroyed. (Type: " << this->_type << ")" << std::endl;
}

AMateria*	Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use(ICharacter& target) {
	std::cout	<< "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
