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

File::File(std::string name, std::string oldSequence, std::string newSequence) : _name(name), _oldSequence(oldSequence), _newSequence(newSequence){
    std::cout << this->_name << ": created" << std::endl;
    return;
}

File::~File(){
    std::cout << this->_name << ": destroyed" << std::endl;
    return;
}



/* ************************************************************************** */
/*                  Guetteurs                                                 */
/* ************************************************************************** */
std::string&    File::getName(void){
    return this->_name;
}

std::string&    File::getOldSequence(void){
    return this->_oldSequence;
}

std::string&    File::getNewSequence(void){
    return this->_newSequence;
}



/* ************************************************************************** */
/*                  Filestreams opening & closing                             */
/* ************************************************************************** */
void            File::ifsOpen(void){
    this->_ifs.open(this->_name);
    return;
}

void            File::ofsOpen(void){
    this->_ofs.open(this->_name);
    return;
}

void            File::ifsClose(void){
    this->_ifs.close();
    return;
}

void            File::ofsClose(void){
    this->_ofs.close();
    return;
}