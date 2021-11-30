/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:03:43 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 16:19:35 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
# include <iostream>

void	print(char &c)
{
	std::cout << c;
}

void	add(char &c)
{
	c++;
}

int main(void)
{
	char test[] = "abcdefghijklmnopqrstuvwxyz";
	::iter(test, strlen(test), print);
	std::cout << std::endl;
	::iter(test, strlen(test), add);
	::iter(test, strlen(test), print);
	return 0;
}