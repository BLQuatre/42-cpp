/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:08:54 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/28 13:57:18 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
