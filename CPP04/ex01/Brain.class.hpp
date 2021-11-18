/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:04:01 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 09:52:21 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <iostream>

class Brain{
public:
    Brain();
    Brain(Brain const & src);
    ~Brain();

    Brain& operator=(Brain const & src);

    std::string *getIdeas(void) const;
private:
    std::string *_ideas;

};

#endif