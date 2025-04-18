/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/04/09 22:14:37 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <stack>
#include "RPN.hpp"

static bool	isop(int c) {
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

static bool isValidExpression(const std::string &expression) {
	std::string::const_iterator it = expression.begin();
	int elements = 0;

	while (it != expression.end()) {
		if (!isop(*it) && !isdigit(*it))
		return false;

		if (isop(*it)) {
			if (elements < 2)
				return false;
			elements--;
		} else
			elements++;

		it++;
		if (it != expression.end()) {
			if (*it != ' ')
				return false;
			it++;
			if (it == expression.end())
				return false;
		}
	}

	return (elements == 1);
}

static void	doOperation(std::stack<int> &numbers, int op) {
	int i1 = numbers.top();
	numbers.pop();
	int i2 = numbers.top();
	numbers.pop();

	int result = 0;

	switch (op) {
		case '+':
			result = i2 + i1;
			break;
		case '-':
			result = i2 - i1;
			break;
		case '*':
			result = i2 * i1;
			break;
		case '/':
			if (i1 == 0)
				throw std::runtime_error("Division by zero");
			result = i2 / i1;
			break;
	}

	numbers.push(result);
}

int	RPN::calculate(const std::string &input) {
	if (!isValidExpression(input))
		throw std::runtime_error("Invalid expression");

	std::stack<int> numbers;
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++) {
		if (isdigit(*it))
			numbers.push(std::atoi(it.base()));
		else if (isop(*it))
			doOperation(numbers, *it);
	}

	return numbers.top();
}
