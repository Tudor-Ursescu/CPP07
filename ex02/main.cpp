/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:24:48 by turescu           #+#    #+#             */
/*   Updated: 2025/04/09 15:24:58 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    std::cout << PINK << "-----Checking default constructor-----" << RESET << std::endl;
    Array<int> emptyArr;
    std::cout << "The size of emptyArr: " << emptyArr.size() << std::endl;
    
    std::cout << PINK << "-----Checking parameter constructor-----" << RESET << std::endl;
    Array<int> intArr(5);
    std::cout << "The size of intArr: " << intArr.size() << std::endl;
    
    std::cout << PINK << "-----Checking the subscript operator-----" << RESET << std::endl;
    intArr.fill(1);
    for (size_t i = 0; i < intArr.size(); i++) {
       std::cout << LAVENDER << "intArr[" << i << "] = " << intArr[i] << RESET << std::endl;
    }

    std::cout << PINK << "-----Checking the const subscript operator-----" << RESET << std::endl;
    Array<char> charArr1(5);
    Array<char> charArr2(5);
    charArr1.fill('a');
    std::cout << "===Before the copy assignment operator===" << std::endl;
    std::cout << "---charArr1---" << std::endl;
    for (size_t i = 0; i < charArr1.size(); i++) {
        std::cout << CYAN << "charArr1[" << i << "] = " << charArr1[i] << RESET << std::endl;
    }
    std::cout << "---charArr2---" << std::endl;
    for (size_t i = 0; i < charArr1.size(); i++) {
        std::cout << CYAN << "charArr2[" << i << "] = " << charArr2[i] << RESET << std::endl;
    }
    charArr2 = charArr1;
    std::cout << "===After the copy assignment operator===" << std::endl;
    std::cout << "---charArr2---" << std::endl;
    for (size_t i = 0; i < charArr1.size(); i++) {
        std::cout << CYAN << "charArr2[" << i << "] = " << charArr2[i] << RESET << std::endl;
    }
    
    std::cout << PINK << "-----Checking the Copy constructor-----" << RESET << std::endl;
    Array<std::string> strArr1(5);
    strArr1.fill("abc");
    Array<std::string> strArr2(strArr1);
    std::cout << "===Original Array===" << std::endl;
    for (size_t i = 0; i < strArr1.size(); i++) {
        std::cout << BLUE<< "strArr1[" << i << "] = " << strArr1[i] << RESET << std::endl;
    }
    std::cout << "===Copy Array===" << std::endl;
    for (size_t i = 0; i < strArr1.size(); i++) {
        std::cout << BLUE<< "strArr2[" << i << "] = " << strArr2[i] << RESET << std::endl;
    }
    
    std::cout << PINK << "-----Checking to see deep copy with modifications" << RESET << std::endl;
    strArr1[2] = "MODIFIED";
    std::cout << "===Original arr after modification===" << std::endl;
    for (size_t i = 0; i < strArr1.size(); i++) {
        std::cout << TEAL << "strArr1[" << i << "] = " << strArr1[i] << RESET << std::endl;
    }
    std::cout << "===Copy arr should be unchanged===" << std::endl;
    for (size_t i = 0; i < strArr1.size(); i++) {
        std::cout << TEAL << "strArr2[" << i << "] = " << strArr2[i] << RESET << std::endl;
    }
  
    std::cout << PINK << "-----Checking for too big index-----" << RESET << std::endl;
    try {
        std::cout << "Trying to acces the 7th element of a 5 element array(strArr1)" << std::endl;
        std::cout << strArr1[7] << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED  << "Exception caught: " << e.what() << RESET << std::endl;
    }

    std::cout << PINK << "-----Checking for negative index-----" << RESET << std::endl;
    try {
        std::cout << "Trying to access negativ index (-1)" << std::endl;
        size_t negativeIndex = -1; // since size_t is unsigned, -1 will be translated into a very big number
        std::cout << strArr1[negativeIndex] << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    std::cout << PINK << "-----Testing empty array access-----" << RESET  << std::endl;
    try {
        std::cout << "Trying to access an element in an empty array" << std::endl;
        std::cout << emptyArr[0] << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    std::cout << PINK << "-----Testing self-assignmnet-----" << RESET << std::endl;
    Array<int> selfAssign(3);
    selfAssign.fill(42);
    std::cout << "Before self-assignment: " << std::endl;
    for (size_t i = 0; i < selfAssign.size(); i++) {
        std::cout << YELLOW << "selfAssign[" << i << "] = " << selfAssign[i] << RESET << std::endl;
    }
    selfAssign = selfAssign; //Self-assignment
    std::cout << "After self-assignment: " << std::endl;
    for (size_t i = 0; i < selfAssign.size(); i++) {
        std::cout << YELLOW << "selfAssign[" << i << "] = " << selfAssign[i] << RESET << std::endl;
    }
    return (0);
}  