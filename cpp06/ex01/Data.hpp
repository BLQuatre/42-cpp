/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:05:40 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/25 20:43:25 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>

struct Data {
	const int			_id;
	const std::string	_name;
	const std::string	_surname;

	Data();
	Data(int id, const std::string &name, const std::string &surname);
	Data(const Data &data);
	Data	&operator=(const Data &data);
	~Data();

	int					getId() const;
	const std::string	&getName() const;
	const std::string	&getSurname() const;
};

std::ostream	&operator<<(std::ostream &out, const Data &data);

#endif
