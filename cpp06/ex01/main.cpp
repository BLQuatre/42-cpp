/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:18:03 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/25 20:48:10 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <stdint.h>
#include "Data.hpp"
#include "Serializer.hpp"

int main() {
	{
		Data	*data = new Data(42, "Hello", "World");
		Data	*data2 = NULL;
		uintptr_t	raw;

		std::cout	<< "Data before serialization: " << *data << " (" << data << ")" << std::endl;
		raw = Serializer::serialize(data);
		std::cout << "Raw: " << raw << std::endl;
		data2 = Serializer::deserialize(raw);
		std::cout << "Data after deserialization: " << *data2 << " (" << data2 << ")" << std::endl;

		delete data2;
	}

	return EXIT_SUCCESS;
}