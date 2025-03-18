/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/15 17:42:35 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

static std::string	trim(const std::string& str) {
	size_t first = str.find_first_not_of(" \t\n\r");
	if (first == std::string::npos)
		return "";
	size_t last = str.find_last_not_of(" \t\n\r");
	return str.substr(first, last - first + 1);
}

void BitcoinExchange::displayFile(const std::string &fileName) {
	std::cout << "Trying to open file: " << fileName << std::endl;

	std::ifstream infile(fileName.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: could not open file" << std::endl;
		exit(EXIT_FAILURE);
	}

	infile.close();
}
