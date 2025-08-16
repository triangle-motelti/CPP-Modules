/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:45:10 by motelti           #+#    #+#             */
/*   Updated: 2025/08/16 18:01:27 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(const Contact& c) {
	if (contactCount < 8) {
		contacts[contactCount++] = c;
	}
	else {
		contacts[oldestIndex] = c;
		oldestIndex = (oldestIndex + 1) % 8;
	}
}

void PhoneBook::listContacts() {
	std::cout << std::setw(14) << "Index" << "|"
			  << std::setw(14) << "First Name" << "|"
			  << std::setw(14) << "Last Name" << "|"
			  << std::setw(14) << "Nickname" << std::endl;
	for (int i = 0; i < contactCount; ++i) {
		std::cout << std::setw(14) << i + 1 << "|";
		for (int j = 0; j < 3; ++j) {
			std::string field = contacts[i].getField(j);
			if (field.length() > 10)
				field = field.substr(0, 9) + ".";
			std::cout << std::setw(14) << field << "|";
		}
		std::cout << std::endl;
	}
}

bool PhoneBook::validIndex(int idx) {
	return idx >= 0 && idx < contactCount;
}

void PhoneBook::showContact(int idx) {
	if (validIndex(idx))
		contacts[idx].printContact();
	else
		std::cout <<"Invalid index."<<std::endl;
}

int PhoneBook::getContactCount() {
	return contactCount;
}
