/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:21 by motelti           #+#    #+#             */
/*   Updated: 2025/08/14 23:14:08 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
	if (ac == 1) {
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<"\n";
		return 0;
	}
	for (int i = 1; i < ac; i++) {
		for (int j = 0; av[i][j]; j++) {
			std::cout<<(char)std::toupper(av[i][j]);
		}
	}
	std::cout<<"\n";
	return 0;
}