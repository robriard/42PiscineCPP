/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:09:31 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 16:22:17 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

File::File(std::string filename) : _filename(filename){
    return;
}

File::~File(){
    return;
}

const std::string&  File::getFilename(void) const{
    return this->_filename;
}
