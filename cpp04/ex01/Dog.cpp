/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:23:23 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 17:52:16 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain()) {
	std::cout	<< "[#" << this << "] A dog appeared. It's a " << this->_type << ". (No params)" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain(*dog._brain)) {
	std::cout	<< "[#" << this << "] A dog appeared. It's a " << this->_type << ". (Copy)" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		std::cout	<< "[#" << this << "] A dog appeared. It's a " << this->_type << ". (Assignment)" << std::endl;
		Animal::operator=(dog);
		this->_brain = new Brain(*dog._brain);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout	<< "[#" << this << "] The dog disappeared. (Type: " << this->_type << ")" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const {
	std::cout << "[#" << this << "] WOUF 🐕" << std::endl;
}

Brain	*Dog::getBrain() const {
	return this->_brain;
}
