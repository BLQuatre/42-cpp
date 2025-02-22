/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:05:34 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 00:31:21 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>

class WrongAnimal {
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &wrongAnimal);
		WrongAnimal	&operator=(const WrongAnimal &wrongAnimal);
		~WrongAnimal();

		const std::string	getType() const;

		void				makeSound() const;
};

std::ostream &operator<<(std::ostream &out, const WrongAnimal &animal);

#endif
