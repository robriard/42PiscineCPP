/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:55:18 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 16:14:21 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstring>

template<typename T>
void	iter(T *array, size_t size, void (*f)(T &))
{
	for(size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif