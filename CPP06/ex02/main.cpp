/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:47:36 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 12:00:49 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inheritance.class.hpp"
# include <cstdlib>
# include <stdexcept>

void        identified(std::string const & value) { std::cout << value << std::endl; }

class NullPtrException: public std::exception {
    public:
        virtual const char* what() const throw(){
        return "adress of pointer is null";
        }
};

class NotGoodCastException: public std::exception {
    public:
        virtual const char* what() const throw(){
        return "it's not a good cast";
        }
};

void        identify(Base * p){
   try {
        if (!p)
            throw NullPtrException();
        if (A *a = dynamic_cast<A*>(p))
            return identified("A");
        if (B *b = dynamic_cast<B*>(p))
            return identified("B");
        if (C *c = dynamic_cast<C*>(p))
            return identified("C");
   }
   catch (NullPtrException & e) {
       std::cout << e.what() << std::endl;
       return;
   }
}

void        identify( Base & p){
    try {
        (void)dynamic_cast<A &>(p);
        return identified("A");
    }
    catch (...) {}
    try {
        (void)dynamic_cast<B &>(p);
        return identified("B");
    }
    catch (...) {}
    try {
        (void)dynamic_cast<C &>(p);
        return identified("C");
    }
    catch (...) {}
}

Base*       generate(void){
    srand (time(NULL));
    switch(std::rand() % 3) {
		case 0:
            return (new A());
		case 1:
            return (new B());
		case 2:
            return (new C());
	}
	return (NULL);
}

int main(void) {

    Base *base = generate();
    
    std::cout << std::endl;
    identify(base);
    identify(*base);
    identify(NULL);

    std::cout << std::endl;
    delete base;
    return 0;
}