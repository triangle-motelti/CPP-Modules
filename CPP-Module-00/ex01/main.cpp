/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:45:17 by motelti           #+#    #+#             */
/*   Updated: 2025/08/16 17:28:13 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string getInput(const std::string& prompt) {
	std::string input;
	std::cout << prompt;
	std::getline(std::cin, input);
	return input;
}

bool isEmptyOrWhitespace(const std::string& s) {
	for (size_t i = 0; i < s.size(); ++i)
		if (!isspace(s[i]))
			return false;
	return true;
}

bool containsAlpha(const std::string& s) {
	for (size_t i = 0; i < s.length(); ++i) {
		if (std::isalpha(s[i]))
			return true;
	}
	return false;
}

bool onlyLetters(const std::string& s) {
	if (s.empty())
		return false;
	for (size_t i = 0; i < s.length(); ++i) {
		if (!std::isalpha(s[i]))
			return false;
	}
	return true;
}

void errorChecks(std::string fields[5], int index) {
	if (index == 3 && containsAlpha(fields[index])) {
		std::cout<<"Error: Phone number cannot contain letters!"<< std::endl;
		fields[index] = "";
	}
	if ((index == 0 || index == 1) && !onlyLetters(fields[index])) {
		std::cout<<"Error: First name and Last name must only contain letters and one string!"<< std::endl;
		fields[index] = "";
	}
}

void handleAdd(PhoneBook &pb) {
	std::string fields[5];
	const char* prompts[5] = {
		"First name: ",
		"Last name: ",
		"Nickname: ",
		"Phone number: ",
		"Darkest secret: "
	};
	for (int i = 0; i < 5; ++i) {
		fields[i] = "";
		while (fields[i].empty() || isEmptyOrWhitespace(fields[i])
			|| (i == 3 && containsAlpha(fields[i]))
			|| ((i == 0 || i == 1) && !onlyLetters(fields[i]))) {
			fields[i] = getInput(prompts[i]);
			errorChecks(fields, i);
		}
	}

	Contact c;
	c.setContact(fields[0], fields[1], fields[2], fields[3], fields[4]);
	pb.addContact(c);
	std::cout<<"Contact added!"<<std::endl;
}

void handleSearch(PhoneBook &pb) {
	if (pb.getContactCount() == 0) {
		std::cout<<"No contacts to display."<<std::endl;
		return ;
	}

	pb.listContacts();
	std::cout<<"Enter index to display: ";
	std::string idxStr;
	std::getline(std::cin, idxStr);

	int i = -1;
	if (idxStr.length() == 1 && idxStr[0] >= '0' && idxStr[0] <= '7')
		i = idxStr[0] - '0';

	pb.showContact(i);
}

int main() {
	PhoneBook pb;
	std::string command;

	while (true) {
		std::cout<<"Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (std::cin.eof())
			break;
		if (command == "ADD") {
			handleAdd(pb);
		}
		else if (command == "SEARCH") {
			handleSearch(pb);
		}
		else if (command == "EXIT") {
			break;
		}
		else {
			std::cout<<"usage: this is the only acceptable input => ADD or SEARCH or EXIT !!!!!!!!"<<"\n";
		}
	}
	std::cout<<"Goodbye! Your contacts are lost forever!"<<std::endl;
	return 0;
}
