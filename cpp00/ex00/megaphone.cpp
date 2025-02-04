/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 13:19:46 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/04 18:29:19 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int	main(int argc, char *argv[]) {
	if (argc <= 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return EXIT_SUCCESS;
	}

	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j]; j++)
			argv[i][j] = toupper(argv[i][j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
