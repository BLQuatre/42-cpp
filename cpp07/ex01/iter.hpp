/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:33:02 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/26 00:59:02 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *array, int len, void (*f)(T &)) {
	if (array == NULL || f == NULL)
		return ;

	for (int i = 0; i < len; i++)
		f(array[i]);
}

#endif
