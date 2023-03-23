/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:56:34 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/22 14:36:54 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <cstdlib>

#define WHITESPACES " \t\f\v\n\r"
class BitcoinExchange
{
    public:
        typedef std::map<std::string, double> Map;
        typedef Map::iterator iterator;
    private:
        Map data;
        // double result;
    private:
        std::string& rtrim(std::string& str);
        std::string& ltrim(std::string& str);
        std::string& stringtrim(std::string &str);
    public:
        BitcoinExchange();
        BitcoinExchange(std::string filename);
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const & src);
        BitcoinExchange & operator=(BitcoinExchange const & rhs);
        void    setData(std::string filename);
        void    exchange(std::string inputfile);
        bool    parseDate(std::string date);
        bool    parseValue(std::string value);
        bool    isNumber(std::string& val, bool isdouble);
        Map     getData();
        double  getRate(std::string date);
};

#endif
