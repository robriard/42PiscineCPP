/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:07:59 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 17:12:35 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_CLASS_HPP
# define FILE_CLASS_HPP

# include <iostream>
#include <string>
# include <fstream>

class File{
public:
    File(std::string name, std::string oldSequence, std::string newSequence);
    ~File();

    const std::string&      getName(void) const;
    const std::string&      getOldSequence(void) const;
    const std::string&      getNewSequence(void) const;
    std::string&            getContent(void);
    
    void    replace(void);
    void    ifsOpen(void);
    void    ofsOpen(void);
    void    ifsRead(void);
    void    ifsClose(void);
    void    ofsClose(void);
    void    ofsWrite(void);

private:
    const std::string   _name;
    const std::string   _oldSequence;
    const std::string   _newSequence;
    std::string         _content;
    std::ifstream       _ifs;
    std::ofstream       _ofs;
};

#endif