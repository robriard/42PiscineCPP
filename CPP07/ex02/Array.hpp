/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:22:45 by unknow            #+#    #+#             */
/*   Updated: 2021/11/26 13:39:37 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array{
public:
    Array<T>() : _array(0) {return;};
    Array<T>(unsigned int length) : _array(!length ? NULL : new T[length]) { return; };
    Array<T>(Array const & src) : _array(!src.size() ? NULL : new T[src.size()]){
        if (!src._array)
            return;
        for (unsigned int i = 0; i < src.size(); i++)
            this->_array[i] = src._array[i];
        return;
    };
    ~Array<T>() {
        if (this->_array) {
            delete [] this->_array;
            this->_array = NULL;
        }
        return;
    };
    
    Array<T> operator=(Array<T> const & rhs){
        if (&rhs == this)
				return *this;
        if (!rhs.size())
            return NULL;
        _array = new T[rhs.size()];
        for (unsigned int i; i < rhs.size(); i++)
            this->_array[i] = rhs._array[i];
    };
    
    size_t size(void) const{
        if (this->_array)
            return 1 / sizeof(T) * sizeof(this->_array);
        return 0;
    };
private:
    T               *_array;
};

#endif