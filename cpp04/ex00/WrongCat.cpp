/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:23:23 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 00:28:19 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Wrong Cat") {
	std::cout	<< "[#" << this << "] A wrong cat appeared. It's a wrong" << this->_type << ". (No params)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat) {
	std::cout	<< "[#" << this << "] A wrong cat appeared. It's a wrong " << this->_type << ". (Copy)" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongCat) {
	if (this != &wrongCat) {
		std::cout	<< "[#" << this << "] A wrong cat appeared. It's a wrong " << this->_type << ". (Assignment)" << std::endl;
		WrongAnimal::operator=(wrongCat);
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout	<< "[#" << this << "] The wrong cat disappeared. (Type: Wrong" << this->_type << ")" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "[#" << this << "] Wrong MOEW 🐈" << std::endl;
}
