/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:44:58 by motelti           #+#    #+#             */
/*   Updated: 2025/08/24 11:52:49 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
