#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
    if (this == &copy)
        *this = copy;
    return *this;
}

BitcoinExchange::BitcoinExchange(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }
    std::string line, date;
    while (getline(file, line))
    {
        size_t i = line.find(',');
        if (i == line.npos) break;
        std::string date = line.substr(0, line.find(','));
        std::string rate = line.substr(line.find(',') + 1);
        this->rates[date] = std::atof(rate.c_str());
    }
    file.close();
}

double BitcoinExchange::getRateOnDate(const std::string& date) const
{
    if (rates.find(date) != rates.end())
        return rates.at(date);
    // If not found, get the closest lower date.
    std::map<std::string, double>::const_iterator it = rates.lower_bound(date);
    if (it == rates.begin())
        return it->second;
    if (it == rates.end() || it->first > date)
        --it;
    // get the previous (lower) date
    return it->second;
}
