/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/20 16:20:20 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include <string>
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap {
	private:
		std::string	_name;

	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &diamondTrap);
		DiamondTrap	&operator=(const DiamondTrap &diamondTrap);
		~DiamondTrap();

		void	whoAmI();

};

std::ostream &operator<<(std::ostream &out, const DiamondTrap &diamondTrap);

#endif
