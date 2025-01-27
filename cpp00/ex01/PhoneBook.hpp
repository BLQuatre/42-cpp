/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:44:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/27 15:41:12 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

# define MAX_CONTACTS_NUMBER 8

class PhoneBook {
	private:
		Contact	_contacts[MAX_CONTACTS_NUMBER];
		int		_contactsNumber;
		int		_lastAddedIndex;

	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();
		void	showContacts();
		void	showShortString(std::string str);
};

#endif
