/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:23:42 by unknow            #+#    #+#             */
/*   Updated: 2021/12/06 11:37:05 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
    std::list<int> test;

    for (size_t i = 0; i < 20; i++)
        test.push_back(i);
    try {
		std::cout << easyfind(test, 1) << std::endl;
		std::cout << easyfind(test, 10) << std::endl;
		std::cout << easyfind(test, 20) << std::endl;
	}
    catch(outOfRange & e) {
		std::cout << e.what() << std::endl;
	}


	try {
		std::cout << easyfind(test, 42) << std::endl;
	}
	catch (outOfRange & e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}