/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:41:37 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 04:25:36 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	MateriaSource *materiaSrc = new MateriaSource();
	materiaSrc->learnMateria(new Ice());
	materiaSrc->learnMateria(NULL);
	materiaSrc->learnMateria(new Cure());

	std::cout	<< std::endl << "{ EQUIP }" << std::endl;
	Character *bob = new Character("bob");
	AMateria *materia;
	AMateria *materia_tmp;

	materia_tmp = materiaSrc->createMateria("ice"); // ✅
	bob->equip(materia_tmp);
	materia = materiaSrc->createMateria("cure"); // ✅
	bob->equip(materia);
	materia = materiaSrc->createMateria("fire"); // ❌
	bob->equip(materia);

	std::cout	<< std::endl << "{ USE }" << std::endl;
	Character *tester = new Character("Tester");
	bob->use(0, *tester); // ✅ ice
	bob->use(1, *tester); // ✅ cure

	bob->use(2, *tester); // ❌ null
	bob->use(-4, *tester); // ❌ too small
	bob->use(18, *tester); // ❌ too big

	std::cout	<< std::endl << "{ COPY }" << std::endl;
	Character *bob2 = new Character(*bob);

	bob->unequip(0);
	std::cout << "Bob attack: ";
	bob->use(0, *tester);
	std::cout << std::endl << "Bob2 attack: ";
	bob2->use(0, *tester);

	delete bob;
	delete tester;
	delete bob2;
	delete materiaSrc;
	delete materia_tmp;

	return EXIT_SUCCESS;
}