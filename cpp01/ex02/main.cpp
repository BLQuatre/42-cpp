/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:36:45 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/12 13:00:14 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int	main() {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout	<< "Memory address of the string variable\t: `" << &string << "`" << std::endl
				<< "Memory address held by stringPTR\t: `" << stringPTR << "`" << std::endl
				<< "Memory address held by stringREF\t: `" << &stringREF << "`" << std::endl;

	std::cout	<< std::endl;

	std::cout	<< "Value of the string variable\t: `" << string << "`" << std::endl
				<< "Value pointed to by stringPTR\t: `" << *stringPTR << "`" << std::endl
				<< "Value pointed to by stringREF\t: `" << stringREF << "`" << std::endl;

	return EXIT_SUCCESS;
}
