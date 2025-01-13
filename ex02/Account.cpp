/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:26:11 by cauvray           #+#    #+#             */
/*   Updated: 2025/01/13 17:35:02 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = (Account::_nbAccounts)++;
	this->_amount = initial_deposit;
	this->_totalAmount += this->checkAmount();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->checkAmount() << ";"
				<< "created" << std::endl;
}

Account::~Account() {
	Account::_totalAmount -= this->checkAmount();
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalNbWithdrawals -= this->_nbWithdrawals;
	Account::_nbAccounts--;

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->checkAmount() << ";"
				<< "closed" << std::endl;
}

int	Account::getNbAccounts() {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount() {
	return Account::_totalAmount;
}

int	Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::getNbAccounts() << ";"
				<< "total:" << Account::getTotalAmount() << ";"
				<< "deposits:" << Account::getNbDeposits() << ";"
				<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->checkAmount() << ";";

	this->_amount += deposit;
	Account::_totalAmount += deposit;
	(this->_nbDeposits)++;
	(Account::_totalNbDeposits)++;

	std::cout	<< "deposit:" << deposit << ";"
				<< "amount:" << this->checkAmount() << ";"
				<< "nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->checkAmount() << ";"
				<< "withdrawal:";

	if (this->checkAmount() < withdrawal) {
		std::cout << "refused" << std::endl;
		return false;
	}

	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	(this->_nbWithdrawals)++;
	(Account::_totalNbWithdrawals)++;

	std::cout	<< withdrawal << ";"
				<< "amount:" << this->checkAmount() << ";"
				<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return true;
}

int		Account::checkAmount() const {
	return this->_amount;
}

void	Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->checkAmount() << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp() {
	std::time_t time = std::time(0);
	std::tm now = *std::localtime(&time);

	std::cout	<< "["
				<< (now.tm_year + 1900)
				<< std::setfill('0')
				<< std::setw(2) << (now.tm_mon + 1)
				<< std::setw(2) << now.tm_mday
				<< "_"
				<< std::setw(2) << now.tm_hour
				<< std::setw(2) << now.tm_min
				<< std::setw(2) << now.tm_sec
				<< "] ";
}
