/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/13 01:42:10 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed::Fixed(int const value) {
	this->_value = value << this->_fractional_bits;
}

Fixed::Fixed(float const value) {
	this->_value = roundf(value * (1 << this->_fractional_bits));
}

Fixed	&Fixed::operator=(const Fixed &fixed) {
	this->_value = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed() {
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
	return (int) this->_value >> this->_fractional_bits;
}

bool	Fixed::operator>(const Fixed &fixed) const {
	return this->_value > fixed._value;
}

bool	Fixed::operator<(const Fixed &fixed) const {
	return this->_value < fixed._value;
}

bool	Fixed::operator>=(const Fixed &fixed) const {
	return this->_value >= fixed._value;
}

bool	Fixed::operator<=(const Fixed &fixed) const {
	return this->_value <= fixed._value;
}

bool	Fixed::operator==(const Fixed &fixed) const {
	return this->_value == fixed._value;
}

bool	Fixed::operator!=(const Fixed &fixed) const {
	return this->_value != fixed._value;
}

Fixed	Fixed::operator+(const Fixed &fixed) const {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(const Fixed &fixed) const {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) const {
	if (fixed.getRawBits() == 0) {
		std::cout << "Division by Zero !" << std::endl;
		return (Fixed());
	}
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed	&Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed	&Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	return ((Fixed &)(a < b ? a : b));
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}

Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	return ((Fixed &)(a > b ? a : b));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
