/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/10 22:03:18 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "RPN.hpp"
#include <stack>

int main() {
	// int i = RPN::calculate("coucou");

	// std::cout << "Result: " << i << std::endl;


	std::stack<std::string> test;
	test.push("3");
	test.push("2");
	test.push("1");
	std::string s1 = test.top();
	test.pop();
	std::string s2 = test.top();
	test.pop();
	int result = std::atoi(s1.c_str()) + std::atoi(s2.c_str());




	return EXIT_SUCCESS;
}
