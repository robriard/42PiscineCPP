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

/* ************************************************************************** */
/*                  Constructor & Destructor                                  */
/* ************************************************************************** */

File::File(std::string name, std::string oldSequence, std::string newSequence) : _name(name), _oldSequence(oldSequence), _newSequence(newSequence), _content(""){
    return;
}

File::~File(){
    return;
}



/* ************************************************************************** */
/*                  Guetteurs                                                 */
/* ************************************************************************** */
const std::string&      File::getName(void) const{
    return this->_name;
}

const std::string&      File::getOldSequence(void) const{
    return this->_oldSequence;
}

const std::string&      File::getNewSequence(void)const {
    return this->_newSequence;
}

std::string&            File::getContent(void){
    return this->_content;
}



/* ************************************************************************** */
/*                  Filestreams opening & closing                             */
/* ************************************************************************** */
void            File::ifsOpen(void){
    this->_ifs.open(this->_name);
    return;
}

void            File::ofsOpen(void){
    this->_ofs.open(this->_name+".replace");
    return;
}

void            File::ifsClose(void){
    this->_ifs.close();
    return;
}

void             File::ofsClose(void){
    this->_ofs.close();
    return;
}

void            File::ifsRead(void){
    std::string buf;

    while (getline(this->_ifs, buf))
    {
        if (this->_content.size())
            this->_content.append("\n");
        this->_content.append(buf);
    }
    return;
}

void            File::ofsWrite(void){
    this->_ofs << this->_content;
    return ;
}

void            File::replace(void){
    std::string str;
    for (int i = (this->_content.size() - this->_oldSequence.size()); i >= 0; i--){
        str = this->_content.substr(i, this->_oldSequence.size());
        if (str == this->_oldSequence){
            this->_content.erase(i, this->_oldSequence.size());
            this->_content.insert(i, this->_newSequence);
        }
    }
    return;
}