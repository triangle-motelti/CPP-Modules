/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:45:14 by motelti           #+#    #+#             */
/*   Updated: 2025/08/16 17:58:13 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setContact(const std::string& fn, const std::string& ln, const std::string& nn,
						 const std::string& pn, const std::string& ds) {
	firstName = fn;
	lastName = ln;
	nickname = nn;
	phoneNumber = pn;
	darkestSecret = ds;
}

std::string Contact::getField(int idx) {
	if (idx == 0)
		return firstName;
	else if (idx == 1)
		return lastName;
	else if (idx == 2)
		return nickname;
	return "";
}

void Contact::printContact() {
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

bool Contact::isEmpty() {
	return firstName.empty() || lastName.empty() || nickname.empty() ||
		phoneNumber.empty() || darkestSecret.empty();
}
