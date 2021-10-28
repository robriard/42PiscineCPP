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

int main(int argc, char **argv)
{
    if (argc != 4){std::cout << "Error" << std::endl; return EXIT_FAILURE;}
    
    File f(argv[1], argv[2], argv[3]);
}