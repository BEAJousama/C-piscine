/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:09:52 by obeaj             #+#    #+#             */
/*   Updated: 2022/05/14 20:06:25 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper(char *s)
{
	int	i;
	
	i = -1;
	while(s[++i])
		std::cout <<(char)toupper(s[i]);
}

int main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else
	{
		while (av[++i])
			to_upper(av[i]);
		std::cout << std::endl ;
	}
	return (0);
}