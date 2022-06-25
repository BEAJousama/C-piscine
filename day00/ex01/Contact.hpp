/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:30:42 by obeaj             #+#    #+#             */
/*   Updated: 2022/06/25 11:52:56 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H
# include <iostream>
# include <string>

typedef struct s_info
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string dark_sec;
}   t_info;

class Contact
{
private:
    t_info info;
public:
    Contact();
    Contact(t_info info);
    t_info get_infos();
    void set_infos(t_info infos);
    ~Contact();
};

#endif