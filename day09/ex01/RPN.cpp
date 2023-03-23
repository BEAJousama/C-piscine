/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:11:31 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/22 15:35:31 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    
};

RPN::RPN(std::string rpnexpr)
{
    solve(rpnexpr);
};

RPN::~RPN()
{
};

RPN::RPN(RPN const & src)
{
    *this = src;
};

RPN& RPN::operator=(RPN const & rhs)
{
    if (this != &rhs)
    {
        this->data = rhs.data;
    }
    return (*this);
};

void RPN::solve(std::string rpnexp)
{
    // std::istringstream iss(rpnexp);
    std::string tokens = rpnexp ;
    size_t i = 0;

    while (tokens[i]) 
    {
        if (tokens[i] == '+' || tokens[i] == '-' || tokens[i] == '/' || tokens[i] == '*') 
        {
            if (data.size() < 2) 
            {
                std::cout << "Error: Invalid expression ." << std::endl;
                return ;
            }
            int op2 = data.top();
            data.pop();
            int op1 = data.top();
            data.pop();
            
            switch (tokens[i]) 
            {
                case '+':
                    data.push(op1 + op2);
                    break;
                case '-':
                    data.push(op1 - op2);
                    break;
                case '*':
                    data.push(op1 * op2);
                    break;
                case '/':
                    if (op2 == 0) 
                    {
                        std::cout << "Error: Division by zero ." << std::endl;
                        return ;
                    }
                    data.push(op1 / op2);
                    break;
            }
        } 
        else if(std::isdigit(tokens[i])) 
            data.push(tokens[i] - '0');
        else if (tokens[i] == ' ')
        {
            i++;   
            continue;
        }
        else
        {
            std::cout << "Error: Invalid expression ." << std::endl;
            return ;
        }
        i++;
    }

    if (data.size() != 1) {
        std::cout << "Error: Invalid expression ." << std::endl;
        return ;
    }

    std::cout << data.top() << std::endl;
};
