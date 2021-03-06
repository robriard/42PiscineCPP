/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:49:54 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 15:07:43 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void                attack(void);
    void                takeWeapon(Weapon& weapon);
    const std::string&  getName(void) const;

private:
    const std::string _name;
    Weapon& _Weapon;
};

#endif
