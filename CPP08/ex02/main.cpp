/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:22:33 by unknow            #+#    #+#             */
/*   Updated: 2021/12/06 13:45:58 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

int main()
{
    std::cout << std::boolalpha;
    MutantStack<int> mstack;
    std::cout << "mstack is empty ? " << mstack.empty() << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << "mstack is empty ? " << mstack.empty() << std::endl;
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << std::endl << std::endl;
    MutantStack<int> s(mstack);
    std::cout << "s is empty ? " << s.empty() << std::endl;
    for (MutantStack<int>::reverse_iterator it = s.rbegin(); it != s.rend(); it++)
        std::cout << *it << std::endl;
    
    std::cout << std::endl << std::endl;
    MutantStack<int> *stackos = new MutantStack<int>;
    std::cout << "stackos is empty ? " << stackos->empty() << std::endl;
    for (size_t index = 0; index < 5; index++)
        stackos->push(index);
    for (MutantStack<int>::iterator it = stackos->begin(); it != stackos->end(); it++)
        std::cout << *it << std::endl;
    delete stackos;
    return 0;
}