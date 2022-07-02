/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:44:52 by obeaj             #+#    #+#             */
/*   Updated: 2022/07/01 15:52:27 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include "WrongAnimal.hpp"

class WrongCat : public virtual WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &obj);
        WrongCat& operator=(const WrongCat &obj);
        std::string getType() const;
        void makeSound() const;
        
};

#endif