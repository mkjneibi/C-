#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
    public:
        Data(int value) : value_(value) {}
        int getValue() const { return value_; }

    private:
        int value_;
};

#endif

