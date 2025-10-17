/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:42:25 by motelti           #+#    #+#             */
/*   Updated: 2025/10/17 16:42:26 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;

    std::cout << "--- DEBUG ---" << std::endl;
    harl.complain("DEBUG");

    std::cout << "--- INFO ---" << std::endl;
    harl.complain("INFO");

    std::cout << "--- WARNING ---" << std::endl;
    harl.complain("WARNING");

    std::cout << "--- ERROR ---" << std::endl;
    harl.complain("ERROR");

    std::cout << "--- UNKNOWN ---" << std::endl;
    harl.complain("NOTALEVEL");

    return 0;
}
