/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:45:02 by motelti           #+#    #+#             */
/*   Updated: 2025/08/16 17:03:56 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

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

#endif