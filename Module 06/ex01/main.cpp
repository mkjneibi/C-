#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data data(42);

    unsigned long serializedPtr = Serializer::serialize(&data);
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    if (deserializedPtr == &data)
        std::cout << "Deserialization successful. Pointer matches." << std::endl;
    else
        std::cout << "Deserialization failed. Pointer does not match." << std::endl;
    return 0;
}
