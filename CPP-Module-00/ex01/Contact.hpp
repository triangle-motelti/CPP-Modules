/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:44:58 by motelti           #+#    #+#             */
/*   Updated: 2025/08/19 15:55:52 by motelti          ###   ########.fr       */
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
	void setContact(std::string& fn, std::string& ln, std::string& nn, std::string& pn, std::string& ds);
	std::string getField(int idx);
	void printContact();
	bool isEmpty();
};

#endif
