/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:45:02 by motelti           #+#    #+#             */
/*   Updated: 2025/08/15 16:25:37 by motelti          ###   ########.fr       */
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
	PhoneBook();
	void addContact(const Contact& c);
	void listContacts() const;
	bool validIndex(int idx) const;
	void showContact(int idx) const;
	int getContactCount() const;
};

#endif