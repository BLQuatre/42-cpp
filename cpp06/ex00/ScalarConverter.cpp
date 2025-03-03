/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:51:52 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/03 16:24:30 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cstdlib>
#include "ScalarConverter.hpp"

static bool is_valid_input(const std::string input) {
	if (input.length() == 1)
		return true;

	if (input.find_first_of('.') != input.find_last_of('.'))
		return false;

	for (size_t i = 0; input[i]; i++) {
		if (std::string(ALLOWED_CHARS_LITTERAL).find(input[i]) == std::string::npos)
			return false;
		if ((input[i] == '-' || input[i] == '+') && i != 0)
			return false;
		if (input[i] == 'f' && i != input.length() - 1)
			return false;
	}
	return true;
}

static void displayTypes(const std::string strs[4]) {
	std::cout	<< "char: " << strs[CHAR] << std::endl
				<< "int: " << strs[INT] << std::endl
				<< "float: " << strs[FLOAT] << std::endl
				<< "double: " << strs[DOUBLE] << std::endl;
}

static bool handlePseudoLitterals(const std::string input) {
	if (input == "nan" || input == "nanf") {
		const std::string strs[4] = { "impossible", "impossible", "nanf", "nan" };
		displayTypes(strs);
		return true;
	}
	if (input == "inf" || input == "+inf" || input == "inff" || input == "+inff") {
		const std::string strs[4] = { "impossible", "impossible", "+inff", "+inf" };
		displayTypes(strs);
		return true;
	}
	if (input == "-inf" || input == "-inff") {
		const std::string strs[4] = { "impossible", "impossible", "-inff", "-inf" };
		displayTypes(strs);
		return true;
	}
	return false;
}

static void charToString(char c, std::string &str) {
	if (std::isprint(c)) {
		str = std::string(3, '\'');
		str[1] = c;
	} else
		str = "Non displayable";
}

static void intToString(int i, std::string &str) {
	std::ostringstream oss;

	oss << i;
	str = oss.str();
}

static void floatToString(float f, std::string &str) {
	std::ostringstream oss;

	oss << f;
	if (oss.str().find('.') == std::string::npos)
		oss << ".0";
	oss << "f";
	str = oss.str();
}

static void doubleToString(double d, std::string &str) {
	std::ostringstream oss;

	oss << d;
	if (oss.str().find('.') == std::string::npos)
		oss << ".0";
	str = oss.str();
}

void	ScalarConverter::convert(const std::string input) {
	if (handlePseudoLitterals(input))
		return;

	if (!is_valid_input(input)) {
		const std::string strs[4] = { "impossible", "impossible", "impossible", "impossible" };
		displayTypes(strs);
		return;
	}

	char	c;
	int		i;
	float	f;
	double	d;

	if (input.length() == 1) {
		c = input[0];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
	} else if (input[input.size() - 1] == 'f') {
		f = std::atof(input.c_str());
		i = static_cast<int>(f);
		c = i;
		d = static_cast<double>(f);
	} else if (input.find('.') == std::string::npos) {
		i = std::atoi(input.c_str());
		c = i;
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	} else {
		d = std::strtod(input.c_str(), NULL);
		i = static_cast<int>(d);
		c = i;
		f = static_cast<float>(d);
	}

	std::string strs[4];

	if (i >= -128 && i <= 127)
		charToString(c, strs[CHAR]);
	else
		strs[CHAR] = "impossible";
	intToString(i, strs[INT]);
	floatToString(f, strs[FLOAT]);
	doubleToString(d, strs[DOUBLE]);

	displayTypes(strs);
}
