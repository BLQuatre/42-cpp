/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/09 21:42:36 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bitcoinExchange) {
	std::cout << "Copy constructor called" << std::endl;
	*this = bitcoinExchange;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "Destructor called" << std::endl;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &bitcoinExchange) {
	(void) bitcoinExchange;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}
