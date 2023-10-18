#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
        try {
        std::cout << "Welcome to ex01 - Span" << std::endl;
        std::cout << "first test we will add 6 numbers one by one" << std::endl;
        Span span(6);

        span.addNumber(1);
        span.addNumber(2);
        span.addNumber(3);
        span.addNumber(4);
        span.addNumber(5);
        span.addNumber(6);

        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest Span: " << shortest << std::endl;
        std::cout << "Longest Span: " << longest << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        std::cout << "second test we will add 10 numbers at once" << std::endl;
        Span span(10);

        std::vector<int> numbersToAdd;
        for (int i = 1; i <= 10; ++i) {
            numbersToAdd.push_back(i);
        }

        span.addNumbers(numbersToAdd);

        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "Shortest Span: " << shortest << std::endl;
        std::cout << "Longest Span: " << longest << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        std::cout << "third test we will add 5 numbers at one at a time from the subject should produce: ";
        std::cout << "Shortest Span: 2 ";
        std::cout << "Longest Span: 14" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}