/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:25:25 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/10 22:47:05 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:

		Contact();
		Contact(std::string firstname, std::string lastname,
				std::string nickname, std::string phone_number,
				std::string darkest_secret);
		~Contact();

		std::string	getFirstName();
		void		setFirstName(std::string firstname);
		std::string	getLastName();
		void		setLastName(std::string lastname);
		std::string	getNickname();
		void		setNickname(std::string nickname);
		std::string	getPhoneNumber();
		void		setPhoneNumber(std::string phone_number);
		std::string	getDarkestSecret();
		void		setDarkestSecret(std::string darkest_secret);
};

#endif
