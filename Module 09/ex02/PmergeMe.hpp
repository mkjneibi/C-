#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <ctime>
#include <algorithm> // for std::copy
#include <iostream>

class PmergeMe
{
    private:
        static std::vector<int> mergeInsertSortVector(const std::vector<int>& numbers);
        static std::list<int> mergeInsertSortList(const std::vector<int>& numbers);

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &copy);
        static void sortAndDisplay(const std::vector<int>& numbers);
};

#endif
