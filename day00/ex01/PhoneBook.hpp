/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:37:24 by obeaj             #+#    #+#             */
/*   Updated: 2022/05/19 20:04:54 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void setcontact(int index, t_info info);
        Contact getcontact(int index){return(contact[index]);};
        void showcontacts();
        void print_infos(int i);
};

#endif