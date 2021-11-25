/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:12:45 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 10:27:26 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t   serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*       deserialize(uintptr_t raw){
    return (reinterpret_cast<Data *>(raw));
}

int         main(void) {
    Data *data = new Data;

    std::cout << data << std::endl;
    std::cout << deserialize(serialize(data)) << std::endl;
    delete data;
    return 0;
}