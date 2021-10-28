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

class File{
public:

    File(std::string filename, std::string oldOccurance, std::string newOccurance);
    ~File();

    const std::string& getFilename(void) const;

private:

    const std::string       _filename;
    const std::string       _oldOccurance;
    const std::string       _newOccurance;
};

#endif