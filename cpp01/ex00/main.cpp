/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:42:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/27 16:21:24 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *zombie = newZombie("Golem");
	zombie->announce();
	delete zombie;

	randomChump("Gobelin");
	return (EXIT_SUCCESS);
}
