/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:40:25 by motelti           #+#    #+#             */
/*   Updated: 2025/10/30 15:19:49 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sed.hpp"
#include <iostream>

#include "Sed.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    Sed sed(av[1], av[2], av[3]);
    if (!sed.process())
        return 1;

    std::cout << "File processed successfully!" << std::endl;
    return 0;
}

