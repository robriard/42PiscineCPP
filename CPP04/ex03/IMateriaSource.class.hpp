/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 05:59:58 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 16:13:05 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_HPP
# define IMATERIASOURCE_CLASS_HPP

#include <iostream>
#include "AMateria.class.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();
	
    MateriaSource& operator=(MateriaSource const & rhs);
	
    AMateria* createMateria(std::string const & type);
	void learnMateria(AMateria*);

private:
	AMateria **_materia;

};

#endif