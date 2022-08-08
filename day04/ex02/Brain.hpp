/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:00:41 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/08 18:15:48 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>
# include <string>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &obj);
        Brain& operator=(const Brain &obj);
        std::string   getIdea(int i) const;
        void          setIdea(std::string s, int i);    
};

#endif