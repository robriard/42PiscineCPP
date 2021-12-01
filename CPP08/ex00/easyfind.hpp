/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:37:10 by unknow            #+#    #+#             */
/*   Updated: 2021/11/30 15:57:16 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <stdexcept>
# include <list>
# include <algorithm>

class outOfRange: public std::exception {
    public:
        virtual const char* what() const throw(){
            return "Out Of Range Exception";            
        }
};

template <typename T>
int const &	easyfind(T &container, int nb) {
    typename T::iterator ite =  std::find(container.begin(), container.end(), nb);
    if (ite == container.end())
        throw outOfRange();
    return *ite;
}
	
#endif