/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/26 08:13:32 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Span.hpp"

int main() {
	srand(time(NULL));

	std::cout	<< std::endl << std::endl
				<< "Subject test:" << std::endl;
	Span span(5);
	try {
		span.addNumber(5);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
	} catch (const std::exception &ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Testing shortest span and longest span:" << std::endl;
	try {
		int shortest = span.shortestSpan();
		int longest = span.longestSpan();

		std::cout << "Shortest Span: " << shortest << std::endl;
		std::cout << "Longest Span: " << longest << std::endl;

	} catch (const std::exception &ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Adding one element in full span:" << std::endl;
	try {
		span.addNumber(42);
	} catch (const std::exception &ex) {
		std::cout << "Expected exception: " << ex.what() << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Not enough elements in span (Shortest):" << std::endl;
	try {
		Span smallSpan(1);
		smallSpan.addNumber(10);
		smallSpan.shortestSpan();
	} catch (const std::exception &ex) {
		std::cout << "Expected exception: " << ex.what() << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Not enough elements in span (Longest):" << std::endl;
	try {
		Span smallSpan(1);
		smallSpan.addNumber(10);
		smallSpan.shortestSpan();
	} catch (const std::exception &ex) {
		std::cout << "Expected exception: " << ex.what() << std::endl;
	}

	std::cout	<< std::endl << std::endl
				<< "Creating big span" << std::endl;
	try {
		Span bigSpan(7500);
		std::vector<int> vector;
		vector.reserve(5000);
		for (int i = 0; i < 5000; i++)
			vector.push_back(rand() % 5000);
		bigSpan.addNumbers(vector);
		std::cout << "Successfully add 5000 numbers." << std::endl;

		bigSpan.addNumbers(vector);
	} catch (const std::exception &ex) {
		std::cout << "Expected exception: " << ex.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
