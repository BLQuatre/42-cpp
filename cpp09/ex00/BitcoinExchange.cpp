/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/14 22:24:49 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

void BitcoinExchange::displayFile(const std::string &fileName) {
	std::cout << "Trying to open file: " << fileName << std::endl;

	std::ifstream infile(fileName.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: could not open file" << std::endl;
		exit(EXIT_FAILURE);
	}

	infile.close();
}
