/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/09 21:42:56 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &pmergeMe) {
	std::cout << "Copy constructor called" << std::endl;
	*this = pmergeMe;
}

PmergeMe::~PmergeMe() {
	std::cout << "Destructor called" << std::endl;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &pmergeMe) {
	(void) pmergeMe;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}
