/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:33:02 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/25 23:17:59 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	&min(T &a, T &b) {
	if (a < b)
		return a;
	return b;
}

template<typename T>
T	&max(T &a, T &b) {
	if (a > b)
		return a;
	return b;
}

#endif
