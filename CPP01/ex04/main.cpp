/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:22:27 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 16:28:00 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

int main(int argc, char **argv){
    if (argc != 4) {std::cout << "Error\n"; return 1;}
    File f(argv[1], argv[2], argv[3]);
    std::cout << f.getName() << std::endl;
    std::cout << f.getOldSequence() << std::endl;
    std::cout << f.getNewSequence() << std::endl;
}

// int main(int argc, char **argv)
// {
//     if (argc != 4) {std::cout << "Error\n"; return 1;}
//     std::ifstream   ifs(argv[1]);
//     std::string     str = "";
//     std::string     buf;
//     while(getline(ifs, buf)){
//         if (str != "") str.append("\n");
//         str.append(buf);
//     }
//     std::cout << str << std::endl;
//     std::cout << str << std::endl;
//     str.replace(0, 6, "koukou");
//     std::cout << str << std::endl;
//     ifs.close();
//     std::ofstream   ofs(argv[1]);
//     ofs << str;
//     ofs.close();
// }