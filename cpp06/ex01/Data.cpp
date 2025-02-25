/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:05:40 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/25 20:43:35 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

Data::Data(): _id(0), _name("Constructor"), _surname("NoParams") {
}

Data::Data(int id, const std::string &name, const std::string &surname): _id(id), _name(name), _surname(surname) {
}

Data::Data(const Data &data): _id(data._id), _name(data._name), _surname(data._surname) {
}

Data	&Data::operator=(const Data &data) {
	(void) data;
	return *this;
}

Data::~Data() {
}

int	Data::getId() const {
	return this->_id;
}

const std::string	&Data::getName() const {
	return this->_name;
}

const std::string	&Data::getSurname() const {
	return this->_surname;
}

std::ostream	&operator<<(std::ostream &out, const Data &data) {
	out << "[ " << data.getId() << " | " << data.getName() << " | " << data.getSurname() << " ]";
	return out;
}
