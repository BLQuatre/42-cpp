/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:36:45 by cauvray           #+#    #+#             */
/*   Updated: 2025/02/12 13:37:30 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>

bool	is_args_valid(int argc, char *argv[]) {
	if (argc != 4) {
		std::cerr << "usage: " << argv[0] << " <file> <replace_from> <replace_to>" << std::endl;
		return false;
	}

	if (*(argv[1]) == '\0') {
		std::cerr << "error: file must be at least one char long" << std::endl;
		return false;
	}

	if (*(argv[2]) == '\0') {
		std::cerr << "error: replace_from must be at least one char long" << std::endl;
		return false;
	}

	return true;
}

bool	replace_line(std::string fileName, std::string replaceFrom, std::string replaceTo) {
	std::ifstream read_file(fileName.c_str());
	if (!read_file.is_open()) {
		std::cerr << "error: " << fileName << ": Unable to open or read file" << std::endl;
		return false;
	}

	std::string replaceFileName = fileName.append(".replace");
	std::ofstream write_file(replaceFileName.c_str());
	if (!write_file.is_open()) {
		std::cerr << "error: " << replaceFileName << ": Unable to open or write file" << std::endl;
		read_file.close();
		return false;
	}
	write_file.flush();

	std::string line;
	while (std::getline(read_file, line))
	{
		std::size_t found = 0;
		std::size_t last_found = 0;
		while (true) {
			found = line.find(replaceFrom, last_found);
			write_file << line.substr(last_found, found - last_found);
			if (found == std::string::npos)
				break;
			write_file << replaceTo;
			if (replaceFrom.length() > 0)
				last_found = found + replaceFrom.length();
			else
				last_found = found + 1;
		}
		write_file << std::endl;
	}

	read_file.close();
	write_file.close();
	return true;
}

int	main(int argc, char *argv[]) {
	if (!is_args_valid(argc, argv))
		return EXIT_FAILURE;

	bool result = replace_line(argv[1], argv[2], argv[3]);
	if (!result)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}
