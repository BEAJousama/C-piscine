/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:00:44 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/13 17:40:49 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain created !"<<std::endl;
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
}

Brain::~Brain()
{
    std::cout<<"Brain destructed !"<<std::endl;
}

Brain& Brain::operator=(const Brain &obj)
{
    if (this == &obj)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    return *this;
}

std::string Brain::getIdeas(int index) const
{
    return (this->ideas[index]);
}
void Brain::setIdeas(std::string str, int index)
{
    this->ideas[index] = str;
}
