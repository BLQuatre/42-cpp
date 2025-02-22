/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:05:34 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 01:47:08 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

# include <string>

class AAnimal {
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &animal);
		AAnimal	&operator=(const AAnimal &animal);
		virtual	~AAnimal();

		const std::string	getType() const;

		virtual void		makeSound() const = 0;
};

std::ostream &operator<<(std::ostream &out, const AAnimal &animal);

#endif
