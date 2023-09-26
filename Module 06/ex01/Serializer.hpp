#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Data;

class Serializer
{
    public:
        static unsigned long serialize(Data* ptr);
        static Data* deserialize(unsigned long raw);
};

#endif
