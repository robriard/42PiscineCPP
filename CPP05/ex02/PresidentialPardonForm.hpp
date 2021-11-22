/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:48:31 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 14:43:32 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONForm_HPP
# define PRESIDENTIALPARDONForm_HPP

# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
public:
    PresidentialPardonForm(std::string const& target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm& operator=(PresidentialPardonForm const &);

    virtual void execute(Bureaucrat const & executor) const;
private:
    std::string     _target;
    PresidentialPardonForm();
};

#endif