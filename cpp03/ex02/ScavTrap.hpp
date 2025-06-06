/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/21 23:07:02 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		static const unsigned int _defaultHitPoints = 100;
		static const unsigned int _defaultEnergyPoints = 50;
		static const unsigned int _defaultAttackDamage = 20;

		bool	_guardingGate;

	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap	&operator=(const ScavTrap &scavTrap);
		~ScavTrap();

		void	attack(const std::string &target);

		void	guardGate();
		bool	isGuardingGate() const;
};

std::ostream &operator<<(std::ostream &out, const ScavTrap &scavTrap);

#endif
