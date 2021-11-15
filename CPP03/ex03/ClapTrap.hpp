/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:47:11 by unknow            #+#    #+#             */
/*   Updated: 2021/11/14 09:55:27 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap virtual{
public:
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const& src);
    virtual ~ClapTrap();

    ClapTrap&   operator=(ClapTrap const& rhs);

    void        attack(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

    const std::string   getName(void) const;
    unsigned int        getEnergy(void) const;

protected:
    std::string     _name;
    unsigned int    _hit;
    unsigned int    _energy;
    unsigned int    _attack;

private:
    ClapTrap();
};

#endif