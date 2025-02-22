/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:05:34 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 19:32:27 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal {
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const Dog &dog);
		Dog	&operator=(const Dog &dog);
		~Dog();

		void	makeSound() const;

		Brain	*getBrain() const;
};

#endif
