/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:33:02 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/04 19:50:23 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <algorithm>
# include <stdexcept>
# include <sstream>

template<typename T>
void	easyfind(T &lst, int value) {
	if (std::find(lst.begin(), lst.end(), value) == lst.end()) {
		std::ostringstream oss;
		oss << value << " is not in container";
		throw std::runtime_error(oss.str());
	}
}

#endif
