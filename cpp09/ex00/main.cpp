/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/29 10:27:05 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
	(void) argv;

	if (argc != 2) {
		std::cerr << "Error: could not open file" << std::endl;
		return EXIT_FAILURE;
	}

	try {
		BitcoinExchange bitcoinExchange("data.csv");
		bitcoinExchange.displayExchange(argv[1]);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
