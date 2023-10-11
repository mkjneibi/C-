#include "Iter.hpp"

template <typename T>
void printElement(const T& element)
{
    std::cout << element << " ";
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "Int array: ";
    iter(intArray, sizeof(intArray) / sizeof(intArray[0]), printElement<int>);
    std::cout << std::endl;
    std::cout << "Char array: ";
    iter(charArray, sizeof(charArray) / sizeof(charArray[0]), printElement<char>);
    std::cout << std::endl;
    return 0;
}
