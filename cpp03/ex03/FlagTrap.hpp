/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/21 22:00:41 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_HPP
# define FLAG_TRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FlagTrap : virtual public ClapTrap {
	private:
		static const unsigned int _defaultHitPoints = 100;
		static const unsigned int _defaultEnergyPoints = 100;
		static const unsigned int _defaultAttackDamage = 30;

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
