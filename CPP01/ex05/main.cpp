/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:15:19 by unknow            #+#    #+#             */
/*   Updated: 2021/11/02 06:19:44 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <sstream>

int     main(void){
    Karen karen;
    std::string level;

    std::cout << ">>> ";
    while (getline(std::cin, level)){        
        karen.complain(level);
        std::cout << ">>> ";
    }
}