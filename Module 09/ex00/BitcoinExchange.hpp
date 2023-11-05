#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>  // required for std::setprecision and std::fixed

class BitcoinExchange
{
    public:
        std::map<std::string, double> rates;

    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator=(const BitcoinExchange &copy);
        BitcoinExchange(const std::string& filename);
        double getRateOnDate(const std::string& date) const;
};

#endif

