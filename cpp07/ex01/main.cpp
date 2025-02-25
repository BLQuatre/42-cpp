/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/26 00:49:52 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "iter.hpp"

void addInt(int &value) {
	value += 10;
}

void printInt(int &value) {
	std::cout << value << " ";
}

void addFloat(float &value) {
	value += 10;
}

void printFloat(float &value) {
	std::cout << value << " ";
}

void addChar(char &value) {
	value += 10;
}

void printChar(char &value) {
	std::cout << value << " ";
}

int main() {
	std::cout	<< std::endl << std::endl
				<< "Testing with int:" << std::endl;
	{
		int array[] = { 1, 2, 3, 4 };

		iter(array, 4, &printInt);
		std::cout	<< std::endl;

		iter(array, 4, &addInt);

		iter(array, 4, &printInt);
		std::cout	<< std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with float:" << std::endl;
	{
		float array[] = { 1.11, 2.22, 3.33, 4.44 };

		iter(array, 4, &printFloat);
		std::cout	<< std::endl;

		iter(array, 4, &addFloat);

		iter(array, 4, &printFloat);
		std::cout	<< std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with char:" << std::endl;
	{
		char array[] = { 'A', 'C', 'D', 'C' };

		iter(array, 4, &printChar);
		std::cout	<< std::endl;

		iter(array, 4, &addChar);

		iter(array, 4, &printChar);
		std::cout	<< std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with NULL array:" << std::endl;
	{
		int *nullArray = NULL;

		iter(nullArray, 5, printInt);
		std::cout << "Nothing with null array" << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with NULL function:" << std::endl;
	{
		int array[] = { 1, 2, 3, 4 };

		iter(array, 5, (void (*)(int&)) NULL);
		std::cout << "Nothing with null function" << std::endl;
	}

	return EXIT_SUCCESS;
}
