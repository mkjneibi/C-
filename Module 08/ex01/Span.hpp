#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <stdexcept>

class Span {
public:
    Span(unsigned int N);
    void addNumber(int number);
    void addNumbers(const std::vector<int>& numbers); // Function to add a range of numbers
    int shortestSpan() const;
    int longestSpan() const;

private:
    unsigned int N;
    std::vector<int> numbers;
};

#endif
