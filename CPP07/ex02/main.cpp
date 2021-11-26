/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:05:25 by unknow            #+#    #+#             */
/*   Updated: 2021/11/26 13:43:07 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void){
    char * a = new char(15);

    for (size_t i = 0; i < 1; i++) {
        std::cout << static_cast<int>(a[i]) << std::endl;
    }
    delete a;
}