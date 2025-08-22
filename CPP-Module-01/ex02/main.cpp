/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:20:11 by motelti           #+#    #+#             */
/*   Updated: 2025/08/22 13:56:36 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::string *stringPTR;
	std::string &stringREF = str;
	
	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	std::cout << "Address of str:      " << &str << std::endl;
	std::cout << "Address held by PTR: " << stringPTR << std::endl;
	std::cout << "Address held by REF: " << &stringREF << std::endl;

	std::cout << "Value of str:        " << str << std::endl;
	std::cout << "Value pointed by PTR:" << *stringPTR << std::endl;
	std::cout << "Value pointed by REF:" << stringREF << std::endl;

	return 0;
}