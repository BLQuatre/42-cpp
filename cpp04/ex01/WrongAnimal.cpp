/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:24:15 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 17:39:59 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Wrong Thing") {
	std::cout	<< "[#" << this << "] A wrong animal appeared. It's a wrong " << this->_type << ". (No params)" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
	std::cout	<< "[#" << this << "] A wrong animal appeared. It's a wrong " << this->_type << ". (Params)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : _type(wrongAnimal._type) {
	std::cout	<< "[#" << this << "] A wrong appeared. It's a wrong " << this->_type << ". (Copy)" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	if (this != &wrongAnimal) {
		std::cout	<< "[#" << this << "] A wrong animal appeared. It's a wrong " << this->_type << ". (Assignment)" << std::endl;
		this->_type = wrongAnimal._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout	<< "[#" << this << "] The wrong " << this->_type << " disappeared. " << std::endl;
}

const std::string	WrongAnimal::getType() const {
	return this->_type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "[#" << this << "] Wrong..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const WrongAnimal &wrongAnimal) {
	out	<< "Wrong " << wrongAnimal.getType();
	return out;
}
