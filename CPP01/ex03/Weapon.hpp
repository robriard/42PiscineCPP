/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:33:57 by robriard          #+#    #+#             */
/*   Updated: 2021/10/26 16:09:08 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
public:
    Weapon(std::string type);
    ~Weapon(void);

    const std::string&  getType(void) const;
    void                setType(std::string type);


private:
    std::string _type;
};

#endif