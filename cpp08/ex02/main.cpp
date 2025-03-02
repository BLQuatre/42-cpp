/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/02 20:54:04 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "MutantStack.hpp"

int main() {

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << std::endl << "Top element: " << mstack.top() << std::endl;

	std::cout << std::endl << "Stack size before pop: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << std::endl << "Stack size after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << std::endl << "Iteration:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << "Copying to std::stack..." << std::endl;
	std::stack<int> s(mstack);

	std::cout << std::endl << "Reverse Iteration: " << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite) {
		std::cout << *rit << std::endl;
		++rit;
	}

	return EXIT_SUCCESS;
}
