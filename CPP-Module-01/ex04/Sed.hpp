/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:40:37 by motelti           #+#    #+#             */
/*   Updated: 2025/10/17 16:40:38 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

class Sed {
public:
	Sed(const std::string& filename, const std::string& s1, const std::string& s2);
	bool process();
private:
	std::string _filename;
	std::string _s1;
	std::string _s2;
};

#endif 
