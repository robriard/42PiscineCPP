/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:41:04 by unknow            #+#    #+#             */
/*   Updated: 2021/12/06 12:08:45 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void) {
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span test = Span(100);
    std::vector<int> vec;
    for (int i = 5; i < 65; i++)
        vec.push_back(i);
    test.addRange(vec.begin(), vec.end());
    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;
    try {
        test.addRange(vec.begin(), vec.end());
    }
    catch (Span::maxInts & mi) {
        std::cout << mi.what() << std::endl;
    }
    return EXIT_SUCCESS;
}