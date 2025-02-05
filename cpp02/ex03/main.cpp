/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:45:53 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/05 02:50:29 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point a(0, 0);
	Point b(4, 0);
	Point c(2, 4);

	Point inside1(2, 2);
	std::cout	<< "Test 1: (2,2) => "
				<< (bsp(a, b, c, inside1) ? "Inside ✅" : "Outside ❌")
				<< std::endl;

	Point inside2(1, 1);
	std::cout	<< "Test 2: (1,1) => "
				<< (bsp(a, b, c, inside2) ? "Inside ✅" : "Outside ❌")
				<< std::endl;

	Point outside1(5, 5);
	std::cout	<< "Test 3: (5,5) => "
				<< (bsp(a, b, c, outside1) ? "Inside ❌" : "Outside ✅")
				<< std::endl;

	Point outside2(-1, -1);
	std::cout	<< "Test 4: (-1,-1) => "
				<< (bsp(a, b, c, outside2) ? "Inside ❌" : "Outside ✅")
				<< std::endl;

	Point vertex1(0, 0);
	std::cout	<< "Test 5: (0,0) => "
				<< (bsp(a, b, c, vertex1) ? "On Vertex ❌" : "Outside ✅")
				<< std::endl;

	Point vertex2(4, 0);
	std::cout	<< "Test 6: (4,0) => "
				<< (bsp(a, b, c, vertex2) ? "On Vertex ❌" : "Outside ✅")
				<< std::endl;

	Point edge1(2, 0);
	std::cout	<< "Test 7: (2,0) => "
				<< (bsp(a, b, c, edge1) ? "On Edge ❌" : "Outside ✅")
				<< std::endl;

	Point edge2(3, 2);
	std::cout	<< "Test 8: (3,2) => "
				<< (bsp(a, b, c, edge2) ? "On Edge ❌" : "Outside ✅")
				<< std::endl;

	return 0;
}
