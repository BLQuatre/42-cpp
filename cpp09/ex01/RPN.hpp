/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/10 22:03:59 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef R_P_N_HPP
# define R_P_N_HPP

# include <string>

class RPN {
	private:
		RPN();
		RPN(const RPN &rpn);
		RPN	&operator=(const RPN &rpn);
		~RPN();

	public:
		static int calculate(const std::string input);
};

#endif
