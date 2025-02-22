/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:26:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 03:22:28 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout	<< "[#" << this << "] New Cure created. (Type: " << this->_type << ") (No params)" << std::endl;
}

Cure::Cure(const Cure &cure): AMateria("cure") {
	(void) cure;
	std::cout	<< "[#" << this << "] New Cure created. (Type: " << this->_type << ") (Copy)" << std::endl;
}

Cure	&Cure::operator=(const Cure &cure) {
	if (this != &cure) {
		this->_type = cure._type;
		std::cout	<< "[#" << this << "] New Cure created. (Type: " << this->_type << ") (Assignment)" << std::endl;
	}
	return (*this);
}

Cure::~Cure() {
	std::cout	<< "[#" << this << "] Cure destroyed. (Type: " << this->_type << ")" << std::endl;
}


AMateria*	Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter& target) {
	std::cout	<< "* heals " << target.getName() << "'s wounds *" << std::endl;
}
