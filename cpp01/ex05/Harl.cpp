/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:46:23 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/02 13:21:37 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug() {
	std::cout	<< "[ DEBUG ]"
				<< " I love having extra bacon for my"
				<< " 7XL-double-cheese-triple-pickle-specialketchup burger."
				<< " I really do!"
				<< std::endl;
}

void	Harl::info() {
	std::cout	<< "[ INFO ]"
				<< " I cannot believe adding extra bacon costs more money."
				<< " You didn’t put enough bacon in my burger!"
				<< " If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

void	Harl::warning() {
	std::cout	<< "[ WARNING ]"
				<< " I think I deserve to have some extra bacon for free."
				<< " I’ve been coming for years whereas you started working"
				<< " here since last month."
				<< std::endl;
}

void	Harl::error() {
	std::cout	<< "[ ERROR ]"
				<< " This is unacceptable!"
				<< " I want to speak to the manager now."
				<< std::endl;
}

void	Harl::complain(std::string level) {

	std::string levelsStr[LEVELS] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*levelsFunctions[LEVELS])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < LEVELS; i++) {
		if (levelsStr[i] == level) {
			(this->*levelsFunctions[i])();
			return;
		}
	}

	std::cout	<< "[ UNKNOWN ]"
				<< " This level is not registered in my database!"
				<< std::endl;
}
