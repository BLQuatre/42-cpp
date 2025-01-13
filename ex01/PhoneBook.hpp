/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:44:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/13 14:24:46 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS_NUMBER 8

class PhoneBook {
	private:
		Contact	_contacts[MAX_CONTACTS_NUMBER];
		int		_contactsNumber;
		int		_lastAddedIndex;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	addContact(void);
		void	searchContact(void);
		void	showContacts(void);
		void	showShortString(std::string str);
};

#endif
