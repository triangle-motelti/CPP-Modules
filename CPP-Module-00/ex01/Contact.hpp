/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:44:58 by motelti           #+#    #+#             */
/*   Updated: 2025/08/16 17:03:04 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

// #include <string>
#include <iomanip>
#include <iostream>

class Contact {
	
	private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	
	public:
	Contact() {}
	void setContact(const std::string& fn, const std::string& ln, const std::string& nn,
					const std::string& pn, const std::string& ds);
	std::string getField(int idx);
	void printContact();
	bool isEmpty();
};

#endif