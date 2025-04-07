/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:10:46 by turescu           #+#    #+#             */
/*   Updated: 2025/04/07 14:32:09 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main() {
    int intArr[5] = {0, 1, 2, 3, 4};
    std::cout << LIGHT_YELLOW << "INT ARRAY BEFORE:" << std::endl;
    iter(intArr, 5, printElement<int>);
    std::cout << RESET << std::endl;
    iter(intArr, 5, incrementElement<int>);
    std::cout << PINK << "INT ARRAY AFTER INCREMENTATION:" << std::endl;
    iter(intArr, 5, printElement<int>);
    std::cout << RESET << std::endl;

    
    char charArr[6] = "Hello";
    std::cout << LIGHT_YELLOW << "CHAR ARRAY:" << std::endl;
    iter(charArr, 6, printElement<char>);
    std::cout << RESET << std::endl;

    double doubleArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << LIGHT_YELLOW << "DOUBLE ARRAY BEFORE:" << std::endl;
    iter(doubleArr, 5, printElement<double>);
    std::cout << RESET << std::endl;
    std::cout << PINK << "DOUBLE ARRAY AFTER INCREMENTATION:" << std::endl;
    iter(doubleArr, 5, incrementElement<double>);
    iter(doubleArr, 5, printElement<double>);
    std::cout << RESET << std::endl;
}