/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:05:34 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 00:12:46 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &animal);
		Animal	&operator=(const Animal &animal);
		virtual	~Animal();

		const std::string	getType() const;

		virtual void		makeSound() const;
};

std::ostream &operator<<(std::ostream &out, const Animal &animal);

#endif
