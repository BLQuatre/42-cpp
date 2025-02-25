/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/25 23:17:55 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "whatever.hpp"

int main() {
	std::cout	<< "Testing with int:" << std::endl;
	{
		int a = 5;
		int b = 10;

		std::cout	<< "[BEFORE SWAP] a: " << a << " - b: " << b << std::endl;
		::swap(a, b);
		std::cout	<< "[AFTER SWAP] a: " << a << " - b: " << b << std::endl;

		std::cout << "min(" << a << ", " << b <<") => " << ::min(a, b) << std::endl;
		std::cout << "max(" << a << ", " << b <<") => " << ::max(a, b) << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with string:" << std::endl;
	{
		std::string a = "Hello";
		std::string b = "World";

		std::cout	<< "[BEFORE SWAP] a: " << a << " - b: " << b << std::endl;
		::swap(a, b);
		std::cout	<< "[AFTER SWAP] a: " << a << " - b: " << b << std::endl;

		std::cout << "min(" << a << ", " << b <<") => " << ::min(a, b) << std::endl;
		std::cout << "max(" << a << ", " << b <<") => " << ::max(a, b) << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with float:" << std::endl;
	{
		float a = 42.42;
		float b = 43.43;

		std::cout	<< "[BEFORE SWAP] a: " << a << " - b: " << b << std::endl;
		::swap(a, b);
		std::cout	<< "[AFTER SWAP] a: " << a << " - b: " << b << std::endl;

		std::cout << "min(" << a << ", " << b <<") => " << ::min(a, b) << std::endl;
		std::cout << "max(" << a << ", " << b <<") => " << ::max(a, b) << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with char:" << std::endl;
	{
		char a = 'a';
		char b = 'A';

		std::cout	<< "[BEFORE SWAP] a: " << a << " - b: " << b << std::endl;
		::swap(a, b);
		std::cout	<< "[AFTER SWAP] a: " << a << " - b: " << b << std::endl;

		std::cout << "min(" << a << ", " << b <<") => " << ::min(a, b) << std::endl;
		std::cout << "max(" << a << ", " << b <<") => " << ::max(a, b) << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Subject tests:" << std::endl;
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	return EXIT_SUCCESS;
}
