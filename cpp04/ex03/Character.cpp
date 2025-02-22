/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 02:06:04 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 04:23:13 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character(): _name("Gobelin") {
	for (int i = 0; i < INV_SIZE; i++)
		this->_inventory[i] = NULL;
	std::cout	<< "[#" << this << "] New character " << this->_name << " (No params)" << std::endl;
}

Character::Character(const std::string &name): _name(name) {
	for (int i = 0; i < INV_SIZE; i++)
		this->_inventory[i] = NULL;
	std::cout	<< "[#" << this << "] New character " << this->_name << " (No params)" << std::endl;
}

Character::Character(const Character &character) : _name(character._name) {
	for (int i = 0; i < INV_SIZE; i++) {
		if (character._inventory[i])
			this->_inventory[i] = character._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	std::cout	<< "[#" << this << "] New character " << this->_name << " (Copy)" << std::endl;
}

Character	&Character::operator=(const Character &character) {
	if (this != &character) {
		for (int i = 0; i < INV_SIZE; i++) {
			if (character._inventory[i])
			{
				if (this->_inventory[i])
					delete this->_inventory[i];
				this->_inventory[i] = character._inventory[i]->clone();
			} else
				this->_inventory[i] = NULL;
		}
		this->_name = character._name;
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < INV_SIZE; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout	<< "[#" << this << "] Character " << this->_name << " destroyed" << std::endl;
}

const std::string	&Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria *m) {
	if (!m)
		return;
	for (int i = 0; i < INV_SIZE; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			std::cout	<< "[#" << this << "] Character " << this->_name << " equipped with " << m->getType() << std::endl;
			return ;
		}
	}
}

void	Character::unequip(int idx) {

	if (idx < 0 || idx >= INV_SIZE)
		return;
	if (!this->_inventory[idx])
		return;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {

	if (idx < 0 || idx >= INV_SIZE)
		return;
	if (!this->_inventory[idx])
		return;
	this->_inventory[idx]->use(target);
}
