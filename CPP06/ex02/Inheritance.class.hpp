/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inheritance.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:38:23 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 10:44:46 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INHERITANCE_CLASS_HPP
# define INHERITANCE_CLASS_HPP

#include "Base.class.hpp"

class A : virtual public Base {
public:
    A();
    virtual ~A();

private:
    A(A const & src);
    A& operator=(A const &rhs);
};

class B : virtual public Base {
public:
    B();
    virtual ~B();

private:
    B(B const & src);
    B& operator=(B const &rhs);
};

class C : virtual public Base {
public:
    C();
    virtual ~C();

private:
    C(C const & src);
    C& operator=(C const &rhs);
};

#endif