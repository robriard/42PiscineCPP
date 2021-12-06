/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:52:20 by unknow            #+#    #+#             */
/*   Updated: 2021/12/06 11:56:41 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <climits>

class Span {
public:
	class maxInts: public std::exception {
		public:
			virtual const char* what() const throw(){
				return "Max Ints Exception";            
			}
	};
	class noIntsInSpan: public std::exception {
		public:
			virtual const char* what() const throw(){
				return "No Ints In Span Exception";            
			}
	};

    Span(unsigned int maxInts);
    Span(Span const & src);
    ~Span(void);

    Span&			operator=(Span const & rhs);
	void			addNumber(int newInt);
	void			addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int	shortestSpan(void) const;
	unsigned int	longestSpan(void) const;
private:
    Span(void);
    std::vector<int>	_vec;
    unsigned int		_maxInts;
};

#endif
