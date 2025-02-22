/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:27:51 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 01:14:49 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const std::string idea23 = "Treats are delicious!";

	// *** With Cat
	std::cout	<< std::endl << "-----{ CAT PART }-----" << std::endl;
	{
		Cat *cat = new Cat();
		cat->getBrain()->setIdea(23, idea23);
		cat->getBrain()->showIdea(23);

		Cat *catCopy = new Cat(*cat);\
		catCopy->getBrain()->showIdea(23);

		delete cat;
		catCopy->getBrain()->showIdea(23);

		delete catCopy;
	}

	// *** With Dog
	std::cout	<< std::endl << "-----{ DOG PART }-----" << std::endl;
	{
		Dog *dog = new Dog();
		dog->getBrain()->setIdea(23, idea23);
		dog->getBrain()->showIdea(23);

		Dog *dogCopy = new Dog(*dog);\
		dogCopy->getBrain()->showIdea(23);

		delete dog;
		dogCopy->getBrain()->showIdea(23);

		delete dogCopy;
	}

	// *** Subject
	std::cout	<< std::endl << "-----{ SUBJECT PART }-----" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}

	return EXIT_SUCCESS;
}
