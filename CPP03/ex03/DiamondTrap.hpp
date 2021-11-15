/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:33:07 by unknow            #+#    #+#             */
/*   Updated: 2021/11/14 09:55:14 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap(void);
    FragTrap& operator=(FragTrap const &);
    void    highFivesGuys(void);
    void    attack(std::string const & target);

private:
    FragTrap(void);
};

#endif