/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:27:29 by unknow            #+#    #+#             */
/*   Updated: 2021/11/02 06:11:05 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>


class Karen{
public:
    Karen(void);
    ~Karen(void);

    void    complain(std::string level);
    void    (Karen::*functions[4])(void);

private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
};

#endif