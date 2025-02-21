/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:24:15 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 00:35:34 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(): _type("Thing") {
	std::cout	<< "[#" << this << "] An animal appeared. It's a " << this->_type << ". (No params)" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
	std::cout	<< "[#" << this << "] An animal appeared. It's a " << this->_type << ". (Params)" << std::endl;
}

Animal::Animal(const Animal &animal) : _type(animal._type) {
	std::cout	<< "[#" << this << "] An animal appeared. It's a " << this->_type << ". (Copy)" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal) {
	if (this != &animal) {
		std::cout	<< "[#" << this << "] An animal appeared. It's a " << this->_type << ". (Assignment)" << std::endl;
		this->_type = animal._type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout	<< "[#" << this << "] The " << this->_type << " disappeared. " << std::endl;
}

const std::string	Animal::getType() const {
	return this->_type;
}

void	Animal::makeSound() const {
	std::cout << "[#" << this << "] ..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Animal &animal) {
	out	<< animal.getType();
	return out;
}
