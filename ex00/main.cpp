/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:22:52 by turescu           #+#    #+#             */
/*   Updated: 2025/04/07 14:10:02 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main( void ) {
    int a = 2;
    int b = 3;

    std::cout << YELLOW << "ORIGINAL VALUES: " << std::endl;
    std::cout << "a = " << a << ", b = " << b << RESET << std::endl;
    ::swap( a, b );

    std::cout << BLUE << "AFTER SWITCH: " << std::endl;
    std::cout << "a = " << a << ", b = " << b << RESET << std::endl;

    std::cout << CYAN << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << RESET << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << YELLOW << "ORIGINAL VALUES: " << std::endl;
    std::cout << "c = " << c << ", d = " << d << RESET << std::endl;
    ::swap(c, d);
    std::cout << BLUE << "AFTER SWITCH: " << std::endl;
    std::cout << "c = " << c << ", d = " << d <<  RESET << std::endl;
    std::cout << CYAN << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << RESET << std::endl;

    return 0;
    }