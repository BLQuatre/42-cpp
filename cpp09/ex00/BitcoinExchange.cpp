/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:22:14 by cauvray           #+#    #+#             */
/*   Updated: 2025/03/29 10:21:58 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void stringToTm(const std::string& dateInput, std::tm& tm) {
	if (dateInput.size() != 10 || dateInput[4] != '-' || dateInput[7] != '-')
		throw std::runtime_error("bad input => " + dateInput);

	int year, month, day;
	char dash1, dash2;

	std::istringstream iss(dateInput);
	if (!(iss >> year >> dash1 >> month >> dash2 >> day) || dash1 != '-' || dash2 != '-')
		throw std::runtime_error("bad input => " + dateInput);

	bzero(&tm, sizeof(tm));
	tm.tm_year = year - 1900;
	tm.tm_mon = month - 1;
	tm.tm_mday = day;

	std::time_t timestamp = std::mktime(&tm);
	std::tm* checkTm = std::localtime(&timestamp);

	if (checkTm->tm_year != year - 1900 || checkTm->tm_mon != month - 1 || checkTm->tm_mday != day)
		throw std::runtime_error("bad input => " + dateInput);
}

static std::string tmToString(std::tm *tm) {
	char time[11];

	std::strftime(time, sizeof(time), "%Y-%m-%d", tm);
	return std::string(time);
}

static std::string	trim(const std::string& str) {
	size_t first = str.find_first_not_of(" \t\n\r");
	if (first == std::string::npos)
		return "";
	size_t last = str.find_last_not_of(" \t\n\r");
	return str.substr(first, last - first + 1);
}

BitcoinExchange::BitcoinExchange(const std::string &dataFile) {
	std::ifstream infile(dataFile.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: could not open file" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string line;
	std::getline(infile, line);
	while (std::getline(infile, line)) {
		try {
			std::tm date;
			stringToTm(trim(line.substr(0, 10)), date);
			double value = std::atof(trim(line.substr(11)).c_str());
			_data[std::mktime(&date)] = value;

			// std::cout << "_date[" << std::mktime(&date) << "] = " << value << std::endl;
		} catch (std::exception &e) {
			infile.close();
			std::cerr << "Error: bad input in data file => `" + line + "`" << std::endl;
		}
	}

	infile.close();
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::displayExchange(const std::string &fileName) {
	// std::cout << "Trying to open file: " << fileName << std::endl;

	std::ifstream infile(fileName.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: could not open file" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string line;
	std::getline(infile, line);
	while (std::getline(infile, line)) {
		try {
			std::string tmp;

			std::stringstream ssLine(line);
			std::getline(ssLine, tmp, '|');
			std::tm date;

			stringToTm(trim(tmp), date);

			std::getline(ssLine, tmp, '|');
			double value = std::atof(trim(tmp).c_str());

			if (value < 0)
				throw std::runtime_error("not a positive number.");
			if (value > 1000)
				throw std::runtime_error("too large a number.");

			std::time_t timestamp = std::mktime(&date);
			std::map<std::time_t, double>::iterator it = _data.lower_bound(timestamp);
			if (it != _data.begin() && it->first != timestamp)
				it--;
			std::cout << tmToString(&date) << " => " << value << " = " << it->second * value << std::endl;
		} catch (const std::runtime_error &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			continue;
		} catch (const std::exception &e) {
			std::cerr << "Error (std::exception): " << e.what() << std::endl;
		}
	}
	infile.close();
}
