#include <iostream>
#include <sstream>
#include <string>
#include <ctime>

// static std::string	trim(const std::string& str) {
// 	size_t first = str.find_first_not_of(" \t\n\r");
// 	if (first == std::string::npos)
// 		return "";
// 	size_t last = str.find_last_not_of(" \t\n\r");
// 	return str.substr(first, last - first + 1);
// }

bool stringToTm(const std::string& dateStr, std::tm& tmStruct) {
	if (dateStr.size() != 10 || dateStr[4] != '-' || dateStr[7] != '-')
		return false;

	int year, month, day;
	char dash1, dash2;

	std::istringstream iss(dateStr);
	if (!(iss >> year >> dash1 >> month >> dash2 >> day) || dash1 != '-' || dash2 != '-')
		return false;

	tmStruct = {};
	tmStruct.tm_year = year - 1900;
	tmStruct.tm_mon = month - 1;
	tmStruct.tm_mday = day;

	std::time_t timestamp = std::mktime(&tmStruct);
	std::tm* checkTm = std::localtime(&timestamp);

	if (checkTm->tm_year != year - 1900 || checkTm->tm_mon != month - 1 || checkTm->tm_mday != day)
		return false;

	return true;
}

std::string timeToString(std::time_t timestamp) {
	char buffer[20];
	std::tm* timeInfo = std::localtime(&timestamp);

	if (timeInfo == NULL) {
		return "Invalid time";
	}

	std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeInfo);
	return std::string(buffer);
}

int main(void) {
	std::string dateStr = "2024-12-30";
	std::tm tmStruct;

	if (stringToTm(dateStr, tmStruct)) {
		std::time_t timestamp = std::mktime(&tmStruct);
		if (timestamp != -1) {
			std::cout << "Timestamp de " << dateStr << " : " << timestamp << " (" << timeToString(timestamp) << ")" << std::endl;
		} else {
			std::cerr << "Erreur lors de la conversion en timestamp." << std::endl;
		}
	} else {
		std::cerr << "Format de date invalide !" << std::endl;
	}

	return 0;
}
