/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:24:56 by unknow            #+#    #+#             */
/*   Updated: 2021/11/26 12:32:21 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

#include <iostream>
class ICharacter;


class AMateria{
    private:
        AMateria();

    protected:
        std::string _type;

    public:
        AMateria(std::string const& type);
        AMateria(AMateria const & src);
        virtual ~AMateria();

        AMateria& operator=(AMateria const &rhs);

        std::string const&    getType(void) const;
        virtual AMateria* clone() const = 0;
        // virtual void use(std::string target);
        virtual void use(ICharacter& target);
};

class Ice : virtual public AMateria{
    public:
        Ice();
        Ice(Ice const & src);
        ~Ice();

        Ice& operator=(Ice const & rhs);
        
        virtual Ice* clone(void) const;
        // virtual void use(std::string target);
        virtual void use(ICharacter& target);
};

class Cure : virtual public AMateria{
    public:
        Cure();
        Cure(Cure const & src);
        ~Cure();

        Cure& operator=(Cure const & rhs);
        
        virtual Cure* clone() const;
        // virtual void use(std::string target);
        virtual void use(ICharacter& target);
};

#endif