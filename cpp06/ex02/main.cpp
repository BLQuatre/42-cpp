/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/25 22:36:01 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Functions.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	srand(time(0));

	std::cout << "Trying Identify function (with ptr) with NULL Base:" << std::endl;
	Base *null = NULL;
	try {
		identify(null);
	} catch (const std::invalid_argument &ex) {
		std::cout << "Invalid arg: " << ex.what() << std::endl;
	}

	for (int i = 0; i < 10; i++) {
		std::cout	<< std::endl << std::endl
					<< "New Attempt:" << std::endl;
		Base *base = generate();
		std::cout	<< std::endl << "Identify function (with ptr):" << std::endl;
		try {
			identify(base);
		} catch (const std::invalid_argument &ex) {
			std::cout << "Invalid arg: " << ex.what() << std::endl;
		}
		std::cout	<< std::endl << "Identify function (with ref):" << std::endl;
		identify(*base);

		delete base;
	}

	return EXIT_SUCCESS;
}
