#include "BitcoinExchange.hpp"

bool validateDate(const std::string& date)
{
    int year;
    int month;
    int day;

    char d1;
    char d2;

    std::istringstream iss(date);
    iss >> year >> d1 >> month >> d2 >> day;
    if(d1 != '-' || d2 != '-') return false;
    if(year < 0 || month <= 0 || month > 12 || day <= 0 || day > 31) return false;
    return true;
}

int main(int argc, char **argv)
{
    std::string line;
    std::string date;

    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }
    BitcoinExchange btcExchange("data.csv");
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file: " << argv[1] << std::endl;
        return 1;
    }
    while (getline(inputFile, line))
    {
        size_t pos = line.find('|');
        std::string date = line.substr(0, pos);
        std::string rateStr = line.substr(pos + 1);
        double rate = std::atof(rateStr.c_str());

        if (!validateDate(date))
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        if (rate < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (rate > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        std::cout << "Date: " << date << " => " << rate << " = " << rate * btcExchange.getRateOnDate(date) << std::endl;
    }
    inputFile.close();
    return 0;
}
