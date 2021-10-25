#include <iostream>
#include <sstream>
#include "Contact.class.hpp"

/*
 * ====== Jet 20set =======
 */
void        Contact::setVar(int index){
    this->_index = index;
    this->_created =true;
    std::cout << "First Name: ";
    getline(std::cin, this->_firstName);
    std::cout << "Last Name: ";
    getline(std::cin, this->_lastName);
    std::cout << "Nickname: ";
    getline(std::cin, this->_nickname);
    std::cout << "Phone Number: ";
    getline(std::cin, this->_phoneNumber);
    std::cout << "Secret: ";
    getline(std::cin, this->_secret);
}

/*
 * ====== Guetteurs =======
 */
int         Contact::getIndex(void) const{
    return this->_index;
}
bool        Contact::getCreated(void) const{
    return this->_created;
}
std::string Contact::getFirstName(void) const{
    return this->_firstName;
}
std::string Contact::getLastName(void) const{
    return this->_lastName;
}
std::string Contact::getNickname(void) const{
    return this->_nickname;
}
std::string Contact::getPhoneNumber(void) const{
    return this->_phoneNumber;
}
std::string Contact::getSecret(void) const{
    return this->_secret;
}

/*
 * ====== BTP =======
 */
Contact::Contact(void){
    this->_created = false;
    return;
}

Contact::~Contact(void){
    return;
}