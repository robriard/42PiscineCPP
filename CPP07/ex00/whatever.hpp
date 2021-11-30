/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:24:03 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 14:48:40 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
T const &   min(T const & x, T const & y) {
    return (x < y ? x : y);
}

template<typename T>
T const &   max(T const & x, T const & y) {
    return (x > y ? x : y);
}

template<typename T>
void   swap(T& x, T& y) {
    T tmp = x;
    x = y;
    y = tmp;
    return;
}

#endif