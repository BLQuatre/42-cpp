/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:45:33 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 02:55:33 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria {
	public:
		Ice();
		Ice(const Ice &ice);
		Ice	&operator=(const Ice &ice);
		~Ice();

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
