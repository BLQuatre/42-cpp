/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:45:33 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 02:56:18 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure &cure);
		Cure	&operator=(const Cure &cure);
		~Cure();

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
