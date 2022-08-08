/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:54:21 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/07 12:47:49 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

uintptr_t serialize(Data* ptr)
{
    uintptr_t a;
    
    a = reinterpret_cast<uintptr_t>(ptr);
    return a;
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr;
    ptr = reinterpret_cast<Data*>(raw);
    return(ptr);
}