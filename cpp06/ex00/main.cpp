/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/03 16:13:39 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ScalarConverter.hpp"

// void	test(const std::string input) {
// 	std::cout << "Input: " << input << std::endl;
// 	ScalarConverter::convert(input);
// 	std::cout << "--------------------------" << std::endl;
// }

// void	tests() {
// 	test("0");
// 	test("z");
// 	test("A");
// 	test("0");
// 	test("@");

// 	test("0");
// 	test("-42");
// 	test("42");
// 	test("2147483647");
// 	test("-2147483648");
// 	test("9999999999");

// 	test("0.0f");
// 	test("-4.2f");
// 	test("4.2f");
// 	test("42.42f");

// 	test("0.0");
// 	test("-4.2");
// 	test("4.2");
// 	test("42.42");

// 	test("-inff");
// 	test("+inff");
// 	test("nanf");

// 	test("-inf");
// 	test("+inf");
// 	test("nan");

// 	test("abc");
// 	test("42abc");
// 	test("'ab'");
// 	test("42.42.42");
// }

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <value>" << std::endl;
		// tests();
		return EXIT_FAILURE;
	}

	ScalarConverter::convert(argv[1]);

	return EXIT_SUCCESS;
}
