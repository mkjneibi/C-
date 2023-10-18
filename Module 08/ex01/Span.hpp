#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <stdexcept>

class Span {
public:
    Span(unsigned int N);
    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;

private:
    unsigned int N;
    std::vector<int> numbers;
};

#endif
