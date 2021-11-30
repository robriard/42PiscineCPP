/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:05:25 by unknow            #+#    #+#             */
/*   Updated: 2021/11/30 10:54:52 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int findType(char *arg) {
    std::string types[] = {"int", "double", "float", "char", "string"};
    for (int i = 0; i < 5; i++)
        if (types[i].c_str() == arg)
            return (i);
    return (-1);
}

int main(int ac, char **av){
    if (ac < 2) {
        std::cout << "Bad Number of argument" << std::endl;
        return 0;
    }
    Array<double>	a(atoi(av[1]));
	Array<double>	b(a);
	Array<double>	c = a;

	std::cout << "a.size = " << a.size()
		<< ", b.size = " << b.size()
		<< ", c.size = " << c.size() << std::endl << std::endl;
    for (size_t i = 0; i < a.size(); i++) {
        std::cout << "a[" << i << "] = {" << a[i] << "}" << std::endl;
        std::cout << "b[" << i << "] = {" << b[i] << "}" << std::endl;
        std::cout << "c[" << i << "] = {" << c[i] << "}" << std::endl;
        std::cout << std::endl;
    }
}