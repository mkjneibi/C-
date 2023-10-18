#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

// int main() {
//     std::srand(static_cast<unsigned>(std::time(0)));

//     try {
//         Span span(10000); // Set N to 10,000

//         for (int i = 0; i < 10000; ++i) {
//             span.addNumber(std::rand() % 10000);
//         }

//         int shortest = span.shortestSpan();
//         int longest = span.longestSpan();

//         std::cout << "Shortest Span: " << shortest << std::endl;
//         std::cout << "Longest Span: " << longest << std::endl;
//     } catch (const std::exception &e) {
//         std::cout << "Exception: " << e.what() << std::endl;
//     }

//     return 0;
// }

//////////////////////// 42 Test //////////////////////////
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}