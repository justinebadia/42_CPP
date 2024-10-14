#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(std::string filename) : _filename(filename) {}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs) { *this = rhs; }
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    if (this != &rhs)
    {
        this->_data = rhs._data;
        this->_filename = rhs._filename;
    }
    return *this;
}

// UTILS FUNCTIONS

bool BitcoinExchange::isValidHeaders(std::string validHeader, std::string fileHeader)
{
    return (validHeader == fileHeader) ? true : false;
}

// Une date valide sera toujours au format "Année-Mois-Jour" (YYYY-MM-DD).
bool BitcoinExchange::isValidDate(std::string &date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    {
        std::cerr << "Invalid date format" << date << std::endl;
        return false;
    }

    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));

    if ((month < 1 || month > 12) ||
        (day < 1 || day > 31) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||
        (month == 2 && day > 28 && !(this->isLeapYear(year))))
    {
        std::cout << "Invalid date format" << date << std::endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

// • Une valeur valide doit être soit un nombre à virgule flottante (float),
// ou un entier positif, compris entre 0 et 1000.
bool BitcoinExchange::isValidValue(std::string &value)
{
    return (std::stof(value) >= 0 && std::stof(value) <= 1000) ? true : false;
}

void BitcoinExchange::bitcoinConverter(std::string inputFile)
{
    this->dataFileParser();
    this->inputFileParser(inputFile);
}

void BitcoinExchange::checkForHeaderLine(std::ifstream &data_file, std::string validHeader)
{
    std::string header_line;
    std::cout << "Checking for header line..." << std::endl;

    std::getline(data_file, header_line);
    if (header_line.empty() || !this->isValidHeaders(validHeader, header_line))
        throw std::invalid_argument("Wrong or empty header line: " + header_line);
}

void BitcoinExchange::checkForDataFile(std::ifstream &data_file)
{
    std::string line;

    while (std::getline(data_file, line))
    {
        std::istringstream ss(line);
        std::string date;
        std::string exchange_rate;

        std::getline(ss, date, ',');
        std::getline(ss, exchange_rate);

        if (!isValidDate(date))
        {
            throw std::invalid_argument("Invalid line: " + line);
        }
        this->_data.insert(std::pair<int, float>(this->dateToInt(date), std::stof(exchange_rate)));
    }

    for (std::map<int, float>::const_iterator it = this->_data.begin(); it != this->_data.end(); ++it)
    {
        std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
    }
}

int BitcoinExchange::dateToInt(std::string date)
{
    return std::stoi(date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2));
}

void BitcoinExchange::dataFileParser()
{
    std::ifstream data_file("data.csv");
    if (data_file.is_open())
    {
        this->checkForHeaderLine(data_file, "date,exchange_rate");
        this->checkForDataFile(data_file);
        data_file.close();
    }
}

void BitcoinExchange::inputFileParser(std::string input)
{
    std::ifstream input_file(input);
    std::cout << "Checking for input file..." << input << std::endl;

    if (input_file.is_open())
    {
        this->checkForHeaderLine(input_file, "date | value");
        this->checkForInputFile(input_file);

        input_file.close();
    }
}

void BitcoinExchange::checkForInputFile(std::ifstream &input_file)
{
    std::string line;
    while (std::getline(input_file, line))
    {
        line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end());
        std::istringstream ss(line);
        std::string date;
        std::string value;

        std::getline(ss, date, '|');
        std::getline(ss, value);

        if (!isValidDate(date) || !isValidValue(value))
        {
            throw std::invalid_argument("Invalid line: " + line);
        }
        this->convertValue(date, value);
    }
}

void BitcoinExchange::convertValue(std::string input_date, std::string intput_value)
{
    int date = this->dateToInt(input_date);
    float value = std::stof(intput_value);

    if (date < 20090102)
    {
        std::cerr << RED << "Invalid date: " << date << NC << std::endl;
    }
    else
    {
        float result = 0;
        for (std::map<int, float>::const_iterator it = this->_data.begin(); it != this->_data.end(); ++it)
        {
            if (date >= (*it).first)
            {
                result = value / (*it).second;
            }
        }
        std::cout << CYN << "date: " << date << " value: " << value << CYNP << " => result: " << result << NC << std::endl;
    }
}

// test
