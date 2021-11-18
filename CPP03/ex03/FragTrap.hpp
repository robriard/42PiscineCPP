/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:33:07 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 13:12:13 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap(void);
    FragTrap& operator=(FragTrap const &);
    void    highFivesGuys(void);
    void    Fattack(std::string const & target);

protected:
    unsigned int    _Fhit;
    unsigned int    _Fenergy;
    unsigned int    _Fattack;
    FragTrap(void);
};

#endif