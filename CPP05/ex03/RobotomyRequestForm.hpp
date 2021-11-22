/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:22:14 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 14:43:57 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBROTMYREQUESTFORM_HPP
# define ROBROTMYREQUESTFORM_HPP

# include <fstream>
# include <cstdlib>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
public:
    RobotomyRequestForm(std::string const& target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(RobotomyRequestForm const &);

    virtual void execute(Bureaucrat const & executor) const;
private:
    std::string     _target;
    RobotomyRequestForm();
};

#endif