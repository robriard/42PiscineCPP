/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:08:43 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 15:17:48 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB();

    void                attack();
    void                setWeapon(Weapon& weapon);
    const std::string&  getName() const;

private:
    const std::string _name;
    Weapon* _Weapon;
};

#endif