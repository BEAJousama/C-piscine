/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:11:39 by obeaj             #+#    #+#             */
/*   Updated: 2023/03/22 13:55:53 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <sstream>
#define OPS "+-*/"
class RPN
{
    public:
        RPN();
        RPN(std::string rpnexpr);
        ~RPN();
        RPN(RPN const & src);
        RPN& operator=(RPN const & rhs);
        void solve(std::string rpnexp);
    private:
        std::stack<int> data;
};

#endif