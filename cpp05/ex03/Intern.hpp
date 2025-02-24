/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:53:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/24 21:15:58 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"

# define FORMS 3

class Intern {
	public:
		Intern();
		Intern(const Intern &intern);
		Intern	&operator=(const Intern &intern);
		~Intern();

		AForm	*makeForm(const std::string formName, const std::string target) const;
};

#endif
