#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    std::vector<int> numbers;

    if (argc < 2)
    {
        std::cerr << "Error: Please provide a sequence of positive integers." << std::endl;
        return 1;
    }
    for (int i = 1; i < argc; ++i)
    {
        int num = std::atoi(argv[i]);
        if (num <= 0)
        {
            std::cerr << "Error: Please provide only positive integers." << std::endl;
            return 1;
        }
        numbers.push_back(num);
    }
    PmergeMe::sortAndDisplay(numbers);
    return 0;
}
