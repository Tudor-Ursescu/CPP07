/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:03:01 by turescu           #+#    #+#             */
/*   Updated: 2025/04/09 11:44:18 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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

template <typename T>
class Array
{
private:
    T* elements;
    size_t _size;
public:
    Array();
    Array(size_t n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();
    
    T& operator[](size_t index);
    const T& operator[](size_t index) const;
    
    size_t size() const;
    void fill(T value);
};

# include "Array.tpp" // Include the implementation file here

#endif
/*
- the const subscript operator is used when dealing with a const Array object,
  and non const subscript operator is used when you deal with a non-const Array object
- good standard patterm when implementing subscript operators.
*/