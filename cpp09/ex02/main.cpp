/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/04/09 22:42:42 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <sstream>
#include <deque>
#include <ctime>
#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cerr << "Error: " << argv[0] << " <numbers...>" << std::endl;
		return EXIT_FAILURE;
	}

	std::vector<int> inputVec;
	std::deque<int> inputDeque;
	for (int i = 1; i < argc; ++i) {
		std::stringstream ss(argv[i]);
		int val;
		if (ss >> val && val > 0) {
			inputVec.push_back(val);
			inputDeque.push_back(val);
		} else {
			std::cerr << "Error: " << argv[i] << " is not a valid positive integer." << std::endl;
			return EXIT_FAILURE;
		}
	}

	std::cout << "WITH VECTOR" << std::endl;
	PmergeMe<std::vector<int> > pmergeMeVector(inputVec);

	std::cout << "Before:\t";
	pmergeMeVector.printContainer();

	std::clock_t startVector = std::clock();
	pmergeMeVector.sort();
	std::clock_t endVector = std::clock();
	double elapsedVector = endVector - startVector;

	std::cout << "After:\t";
	pmergeMeVector.printContainer();


	std::cout << "WITH DEQUE" << std::endl;
	PmergeMe<std::deque<int> > pmergeMeDeque(inputDeque);

	std::cout << "Before:\t";
	pmergeMeDeque.printContainer();

	std::clock_t startDeque = std::clock();
	pmergeMeDeque.sort();
	std::clock_t endDeque = std::clock();
	double elapsedDeque = endDeque - startDeque;

	std::cout << "After:\t";
	pmergeMeDeque.printContainer();

	std::cout << "Time to process a range of " << inputVec.size() << " elements with std::vector\t: " << elapsedVector << " µs" << std::endl;
	std::cout << "Time to process a range of " << inputDeque.size() << " elements with std::deque\t: " << elapsedDeque << " µs" << std::endl;

	return EXIT_SUCCESS;
}
