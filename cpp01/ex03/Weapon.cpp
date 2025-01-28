/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:16:42 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/27 18:51:20 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon() {}

const std::string	&Weapon::getType() const {
	return this->type;
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
