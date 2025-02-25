/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 21:33:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/25 22:17:22 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Functions.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate() {
	int r = rand() % 3;
	std::cout << "[RAND] Got number: " << r << std::endl;
	switch (r) {
		case 0:
			return new B();
		case 1:
			return new A();
		default:
			return new C();
	}
}

void	identify(Base* p) {
	if (p) {
		A *a = dynamic_cast<A *>(p);
		if (a) {
			std::cout << "It's Class A" << std::endl;
			return;
		}
		B *b = dynamic_cast<B *>(p);
		if (b) {
			std::cout << "It's Class B" << std::endl;
			return;
		}

		C *c = dynamic_cast<C *>(p);
		if (c) {
			std::cout << "It's Class C" << std::endl;
			return;
		}
	}
	throw std::invalid_argument("This Base is not A, not B and not C");
}

void	identify(Base& p) {
	try {
		dynamic_cast<A &>(p);
		std::cout << "It's Class A" << std::endl;
		return;
	} catch (std::exception &ex) {
	}

	try {
		dynamic_cast<B &>(p);
		std::cout << "It's Class B" << std::endl;
		return;
	} catch (std::exception &ex) {
	}

	try {
		dynamic_cast<C &>(p);
		std::cout << "It's Class C" << std::endl;
		return;
	} catch (std::exception &ex) {
	}

	throw std::invalid_argument("This Base is not A, not B and not C");
}
