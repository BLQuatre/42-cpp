/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:45:53 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/04 23:57:46 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main() {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout	<< std::endl
				<< "Calling Fixed#getRawBits():" << std::endl
				<< "a is " << a.getRawBits() << " as raw bits" << std::endl
				<< "b is " << b.getRawBits() << " as raw bits" << std::endl
				<< "c is " << c.getRawBits() << " as raw bits" << std::endl
				<< "d is " << d.getRawBits() << " as raw bits" << std::endl
				<< std::endl
				<< "Calling class:" << std::endl
				<< "a is " << a << std::endl
				<< "b is " << b << std::endl
				<< "c is " << c << std::endl
				<< "d is " << d << std::endl
				<< std::endl
				<< "Calling Fixed#toFloat():" << std::endl
				<< "a is " << a.toFloat() << " as float" << std::endl
				<< "b is " << b.toFloat() << " as float" << std::endl
				<< "c is " << c.toFloat() << " as float" << std::endl
				<< "d is " << d.toFloat() << " as float" << std::endl
				<< std::endl
				<< "Calling Fixed#toInt():" << std::endl
				<< "a is " << a.toInt() << " as integer" << std::endl
				<< "b is " << b.toInt() << " as integer" << std::endl
				<< "c is " << c.toInt() << " as integer" << std::endl
				<< "d is " << d.toInt() << " as integer" << std::endl
				<< std::endl;

	return 0;
}
