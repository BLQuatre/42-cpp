/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/14 22:02:10 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <stack>
#include "RPN.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Error" << std::endl;
		return EXIT_FAILURE;
	}

	int result = RPN::calculate(argv[1]);

	std::cout << result << std::endl;

	return EXIT_SUCCESS;
}
