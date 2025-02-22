/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:23:23 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 01:10:20 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain() {
	std::cout	<< "[#" << this << "] A brain appeared. (No params)" << std::endl;
}

Brain::Brain(const Brain &brain) {
	for (int i = 0; i < IDEAS_AMOUNT; i++) {
		this->_ideas[i] = brain._ideas[i];
	}
	std::cout	<< "[#" << this << "] A brain appeared. (Copy)" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain) {
	if (this != &brain) {
		std::cout	<< "[#" << this << "] A brain appeared. (Assignment)" << std::endl;
		for (int i = 0; i < IDEAS_AMOUNT; i++) {
			this->_ideas[i] = brain._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout	<< "[#" << this << "] The brain disappeared." << std::endl;
}

void	Brain::setIdea(int index, const std::string &idea) {
	if (index < 0 || index > 100) {
		std::cout << "Incorrect index!" << std::endl;
		return;
	}

	this->_ideas[index] = idea;
}

void	Brain::showIdea(int index) const {
	if (index < 0 || index > 100) {
		std::cout << "Incorrect index!" << std::endl;
		return;
	}

	std::cout << "Idea " << index << ": `" << this->_ideas[index] << "`." << std::endl;
}
