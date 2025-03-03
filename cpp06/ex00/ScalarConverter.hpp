/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:53:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/03 15:52:19 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <string>

# define ALLOWED_CHARS_LITTERAL "-+.f0123456789"

enum LitteralType { CHAR, INT, FLOAT, DOUBLE };

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &scalarConverter);
		ScalarConverter	&operator=(const ScalarConverter &scalarConverter);
		~ScalarConverter();

	public:
		static void convert(const std::string input);
};

#endif
