/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:46:57 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/02 13:59:57 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Harl.hpp"

int	main(int argc, char *argv[]) {
	Harl harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		harl.complain("");

	return EXIT_SUCCESS;
}
