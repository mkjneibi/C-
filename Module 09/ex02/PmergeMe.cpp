#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

std::vector<int> PmergeMe::mergeInsertSortVector(const std::vector<int>& numbers)
{
    // Placeholder sort for std::vector using std::sort
    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());
    return sorted;
}

std::list<int> PmergeMe::mergeInsertSortList(const std::vector<int>& numbers)
{
    // Placeholder sort for std::list using std::list::sort
    std::list<int> sorted(numbers.begin(), numbers.end());
    sorted.sort();
    return sorted;
}

void PmergeMe::sortAndDisplay(const std::vector<int>& numbers)
{
    std::cout << "Before: ";
    for (std::vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    clock_t start = clock();
    std::vector<int> sortedVector = mergeInsertSortVector(numbers);
    clock_t vectorTime = clock() - start;

    start = clock();
    std::list<int> sortedList = mergeInsertSortList(numbers);
    clock_t listTime = clock() - start;

    std::cout << "After: ";
    for (std::vector<int>::const_iterator it = sortedVector.begin(); it != sortedVector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;


    std::cout << "Time to process a range of " << numbers.size() << " elements with std::vector : "
              << (1000000.0 * vectorTime / CLOCKS_PER_SEC) << " us" << std::endl;
    std::cout << "Time to process a range of " << numbers.size() << " elements with std::list : "
              << (1000000.0 * listTime / CLOCKS_PER_SEC) << " us" << std::endl;
}
