/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:45:02 by motelti           #+#    #+#             */
/*   Updated: 2025/08/24 11:53:16 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook {
	
	private:
	Contact contacts[8];
	int contactCount;
	int oldestIndex;
	
	public:
	PhoneBook() {
		contactCount = 0;
		oldestIndex = 0;
	}
	void addContact(const Contact& c);
	void listContacts();
	bool validIndex(int idx);
	void showContact(int idx);
	int getContactCount();
};
