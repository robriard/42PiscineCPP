/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:22:27 by robriard          #+#    #+#             */
/*   Updated: 2021/11/08 14:00:13 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

int main(int argc, char **argv){
    if (argc != 4){
        std::cout << "Error: not the good number of argument\n"; return 1;
    }
    std::string av1 = argv[1], av2 = argv[2], av3 = argv[3];
    if (!av1.length() || !av2.length() || !av3.length()) {
        std::cout << "Error: empty argument\n"; return 1;
    }
    File f(argv[1], argv[2], argv[3]);
    f.ifsOpen();
    f.ifsRead();
    f.ifsClose();
    f.replace();
    f.ofsOpen();
    f.ofsWrite();
    f.ofsClose();
}