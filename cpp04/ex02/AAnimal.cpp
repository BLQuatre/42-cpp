/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:24:15 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 01:37:32 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Thing") {
	std::cout	<< "[#" << this << "] An animal appeared. It's a " << this->_type << ". (No params)" << std::endl;
}

AAnimal::AAnimal(const std::string &type) : _type(type) {
	std::cout	<< "[#" << this << "] An animal appeared. It's a " << this->_type << ". (Params)" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) : _type(animal._type) {
	std::cout	<< "[#" << this << "] An animal appeared. It's a " << this->_type << ". (Copy)" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal) {
	if (this != &animal) {
		std::cout	<< "[#" << this << "] An animal appeared. It's a " << this->_type << ". (Assignment)" << std::endl;
		this->_type = animal._type;
	}
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout	<< "[#" << this << "] The " << this->_type << " disappeared. " << std::endl;
}

const std::string	AAnimal::getType() const {
	return this->_type;
}

std::ostream &operator<<(std::ostream &out, const AAnimal &animal) {
	out	<< animal.getType();
	return out;
}
