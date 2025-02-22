/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 16:43:51 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		static const unsigned int _defaultHitPoints = 100;
		static const unsigned int _defaultEnergyPoints = 100;
		static const unsigned int _defaultAttackDamage = 30;

	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &fragTrap);
		FragTrap	&operator=(const FragTrap &fragTrap);
		~FragTrap();

		void	highFivesGuys();
};

std::ostream &operator<<(std::ostream &out, const FragTrap &fragTrap);

#endif
