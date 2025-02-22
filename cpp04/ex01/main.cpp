/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:27:51 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 19:29:51 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	// *** SUBJECT PART *** //
	{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout	<< std::endl;

		delete dog;
		delete cat;
	}

	std::cout	<< std::endl << std::endl;

	std::string idea23 = "Treats are delicious!";

	// *** CAT PART *** //
	{
		Cat *cat = new Cat();
		cat->getBrain()->setIdea(23, idea23);
		std::cout	<< "Cat Idea 23: " << cat->getBrain()->getIdea(23) << std::endl;


		Cat *catCopy = new Cat(*cat);
		cat->getBrain()->setIdea(23, "");

		std::cout	<< "Cat Idea 23 2: " << cat->getBrain()->getIdea(23) << std::endl;
		std::cout	<< "Cat Copy Idea 23: " << catCopy->getBrain()->getIdea(23) << std::endl;

		delete cat;
		std::cout	<< "Cat Copy Idea 23 2: " << catCopy->getBrain()->getIdea(23) << std::endl;

		delete catCopy;
	}

	std::cout	<< std::endl << std::endl;

	// *** DOG PART *** //
	{
		Dog *dog = new Dog();
		dog->getBrain()->setIdea(23, idea23);
		std::cout	<< "Dog Idea 23: " << dog->getBrain()->getIdea(23) << std::endl;

		Dog *dogCopy = new Dog(*dog);
		dog->getBrain()->setIdea(23, "");

		std::cout	<< "Dog Idea 23 2: " << dog->getBrain()->getIdea(23) << std::endl;
		std::cout	<< "Dog Copy Idea 23: " << dogCopy->getBrain()->getIdea(23) << std::endl;

		delete dog;
		std::cout	<< "Dog Copy Idea 23: " << dogCopy->getBrain()->getIdea(23) << std::endl;

		delete dogCopy;
	}

	std::cout	<< std::endl << std::endl;

	const Animal	*(animal_array[10]);
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	for (int i = 5; i < 10; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete animal_array[i];
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
