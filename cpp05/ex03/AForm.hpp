/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:53:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/24 21:23:16 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		AForm();
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &form);
		AForm	&operator=(const AForm &form);
		virtual ~AForm();

		const std::string	getName() const;
		bool				isSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;

		void				beSigned(const Bureaucrat &bureaucrat);

		void				execute(const Bureaucrat &executor) const;
		virtual void		executeAction() const = 0;

		class GradeTooLowException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class NotSignedException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class AlreadySignedException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const AForm &form);

#endif
