/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:22:40 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/28 13:54:06 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack();
};

#endif
