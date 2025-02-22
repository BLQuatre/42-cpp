/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:26:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 03:19:24 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(): _type("Default") {
	std::cout	<< "[#" << this << "] New AMateria created. (Type: " << this->_type << ") (No params)" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type) {
	std::cout	<< "[#" << this << "] New AMateria created. (Type: " << this->_type << ") (Params)" << std::endl;
}


AMateria::AMateria(const AMateria &materia): _type(materia._type) {
	std::cout	<< "[#" << this << "] New AMateria created. (Type: " << this->_type << ") (Copy)" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &materia) {
	if (this != &materia) {
		this->_type = materia._type;
		std::cout	<< "[#" << this << "] New AMateria created. (Type: " << this->_type << ") (Assignment)" << std::endl;
	}
	return (*this);
}

AMateria::~AMateria() {
	std::cout	<< "[#" << this << "] AMateria destroyed. (Type: " << this->_type << ")" << std::endl;
}

const std::string	&AMateria::getType() const {
	return this->_type;
}

void	AMateria::use(ICharacter &target) {
	std::cout	<< "[#" << this << "] AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
