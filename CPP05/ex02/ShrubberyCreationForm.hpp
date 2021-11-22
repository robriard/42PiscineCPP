/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:41:26 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 14:44:13 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm(std::string const& target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);

    virtual void execute(Bureaucrat const & executor) const;
private:
    std::string     _target;
    ShrubberyCreationForm();
};

#endif 