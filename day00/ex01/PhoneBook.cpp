/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:37:28 by obeaj             #+#    #+#             */
/*   Updated: 2022/05/20 17:05:03 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout<<"phonebook created\n";
}

PhoneBook::~PhoneBook()
{
}

void print(std::string str, char delim)
{
    int i;
    char s[11];
    
    i = 0;
    str.copy(s, 9, 0);
    if(str[10])
        s[9] = '.';
    s[10] = '\0';
    std::cout << std::setw(10);
    std::cout << s;
    std::cout << delim;
}

bool isNumber(std::string& str)
{
    for (unsigned long i = 0; i < str.length(); i++) {
        if (std::isdigit(str[i]) == 0) return false;
    }
    return true;
}

void PhoneBook::print_infos(int i)
{
    if((getcontact(i).get_infos().first_name).empty())
        std::cout << "No contact is saved under this index !\n";
    else
    {
        std::cout << "First name : ";
        std::cout << getcontact(i).get_infos().first_name << std::endl;
        std::cout << "Last name : ";
        std::cout << getcontact(i).get_infos().last_name << std::endl;
        std::cout << "Nick name : ";
        std::cout << getcontact(i).get_infos().nick_name << std::endl;
        std::cout << "Phone number : ";
        std::cout << getcontact(i).get_infos().phone_number << std::endl;
        std::cout << "Darkest secret : ";
        std::cout << getcontact(i).get_infos().dark_sec << std::endl;  
    }
}

void PhoneBook::setcontact(int index, t_info info)
{
    contact[index].set_infos(info);
}
void PhoneBook::showcontacts()
{
    std::string index;
    
    std::cout << "\n----- ---------- ---------- ----------\n";
    std::cout << std::setw(5);
    std::cout << "Index";
    std::cout << "|";
    std::cout << std::setw(10);
    print("FirstName", '|');
    std::cout << std::setw(10);
    print("LastName", '|');
    std::cout << std::setw(10);
    print("NickName", '|');
    std::cout << "\n----- ---------- ---------- ----------\n";
    for(int i = 1; i <= 8 ; i++)
    {
        if(getcontact(i-1).get_infos().first_name.empty() == false)
        {
            std::cout << std::setw(5);
            std::cout << i;
            std::cout << "|";
            print(getcontact(i - 1).get_infos().first_name, '|');
            print(getcontact(i - 1).get_infos().last_name, '|');
            print(getcontact(i - 1).get_infos().nick_name, '|');
            std::cout << "\n\n";
        }
    }
    std::cout << "\nVeuillez saisir l'index du contact :";
    if(!std::getline(std::cin, index))
        return ;
    if(!isNumber(index) || index.empty())
    {
        std::cout << "No contact found !" << std::endl;
        return ;    
    }
    if(std::stoi(index) >= 1 && std::stoi(index) <= 8)
        print_infos(std::stoi(index) - 1);
    else
        std::cout << "No contact found !" << std::endl;
}