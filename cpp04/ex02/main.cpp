/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:27:51 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 01:40:10 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	// Don't work -> pure abstract
	// const AAnimal* k = new AAnimal();

	delete j;
	delete i;

	return EXIT_SUCCESS;
}
