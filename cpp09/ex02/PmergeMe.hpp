/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/09 21:41:10 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

class PmergeMe {
	private:

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &pmergeMe);
		PmergeMe	&operator=(const PmergeMe &pmergeMe);
		~PmergeMe();
};

#endif
