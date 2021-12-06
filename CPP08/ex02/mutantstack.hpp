/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:19:59 by unknow            #+#    #+#             */
/*   Updated: 2021/12/06 13:32:09 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    MutantStack(void) {return;};
    MutantStack(MutantStack const & src) :std::stack<T>(src) {return;};
    ~MutantStack(void) {return;};

    MutantStack const & operator=(MutantStack const & rhs) {
		if (&rhs == this)
			return (*this);
		std::stack<T>::operator=(rhs);
		return *this;
	};

    iterator				begin(void) {return std::stack<T>::c.begin();};
    reverse_iterator		rbegin(void) {return std::stack<T>::c.rbegin();};
	
    iterator				end(void) {return std::stack<T>::c.end();};
    reverse_iterator		rend(void) {return std::stack<T>::c.rend();};
};

#endif