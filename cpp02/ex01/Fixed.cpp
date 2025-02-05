/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/05 01:53:59 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_fractional_bits;
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_fractional_bits));
}

Fixed	&Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float	Fixed::toFloat() const {
	return (float) this->_value / (1 << this->_fractional_bits);
}

int	Fixed::toInt() const {
	return (int) this->_value / (1 << this->_fractional_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
