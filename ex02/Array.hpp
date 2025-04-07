/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:03:01 by turescu           #+#    #+#             */
/*   Updated: 2025/04/07 18:30:53 by turescu          ###   ########.fr       */
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
    Array(): elements(NULL), _size(0){
        std::cout << YELLOW << "Default constructor called" << RESET << std::endl;
    }
    
    Array(size_t n): _size(n) {
        std::cout << LIGHT_YELLOW << "Parameter constructor called" << RESET << std::endl;
        elements = new T[n](); // initialize the elements to default;
    }
    
    Array(const Array& other) : _size(other._size) {
        std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
        elements = new T[_size];
        for (size_t i = 0; i < _size; i++) {
            elements[i] = other.elements[i];
        }
    }
    
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] elements;
            _size = other._size;
            elements = new T[_size];
            for (size_t i  = 0; i < _size; i++) {
                elements[i] = other.elements[i];
            }
        }
        std::cout << PINK << "Copy assignment operator called" << RESET << std::endl;
        return *this;
    }
    
    ~Array() {
        delete[] elements;
        std::cout << RED << "Destructor called" << RESET << std::endl;
    };
    //non-const subscript operator(allows modifications)
    T& operator[](size_t index) {
        if (index >= _size) 
            throw std::exception();
        return elements[index];
    }
    //const subscript operator(prevents modifications)
    const T& operator[](size_t index) const {
        if (index >= _size)
            throw std::exception();
        return elements[index];
    }
    
    size_t size() const { return _size; }

    void fill(T value) {
        for (size_t i = 0; i < _size; i++)
            elements[i] = value;
    }
};


#endif

/*
- the const subscript operator is used when dealing with a const Array object,
  and non const subscript operator is used when you deal with a non-const Array object
- good standard patterm when implementing subscript operators.
*/