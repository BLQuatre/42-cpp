/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:15:12 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/27 18:50:59 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
	private:
		std::string	type;

	public:
		Weapon(const std::string &type);
		~Weapon();

		const	std::string	&getType() const;
		void				setType(std::string type);
};

#endif
