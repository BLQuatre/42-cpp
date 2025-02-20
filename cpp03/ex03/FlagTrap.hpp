/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/20 16:48:22 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_HPP
# define FLAG_TRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FlagTrap : virtual public ClapTrap {
	private:

	public:
		FlagTrap();
		FlagTrap(const std::string &name);
		FlagTrap(const FlagTrap &flagTrap);
		FlagTrap	&operator=(const FlagTrap &flagTrap);
		~FlagTrap();

		void	highFivesGuys();
};

std::ostream &operator<<(std::ostream &out, const FlagTrap &flagTrap);

#endif
