#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef> // For size_t
#include <stdexcept> // For std::exception
#include <iostream>

template <typename T>
class Array
{
    private:
        T* data;
        size_t arraySize;

    public:
        Array() : data(NULL), arraySize(0) {}
        Array(size_t n) : data(new T[n]), arraySize(n) {
            for (size_t i = 0; i < arraySize; ++i) {
                data[i] = T(); // Default initialization
            }
        }

        Array(const Array& other) : data(new T[other.arraySize]), arraySize(other.arraySize) {
            for (size_t i = 0; i < arraySize; ++i) {
                data[i] = other.data[i];
            }
        }

        Array& operator=(const Array& other) {
            if (this != &other) {
                delete[] data;
                data = new T[other.arraySize];
                arraySize = other.arraySize;
                for (size_t i = 0; i < arraySize; ++i) {
                    data[i] = other.data[i];
                }
            }
            return *this;
        }

        ~Array() {
            delete[] data;
        }

        T& operator[](size_t index) {
            if (index >= arraySize) {
                throw std::exception();
            }
            return data[index];
        }

        size_t size() const {
            return arraySize;
        }
};

#endif
