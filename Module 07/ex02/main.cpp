#include "Array.hpp"

int main()
{
    try {
        Array<int> intArray(5);
        for (size_t i = 0; i < intArray.size(); ++i)
            intArray[i] = i * 10;

        std::cout << "Int array: ";
        for (size_t i = 0; i < intArray.size(); ++i)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        Array<double> doubleArray(3);
        for (size_t i = 0; i < doubleArray.size(); ++i)
            doubleArray[i] = 0.5 * i;

        std::cout << "Double array: ";
        for (size_t i = 0; i < doubleArray.size(); ++i)
            std::cout << doubleArray[i] << " ";
        std::cout << std::endl;

        std::cout << "Accessing out-of-bounds index..." << std::endl;
        std::cout << intArray[10] << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
