/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:33:15 by unknow            #+#    #+#             */
/*   Updated: 2021/11/02 06:44:21 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int hash(std::string level){
    std::string tab_level[4] {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++){
        if (tab_level[i] == level)
            return i;
    }
    return -1;
}

Karen::Karen(void){
    functions[0] = &Karen::debug;
	functions[1] = &Karen::info;
	functions[2] = &Karen::warning;
	functions[3] = &Karen::error;
	return;
}

Karen::~Karen(){
    return;
}

void    Karen::debug(void){
    std::cout
        << "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
        << std::endl;
}

void    Karen::info(void){
    std::cout
        << "I cannot believe adding extra \
bacon cost more money. You don’t put enough! If you did I would not \
have to ask for it!"
        << std::endl;
}

void    Karen::warning(void){
    std::cout
        << "I think I deserve to have some extra bacon for free. I’ve been \
coming here for years and you just started working here last month."
        << std::endl;
}

void    Karen::error(void){
    std::cout
        << "This is unacceptable, I want to speak to the manager now."
        << std::endl;
}

void    Karen::complain(std::string level){
    switch (hash(level)) {
        case 0:
            (this->*(functions[0]))();
            break;
        case 1:
            (this->*(functions[1]))();
            break;
        case 2:
            (this->*(functions[2]))();
            break;
        case 3:
            (this->*(functions[3]))();
            break;
    }
    return;
}