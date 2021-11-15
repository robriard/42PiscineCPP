/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:33:07 by unknow            #+#    #+#             */
/*   Updated: 2021/11/11 04:01:22 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
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