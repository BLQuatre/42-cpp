/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:33:02 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/26 08:13:07 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span {
	private:
		std::vector<int>	_array;
		const unsigned int	_maxSize;

		Span();

	public:
		Span(unsigned int N);
		Span(const Span &span);
		~Span();

		Span		&operator=(const Span &span);
		int			&operator[](unsigned int index);
		const int	&operator[](unsigned int index) const;

		void	addNumber(int value);
		void	addNumbers(const std::vector<int>vector);
		int		shortestSpan() const;
		int		longestSpan() const;

		class NotEnoughElementsException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class SpanOverflowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif
