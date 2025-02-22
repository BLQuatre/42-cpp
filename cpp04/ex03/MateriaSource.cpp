/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 03:00:22 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 03:43:17 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < MATERIA_SIZE; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	for (int i = 0; i < MATERIA_SIZE; i++)
		this->_materia[i] = materiaSource._materia[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &materiaSource) {
	if (this != &materiaSource) {
		for (int i = 0; i < MATERIA_SIZE; i++)
			this->_materia[i] = materiaSource._materia[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < MATERIA_SIZE; i++) {
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia) {
	if (!materia)
		return;
	for (int i = 0; i < MATERIA_SIZE; i++)
		if (!this->_materia[i]) {
			this->_materia[i] = materia;
			return;
		}
}
#include <iostream>
AMateria	*MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < MATERIA_SIZE; i++) {
		if (this->_materia[i] && this->_materia[i]->getType() == type) {
			return this->_materia[i]->clone();
		}
	}
	return 0;
}
