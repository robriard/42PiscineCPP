/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:49:54 by robriard          #+#    #+#             */
/*   Updated: 2021/10/26 16:55:53 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
    HumanA();
    HumanA(std::string name);
    HumanA(Weapon& weapon);
    HumanA(std::string name, Weapon weapon);
    ~HumanA();

    void                Attack();
    void                takeWeapon(Weapon weapon);
    void                setName(std::string name);
    const std::string&  getName();

private:
    std::string _name;
    Weapon& _Weapon;
};

#endif