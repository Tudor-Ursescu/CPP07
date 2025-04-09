/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:41:59 by turescu           #+#    #+#             */
/*   Updated: 2025/04/09 15:25:31 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array() : elements(NULL), _size(0) {
    std::cout << YELLOW << "Default constructor called" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(size_t n) : _size(n) {
    std::cout << LIGHT_YELLOW << "Parameter constructor called" << RESET << std::endl;
    elements = new T[n](); // initialize the elements to default
}

template <typename T>
Array<T>::Array(const Array& other) : _size(other._size) {
    std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
    elements = new T[_size];
    for (size_t i = 0; i < _size; i++) {
        elements[i] = other.elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] elements;
        _size = other._size;
        elements = new T[_size];
        for (size_t i = 0; i < _size; i++) {
            elements[i] = other.elements[i];
        }
    }
    std::cout << PINK << "Copy assignment operator called" << RESET << std::endl;
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] elements;
    std::cout << RED << "Destructor called" << RESET << std::endl;
}

template <typename T>
T& Array<T>::operator[](size_t index) {
    if (index >= _size) 
        throw std::out_of_range("Out of range");
    return elements[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const {
    if (index >= _size)
        throw std::out_of_range("Out of range");
    return elements[index];
}

template <typename T>
size_t Array<T>::size() const {
    return _size;
}

template <typename T>
void Array<T>::fill(T value) {
    for (size_t i = 0; i < _size; i++) {
        elements[i] = value;
    }
}


#endif