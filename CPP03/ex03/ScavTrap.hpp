/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:33:07 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 13:26:15 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();
    ScavTrap& operator=(ScavTrap const &);
    void    guardGate(void);
    void    Sattack(std::string const & target) const;

protected:
    unsigned int    _Shit;
    unsigned int    _Senergy;
    unsigned int    _Sattack;
    ScavTrap();
};

#endif