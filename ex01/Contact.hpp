/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:25:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/13 14:24:27 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:

		Contact();
		Contact(std::string firstName, std::string lastName,
				std::string nickname, std::string phoneNumber,
				std::string darkestSecret);
		~Contact();

		std::string	getFirstName();
		void		setFirstName(std::string firstName);
		std::string	getLastName();
		void		setLastName(std::string lastName);
		std::string	getNickname();
		void		setNickname(std::string nickname);
		std::string	getPhoneNumber();
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getDarkestSecret();
		void		setDarkestSecret(std::string darkestSecret);

		void		showInformations(void);
};

#endif
