/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/23 00:41:37 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"

int main() {
	// *** Lowest Test *** //
	std::cout	<< "-----{ LOWEST TEST }-----" << std::endl;
	{
		try {
			Bureaucrat lowestError("Lowest", 151);
		} catch (const Bureaucrat::GradeTooLowException &ex) {
			std::cerr	<< "Failed to create Bureaucrat: " << ex.what() << std::endl;
		}

		std::cout	<< std::endl;

		Bureaucrat lowest("Lowest", 150);

		std::cout	<< std::endl;

		try {
			lowest.decrementGrade();
		} catch (const Bureaucrat::GradeTooLowException &ex) {
			std::cerr	<< "[#" << &lowest << "] Failed to decrement Bureaucrat " << lowest.getName() << "'s grade from " << lowest.getGrade() << " to " << lowest.getGrade() + 1 << ": " << ex.what() << std::endl;
		}

		std::cout	<< std::endl;

		std::cout	<< "Before increment grade of " << lowest << std::endl;
		lowest.incrementGrade();
		std::cout	<< "After increment grade of " << lowest << std::endl;

		std::cout	<< std::endl;
	}

	std::cout	<< std::endl;

	// *** Highest Test *** //
	std::cout	<< "-----{ HIGHEST TEST }-----" << std::endl;
	{
		try {
			Bureaucrat highestError("Highest", 0);
		} catch (const Bureaucrat::GradeTooHighException &ex) {
			std::cerr	<< "Failed to create Bureaucrat: " << ex.what() << std::endl;
		}

		std::cout	<< std::endl;

		Bureaucrat highest("Highest", 1);

		std::cout	<< std::endl;

		try {
			highest.incrementGrade();
		} catch (const Bureaucrat::GradeTooHighException &ex) {
			std::cerr	<< "[#" << &highest << "] Failed to increment Bureaucrat " << highest.getName() << "'s grade from " << highest.getGrade() << " to " << highest.getGrade() - 1 << ": " << ex.what() << std::endl;
		}

		std::cout	<< std::endl;

		std::cout	<< "Before decrement grade of " << highest << std::endl;
		highest.decrementGrade();
		std::cout	<< "After decrement grade of " << highest << std::endl;

		std::cout	<< std::endl;
	}


	return EXIT_SUCCESS;
}
