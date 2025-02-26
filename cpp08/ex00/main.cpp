/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/26 05:28:34 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <ctime>
#include "easyfind.hpp"

int main() {
	srand(time(NULL));

	size_t size = 15;
	std::vector<int> array(size);
	for (size_t i = 0; i < size; i++)
	{
		int value = rand() % size;
		array.push_back(value);
		std::cout	<< "array[" << i << "] = " << value << std::endl;
	}

	for (size_t i = 0; i < 20; i++) {
		int value = rand() % size;
		try {
			std::cout	<< "Trying to find " << value << " in array..." << std::endl;
			easyfind(array, value);
			std::cout	<< "Value " << value << " is in array." << std::endl;
		} catch(const std::runtime_error &ex) {
			std::cout	<< "Value " << value << " isn't array. (" << ex.what() << ")" << std::endl;
		}
	}

	return EXIT_SUCCESS;
}
