/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:33:02 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/26 02:03:47 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &array);
		~Array();

		Array	&operator=(const Array &array);
		T		&operator[](unsigned int index);
		const T	&operator[](unsigned int index) const;

		unsigned int	size() const;
};

#include "Array.tpp"

#endif
