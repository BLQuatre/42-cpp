/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/05 01:54:17 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	_value;
		static const int _fractional_bits = 8;

	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(const Fixed &fixed);
		Fixed	&operator=(const Fixed &fixed);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat() const;
		int		toInt() const;

		/*** Comparison operators */
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		/*** Arithmetic operators */
		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		/*** Increment / Decrement operators */
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		/*** Min / Max functions */
		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
