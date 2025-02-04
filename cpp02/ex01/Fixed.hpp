/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/04 22:40:09 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	value;
		static const int fractional_bits = 8;

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
		int	toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
