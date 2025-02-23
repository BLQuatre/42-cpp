/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/23 01:33:53 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	// *** VALID SIGN GRADE *** //
	std::cout	<< "-----{ VALID SIGN GRADE }-----" << std::endl;
	{
		Form form = Form("War Peace", 50, 25);
		Bureaucrat bureaucrat = Bureaucrat("V30", 30);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(form);

		std::cout	<< std::endl;
		std::cout	<< form << std::endl;
		std::cout	<< std::endl;
	}

	std::cout	<< std::endl;

	// *** INVALID SIGN GRADE *** //
	std::cout	<< "-----{ INVALID SIGN GRADE }-----" << std::endl;

	{
		Form form = Form("War Peace", 50, 25);
		Bureaucrat bureaucrat = Bureaucrat("V60", 60);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;

		bureaucrat.signForm(form);

		std::cout	<< std::endl;
		std::cout << form << std::endl;
		std::cout	<< std::endl;
	}

	return EXIT_SUCCESS;
}
