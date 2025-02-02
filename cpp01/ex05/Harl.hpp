/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:46:41 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/01 20:47:55 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl {
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();

	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif
