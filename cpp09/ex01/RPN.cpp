/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/09 21:42:47 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

RPN::RPN() {
	std::cout << "Default constructor called" << std::endl;
}

RPN::RPN(const RPN &rpn) {
	std::cout << "Copy constructor called" << std::endl;
	*this = rpn;
}

RPN::~RPN() {
	std::cout << "Destructor called" << std::endl;
}

RPN	&RPN::operator=(const RPN &rpn) {
	(void) rpn;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}
