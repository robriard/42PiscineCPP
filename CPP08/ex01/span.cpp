/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:03:48 by unknow            #+#    #+#             */
/*   Updated: 2021/12/06 12:03:29 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _maxInts(0) {return;}
Span::Span(unsigned int maxInts) : _maxInts(maxInts) {return;}
Span::Span(Span const & src) : _vec(std::vector<int>(src._vec)), _maxInts(src._maxInts) {return;}
Span::~Span(void) {return;}
Span &	Span::operator=(Span const & rhs) {
	_maxInts = rhs._maxInts;
	_vec = std::vector<int>(rhs._vec);
	return *this;
}

void			Span::addNumber(int newInt) {
	if (this->_vec.size() == this->_maxInts)
		throw maxInts();
	this->_vec.push_back(newInt);
}

void			Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	size_t	range = 0;
	for (std::vector<int>::iterator it = begin; it != end; it++)
		range++;
	if (range + this->_vec.size() > this->_maxInts)
		throw maxInts();
	for (std::vector<int>::iterator it = begin; it != end; it++)
		this->_vec.push_back(*it);
}

unsigned int		Span::shortestSpan(void) const{
	if (this->_vec.size() <= 1)
		throw noIntsInSpan();
	std::vector<int>::const_iterator end = _vec.end();
	std::vector<int>::const_iterator begin = _vec.begin();
	unsigned int result = UINT_MAX;

	for (std::vector<int>::const_iterator it1 = begin; it1 != end; ++it1)
		for (std::vector<int>::const_iterator it2 = begin; it2 != it1; ++it2)
			if (result > static_cast<unsigned int>(abs(*it1 - *it2)))
				result = static_cast<unsigned int>(abs(*it1 - *it2));
	return (result);
}

unsigned int		Span::longestSpan() const{
	if (this->_vec.size() <= 1)
		throw noIntsInSpan();
	std::vector<int>::const_iterator min = std::min_element(_vec.begin(), _vec.end());
	std::vector<int>::const_iterator max = std::max_element(_vec.begin(), _vec.end());
	return (*max - *min);
}

/*
min = + & max = +	==	-	(ex: min = 3 & max = 5 >> size = (3 - 5) = -2)
min = + & max = -	==	+	(impossible)
min = - & max = +	==	-	(ex: min = -5 & max = 3 >> size = (-5 - 3) = -8	||	ex: min = -3 & max = 5 >> size = (-3 - 5) = -8)
min = - & max = -	==	-	(ex: min = -5 & max = -3 >> size = (-5 - (-3)) = (-5 + 3) = -2)
*/
