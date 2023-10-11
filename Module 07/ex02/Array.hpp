#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef> // For size_t
#include <stdexcept> // For std::exception
#include <iostream>

template <typename T>
class Array
{
    private:
        T *data;
        size_t arraySize;

    public:
        Array() : data(NULL), arraySize(0){}
        Array(unsigned int n) : data(new T[n]), arraySize(n)
        {
            for (size_t i = 0; i < arraySize; ++i)
                data[i] = T();
        }

        Array(const Array &copy) : data(new T[copy.arraySize]), arraySize(copy.arraySize)
        {
            for (size_t i = 0; i < arraySize; ++i)
                data[i] = copy.data[i];
        }

        Array &operator=(const Array &copy)
        {
            if (this != &copy)
            {
                delete[] data;
                data = new T[copy.arraySize];
                arraySize = copy.arraySize;
                for (size_t i = 0; i < arraySize; ++i)
                    data[i] = copy.data[i];
            }
            return *this;
        }

        ~Array()
        {
            delete[] data;
        }

        T &operator[](size_t index)
        {
            if (index >= arraySize)
                throw std::exception();
            return data[index];
        }

        size_t size() const
        {
            return arraySize;
        }
};

#endif
