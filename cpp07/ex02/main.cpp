/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/26 02:22:24 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include "Array.hpp"

int main() {
	std::cout	<< std::endl << std::endl
				<< "Testing with int:" << std::endl;
	{
		Array<int> array = Array<int>();

		try {
			std::cout << array[0] << std::endl;
		} catch (const std::out_of_range &ex) {
			std::cout << ex.what() << std::endl;
		}
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with int:" << std::endl;
	{
		Array<int> array = Array<int>(10);

		for (unsigned int i = 0; i < array.size(); i++) {
			std::cout << "[BEFORE] array[" << i << "] = " << array[i] << std::endl;
			array[i] += i;
			std::cout << "[AFTER] array[" << i << "] = " << array[i] << std::endl << std::endl;
		}
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with char:" << std::endl;
	{
		Array<char> array = Array<char>(10);

		for (unsigned int i = 0; i < array.size(); i++) {
			std::cout << "[BEFORE] array[" << i << "] = " << array[i] << std::endl;
			array[i] += (97 + i);
			std::cout << "[AFTER] array[" << i << "] = " << array[i] << std::endl << std::endl;
		}
	}

	return EXIT_SUCCESS;
}
