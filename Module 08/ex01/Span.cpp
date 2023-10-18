#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span(unsigned int N) : N(N) {
    numbers.reserve(N);
}

void Span::addNumber(int number) {
    if (numbers.size() < N) {
        numbers.push_back(number);
    } else {
        throw std::runtime_error("Span is already full.");
    }
}

int Span::shortestSpan() const {
    if (numbers.size() <= 1) {
        throw std::runtime_error("No span can be found.");
    }

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); ++i) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }

    return minSpan;
}

int Span::longestSpan() const {
    if (numbers.size() <= 1) {
        throw std::runtime_error("No span can be found.");
    }

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int maxSpan = sortedNumbers.back() - sortedNumbers.front();

    return maxSpan;
}
