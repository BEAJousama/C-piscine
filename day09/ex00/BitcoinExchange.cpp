/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:56:40 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/27 12:29:36 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{  
};


BitcoinExchange::BitcoinExchange(std::string filename)
{
    setData(filename);
};

BitcoinExchange::~BitcoinExchange()
{
    data.clear();
};

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
    *this = src;
};

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
    if (this != &rhs)
    {
        this->data = rhs.data;
    }
    return (*this);
};

std::string& BitcoinExchange::rtrim(std::string& str)
{
    str.erase(str.find_last_not_of(WHITESPACES) + 1);
    return str;
}

std::string& BitcoinExchange::ltrim(std::string& str)
{
    str.erase(0, str.find_first_not_of(WHITESPACES));
    return str;
}

std::string&  BitcoinExchange::stringtrim(std::string &str)
{
    return(ltrim(rtrim(str)));
}

void    BitcoinExchange::setData(std::string filename)
{
    std::ifstream file(filename);
    std::string line;
    std::string date;
    std::string rate;
    double result;
    
    if (!file.is_open())
    {
        std::cerr << "Error: File not found" << std::endl;
        exit(1);   
    }
    // std::getline(file, line);
    while (std::getline(file, line))
    {
        if(stringtrim(line) == "date,exchange_rate" || line.empty())
            continue;
        std::stringstream ss(line);
        std::getline(ss, date, ',');
        std::getline(ss, rate, ',');
        if(!rate.empty() && !date.empty())
        {
            result = std::strtod(rate.c_str(), NULL);
            data[date] = result;
        }
    }
};

BitcoinExchange::Map BitcoinExchange::getData()
{
    return (data);
};

double BitcoinExchange::getRate(std::string date)
{
    iterator it = data.find(date);
    if (it != data.end())
        return (it->second);
    else
    {
        it = data.upper_bound(date);
        if(it != data.begin())
            return((--it)->second);
        return (it->second);
    }
    return (-1);
};

bool    BitcoinExchange::isNumber(std::string& val, bool isdouble)
{
    size_t i = 0;
    size_t points = 0;
    
    if(val[i] == '+' || (val[i] == '-'))
            i++;
    for (i = i * 1; i < val.length(); i++)
    {
        if((val[i] == '.') && isdouble)
        {
            points++;
            continue;
        }
        if (!isdigit(val[i]))
            return (false);
    }
    if (points > 1 && isdouble)
        return (false);
    return (true);
};

bool    BitcoinExchange::parseDate(std::string date)
{
    std::string year;
    std::string month;
    std::string day;
    std::string err;
    
    std::stringstream ss(date);
    std::getline(ss, year, '-');
    std::getline(ss, month, '-');
    std::getline(ss, day, '-');
    year = stringtrim(year);
    month = stringtrim(month);
    day = stringtrim(day);
    
    if(!isNumber(year, false) || !isNumber(month, false) || !isNumber(day, false) 
        || year.length() != 4 || month.length() != 2 || day.length() != 2 || date.length() != 10)
    {
        std::cerr << "Error: bad input => " << date << " wrong format !" << std::endl;
        return (false);
    }
    if (std::atoi(month.c_str()) < 1 || std::atoi(month.c_str()) > 12)
    {
        std::cerr << "Error: bad input => " << date << " wrong month !" << std::endl;
        return (false);
    }
    if (std::atoi(day.c_str()) < 1 || std::atoi(day.c_str()) > 31)
    {
        std::cerr << "Error: bad input => " << date << " wrong day !" << std::endl;
        return (false);
    }
    if (std::atoi(month.c_str()) == 2  && std::atoi(year.c_str()) % 4 && std::atoi(day.c_str()) > 28)
    {
        std::cerr << "Error: bad input => " << year << " isn't a leap year !" << std::endl;
        return (false);
    }
    if (std::atoi(month.c_str()) == 2 && std::atoi(day.c_str()) > 29)
    {
        std::cerr << "Error: bad input => month " << month << " should contain less than 29 days ! " << std::endl;
        return (false);
    }
    return (true);
};

bool    BitcoinExchange::parseValue(std::string value)
{
    std::string val = stringtrim(value);
    
    if (!isNumber(val, true) || val.empty())
    {
        std::cerr << "Error: Not a number => " << val << std::endl;
        return (false);
    }
    if(std::atof(val.c_str()) > 1000)
    {
        std::cerr << "Error: too large number => " << val << std::endl;
        return (false);
    }
    if (std::atof(val.c_str()) < 0)
    {
        std::cerr << "Error: Not a positive number => " << val << std::endl;
        return (false);
    }

    
    return (true);
};

void    BitcoinExchange::exchange(std::string inputfile)
{
    std::ifstream file(inputfile);
    std::string line;
    std::string date;
    std::string value;
    double result;
    double rate;
    size_t firstline = 0;
    
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        exit(1);   
    }
    while (std::getline(file, line))
    {
        if(line.empty())
            continue;
        std::stringstream ss(line);
        if(!std::getline(ss, date, '|'))
            std::cerr << "Error: bad input => " << "empty date!" << std::endl;
        if (!std::getline(ss, value, '|'))
            std:: cerr << "Error: bad input => " << "empty value!" << std::endl;
        if (((stringtrim(date) == "date" && stringtrim(value) == "value")) && firstline == 0)
        {
            firstline++;
            continue;
        }
        if(!parseDate(stringtrim(date)) || date.empty())
            continue;
        if(!parseValue(stringtrim(value)) || value.empty())
            continue;
        rate = getRate(stringtrim(date));
        result =  std::strtod(stringtrim(value).c_str(), NULL) * rate;
        std::cout << date << " => " << stringtrim(value) << " = " << result << std::endl;
    }
};
