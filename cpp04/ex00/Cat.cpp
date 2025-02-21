/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:23:23 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 00:03:39 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout	<< "[#" << this << "] A cat appeared. It's a " << this->_type << ". (No params)" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout	<< "[#" << this << "] A cat appeared. It's a " << this->_type << ". (Copy)" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		std::cout	<< "[#" << this << "] A cat appeared. It's a " << this->_type << ". (Assignment)" << std::endl;
		Animal::operator=(cat);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout	<< "[#" << this << "] The cat disappeared. (Type: " << this->_type << ")" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "[#" << this << "] MOEW 🐈" << std::endl;
}
