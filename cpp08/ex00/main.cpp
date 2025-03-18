/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/04 18:32:44 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <deque>
#include <ctime>
#include "easyfind.hpp"

int main() {
	srand(time(NULL));

	size_t size = 15;
	std::vector<int> vector(size);
	for (size_t i = 0; i < size; i++)
	{
		int value = rand() % size;
		vector.push_back(value);
		std::cout	<< "vector[" << i << "] = " << value << std::endl;
	}

	for (size_t i = 0; i < 20; i++) {
		int value = rand() % size;
		try {
			std::cout	<< "Trying to find " << value << " in vector..." << std::endl;
			easyfind(vector, value);
			std::cout	<< "Value " << value << " is in vector." << std::endl;
		} catch(const std::runtime_error &ex) {
			std::cout	<< "Value " << value << " isn't in vector. (" << ex.what() << ")" << std::endl;
		}
	}

	std::cout	<< std::endl << std::endl
				<< "Testing with deque:" << std::endl;

	std::deque<int> deque(size);
	for (size_t i = 0; i < size; i++)
	{
		int value = rand() % size;
		deque.push_back(value);
		std::cout	<< "deque[" << i << "] = " << value << std::endl;
	}

	for (size_t i = 0; i < 20; i++) {
		int value = rand() % size;
		try {
			std::cout	<< "Trying to find " << value << " in deque..." << std::endl;
			easyfind(deque, value);
			std::cout	<< "Value " << value << " is in deque." << std::endl;
		} catch(const std::runtime_error &ex) {
			std::cout	<< "Value " << value << " isn't in deque. (" << ex.what() << ")" << std::endl;
		}
	}


	return EXIT_SUCCESS;
}
