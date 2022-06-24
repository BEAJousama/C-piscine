/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:46:35 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/24 17:58:32 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

int main(int ac, char *av[])
{
    std::string  outfile, from, to, line;
    std::string  infile;
    std::fstream fout;
    std::fstream fin;
    size_t p, i = 0;
 
    if (ac != 4)
    {
        std::cout << "Usage : ./sed <infile> <str1> <str2>" << std::endl;
        return EXIT_FAILURE;
    }

    infile = av[1];
    from = av[2];
    to = av[3];
    outfile = infile + ".replace";
    fin.open(av[1]);
    if (!fin.good()) 
    {
        std::cerr << "Could not open the file - '"
             << av[1] << "'" << std::endl;
        exit(EXIT_FAILURE);
    }
    fout.open(outfile, std::ios::out);
    if (!fout.good())
    {
        std::cerr << "Could not create the file - '"
             << outfile << "'" << std::endl;
        exit(EXIT_FAILURE) ;
    }
    if (std::strlen(av[2]) == 0)
    {
        std::cout << "<str1> is empty!" << std::endl;
        return EXIT_FAILURE;
    }
    if (std::strlen(av[3]) == 0)
    {
        std::cout << "<str2> is empty!" << std::endl;
        return EXIT_FAILURE;
    }
    while (std::getline(fin, line))
    {
        i = 0;
        p = line.find(from, i);
        while (p != std::string::npos && p != line.length())
        {
            std::cout << p << std::endl;
            line.erase(p, from.length());
            line.insert(p, to);
            i = p + 1;
            p = line.find(from, i);
        };
        fout << line << "\n";
    }
    return EXIT_SUCCESS;
}