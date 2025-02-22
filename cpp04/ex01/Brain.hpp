/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:05:34 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/22 01:09:31 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define IDEAS_AMOUNT 100

# include <string>

class Brain {
	private:
		std::string _ideas[IDEAS_AMOUNT];

	public:
		Brain();
		Brain(const Brain &brain);
		Brain	&operator=(const Brain &brain);
		~Brain();

		void	setIdea(int index, const std::string &idea);
		void	showIdea(int index) const;
};

#endif
