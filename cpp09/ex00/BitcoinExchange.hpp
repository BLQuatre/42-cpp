/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:21:48 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/09 21:39:40 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

class BitcoinExchange {
	private:

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &bitcoinExchange);
		BitcoinExchange	&operator=(const BitcoinExchange &bitcoinExchange);
		~BitcoinExchange();
};

#endif
