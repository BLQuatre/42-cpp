/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 08:36:30 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/12 13:10:09 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie();

		void	announce();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
