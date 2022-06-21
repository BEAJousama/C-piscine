/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:34:31 by obeaj             #+#    #+#             */
/*   Updated: 2022/05/20 15:55:53 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}
Contact::Contact(t_info info)
{
    this->info.first_name = info.first_name;
    this->info.last_name = info.last_name;
    this->info.nick_name = info.nick_name;
    this->info.phone_number = info.phone_number;
    this->info.dark_sec = info.dark_sec;
}

Contact::~Contact()
{
}
