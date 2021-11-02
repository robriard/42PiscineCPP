/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:15:19 by unknow            #+#    #+#             */
/*   Updated: 2021/11/02 06:43:46 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <sstream>

int     main(int ac, char **av){
    Karen karen;

    if (ac == 2){
        std::string level = av[1];
        karen.complain(level);
    }
}