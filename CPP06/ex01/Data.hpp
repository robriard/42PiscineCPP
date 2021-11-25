/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:08:22 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 10:26:35 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

typedef struct Data
{
    std::string str;
    int         i;
    void        func() {
        std::cout << "func called" << std::endl;
        return;
    };
}Data;


#endif