/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:27:51 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 00:30:40 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main() {
	const Animal *meta = new Animal();
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const Animal *cat = new Cat();
	const WrongAnimal *wrongCat = new WrongCat();
	const Animal *dog = new Dog();

	std::cout	<< "Meta: " << *meta << std::endl
				<< "Wrong Meta: " << *wrongMeta << std::endl
				<< "Cat: " << *cat << std::endl
				<< "Wrong Cat: " << *wrongCat << std::endl
				<< "Dog: " << *dog << std::endl;

	std::cout	<< "Meta Type: " << meta->getType() << std::endl
				<< "Wrong Meta Type: " << wrongMeta->getType() << std::endl
				<< "Cat Type: " << cat->getType() << std::endl
				<< "Wrong Cat Type: " << wrongCat->getType() << std::endl
				<< "Dog Type: " << dog->getType() << std::endl;

	meta->makeSound();
	wrongMeta->makeSound();
	cat->makeSound();
	wrongCat->makeSound();
	dog->makeSound();

	delete meta;
	delete cat;
	delete dog;

	return EXIT_SUCCESS;
}
