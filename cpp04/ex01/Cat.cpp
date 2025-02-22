/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:23:23 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 01:02:53 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain()) {
	std::cout	<< "[#" << this << "] A cat appeared. It's a " << this->_type << ". (No params)" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat), _brain(new Brain(*cat._brain)) {
	std::cout	<< "[#" << this << "] A cat appeared. It's a " << this->_type << ". (Copy)" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		std::cout	<< "[#" << this << "] A cat appeared. It's a " << this->_type << ". (Assignment)" << std::endl;
		Animal::operator=(cat);
		this->_brain = new Brain(*cat._brain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout	<< "[#" << this << "] The cat disappeared. (Type: " << this->_type << ")" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const {
	std::cout << "[#" << this << "] MOEW 🐈" << std::endl;
}

Brain	*Cat::getBrain() {
	return this->_brain;
}
