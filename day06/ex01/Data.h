/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:54:19 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/07 12:58:35 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>

typedef struct t_Data
{
    int     val;
    std::string str;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif