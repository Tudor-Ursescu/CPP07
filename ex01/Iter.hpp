/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:11:03 by turescu           #+#    #+#             */
/*   Updated: 2025/04/07 14:18:43 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <iomanip>
# include <cmath>
# include <sstream>
# include <string>
# include <limits.h>
# include <limits>

# define RED "\033[31m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define PINK "\033[38;5;205m"
# define TEAL "\033[38;5;30m"
# define LAVENDER "\033[38;5;183m"
# define CYAN "\033[38;5;51m"
# define LIGHT_YELLOW "\033[38;5;229m"
# define RESET "\033[0m"

template <typename T, typename F>
void iter(T* array, int length, F function) {
    for (int i = 0; i < length; i++) {
        function(array[i]);
    }
}

template <typename T>
void printElement(T const& element) {
    std::cout << element << " ";
}

template <typename T>
void incrementElement(T &element) {
    element++;
}

#endif