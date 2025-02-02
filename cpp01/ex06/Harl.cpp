/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:46:23 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/02 14:02:25 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug() {
	std::cout	<< "[ DEBUG ]" << std::endl
				<< "I love having extra bacon for my"
				<< " 7XL-double-cheese-triple-pickle-specialketchup burger."
				<< " I really do!"
				<< std::endl << std::endl;
}

void	Harl::info() {
	std::cout	<< "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon costs more money."
				<< " You didn’t put enough bacon in my burger!"
				<< " If you did, I wouldn’t be asking for more!"
				<< std::endl << std::endl;
}

void	Harl::warning() {
	std::cout	<< "[ WARNING ]" << std::endl
				<< "I think I deserve to have some extra bacon for free."
				<< " I’ve been coming for years whereas you started working"
				<< " here since last month."
				<< std::endl << std::endl;
}

void	Harl::error() {
	std::cout	<< "[ ERROR ]" << std::endl
				<< "This is unacceptable!"
				<< " I want to speak to the manager now."
				<< std::endl << std::endl;
}

void	Harl::complain(std::string level) {
	std::string	levelsStr[LEVELS] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	int	i;
	for (i = 0; i < LEVELS; i++) {
		if (levelsStr[i] == level) {
			break;
		}
	}

	switch (i) {
		case 0:
			this->debug();
			// fallthrough
		case 1:
			this->info();
			// fallthrough
		case 2:
			this->warning();
			// fallthrough
		case 3:
			this->error();
			break;
		default:
		std::cout	<< "[ Probably complaining about insignificant problems ]"
					<< std::endl;
			break;
	}
}
