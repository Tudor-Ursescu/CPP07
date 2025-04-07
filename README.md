# CPP - Module 07

## 🔍 Overview
This module introduces C++ templates, a powerful feature that allows you to write generic code that works with different types while maintaining type safety. Templates enable you to create functions and classes that operate on a type specified at compile time.

## Exercises
### Exercise 00: Start with a few functions
Implementation of three function templates:
- `swap`: Swaps the values of two given parameters.
- `min`: Returns the smaller of two values (or the second if equal).
- `max`: Returns the larger of two values (or the second if equal).

Each function works with any type that supports the required operations (assignment for swap, comparison for min/max).

### Exercise 01: Iter
Implementation of a function template `iter` that takes:

- The address of an array
- The length of the array
- A function to be called on each element

This exercise demonstrates how to create a generic algorithm that can work with arrays of any type and apply any operation to their elements.

### Exercise 02: Array
Development of a class template `Array<T>` that:

- Creates a dynamic array of elements of type T
- Supports construction with no parameters (empty array)
- Supports construction with size parameter
- Handles copy construction and assignment
- Provides safe element access via subscript operator
- Throws exceptions for out-of-bounds access
- Includes a size() method

This exercise demonstrates template classes, dynamic memory management, and exception handling.

## Key Concepts
- Function templates
- Class templates
- Template instantiation
- Type parameters
- Template specialization
- Generic programming
- Type-safe containers

## Compilation
- All exercises compile with C++ flags: `-Wall -Wextra -Werror -std=c++98`
- Each exercise includes a **Makefile**
## Notes
- Templates must be defined in header files, not in separate implementation files
- A function template can be passed as a parameter to another template
- The Array class demonstrates proper memory management with dynamic allocation
## Usage
```sh
# Example for Exercise 00
cd ex00
make
./template

# Example for Exercise 01
cd ex01
make
./iter

# Example for Exercise 02
cd ex02
make
./array
```
## 👥 Author

[**Tudor Ursescu**](https://github.com/Tudor-Ursescu)

## 📜 License

This is an open-source project, and you are free to use, modify, and distribute it as you see fit.

Enjoy exploring the power and flexibility of C++ templates!