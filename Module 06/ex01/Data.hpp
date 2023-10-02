#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
    private:
        int value_;

    public:
        Data(int value) : value_(value) {}
        int getValue() const { return value_; }
};

#endif

