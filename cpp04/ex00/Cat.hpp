/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:05:34 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 00:11:22 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(const Cat &cat);
		Cat	&operator=(const Cat &cat);
		~Cat();

		void	makeSound() const;
};

#endif
