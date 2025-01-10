/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:44:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/09 22:06:24 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

# define CONTACT_NUMBER 8

class PhoneBook
{
	private:
		Contact	contacts[CONTACT_NUMBER];
		int		contactsNumber;
		int		lastAddedIndex;

	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();

		void	showShortString(std::string str);
};

#endif
