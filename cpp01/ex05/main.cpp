/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:46:57 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/12 14:40:56 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Harl.hpp"

int	main() {
	Harl harl;

	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("DEBUG");
	harl.complain("WOW");

	return EXIT_SUCCESS;
}
