/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:22:45 by unknow            #+#    #+#             */
/*   Updated: 2021/11/30 10:50:59 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cmath>
# include <iostream>
# include <stdexcept>


template<typename T>
class Array{
public:
	class OutOfLengthException: public std::exception {
        public:
            virtual const char* what() const throw(){
                return "Out Of Length Exception";
            
            }
    };
    Array<T>() : _array(NULL) {return;};
    Array<T>(unsigned int length) : _array(!length ? NULL : new T[length]), _length(length) {return;};
    Array<T>(Array const & src) : _array(!src.size() ? NULL : new T[src.size()]), _length(src.size()){
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
            this->_array = NULL;
        else
            this->_array = new T[rhs.size()];
        for (unsigned int i; i < rhs.size(); i++)
            this->_array[i] = rhs._array[i];
        this->_length = rhs._length;
        return *this;
    };
	T&	operator[](size_t index) {
		try {
			if (index >= this->_length)
				throw OutOfLengthException();
			return this->_array[index];
		}
		catch ( OutOfLengthException &  OOL ) {
			std::cout << OOL.what() << std::endl;
			return this->_array[0];
		}
	}


    size_t	size(void) const{return (_length);};
    void	getArray(void) const {
		for (size_t i = 0; i < this->_length; i++)
			std::cout << this->_array[i] << std::endl;
	}
private:
    T       *_array;
    size_t  _length;
};

#endif