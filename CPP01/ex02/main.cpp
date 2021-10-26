/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:34:10 by robriard          #+#    #+#             */
/*   Updated: 2021/10/26 15:34:13 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(void) {
    std::string str = "HI THIS IS BRAIN";

    std::string* strPTR = &str;
    std::string& strREF = str;

    std::cout << "str adress        : " << &str << std::endl;
    std::cout << "str adress by ptr : " << strPTR << std::endl;
    std::cout << "str adress by ref : " << &strREF << std::endl << std::endl;

    std::cout << "str content by ptr : " << *strPTR << std::endl;
    std::cout << "str content by ref : " << strREF << std::endl;
}