/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:49:50 by obeaj             #+#    #+#             */
/*   Updated: 2022/08/07 15:23:26 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.h"
#include <unistd.h>
int main()
{
    Base *a = generate();
    usleep(2000);
    Base *b = generate();
    usleep(2000);
    Base *c = generate();
    usleep(2000);
    Base *d = generate();
    usleep(2000);
    Base *e = generate();
    usleep(2000);
    Base *f = generate();

    identify(a);
    identify(b);
    identify(c);
    identify(*d);
    identify(*e);
    identify(*f);

    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;
}