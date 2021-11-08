#include <iostream>
#include <sstream>
#include "Contact.class.hpp"

/*
 * ====== Jet 20set =======
 */
int        Contact::setVar(int index){
    this->_index = index;
    this->_created =true;
    std::cout << "First Name: ";
    if (!getline(std::cin, this->_firstName)) return EXIT_FAILURE;
    std::cout << "Last Name: ";
    if (!getline(std::cin, this->_lastName)) return EXIT_FAILURE;
    std::cout << "Nickname: ";
    if (!getline(std::cin, this->_nickname)) return EXIT_FAILURE;
    std::cout << "Phone Number: ";
    if (!getline(std::cin, this->_phoneNumber)) return EXIT_FAILURE;
    std::cout << "Secret: ";
    if (!getline(std::cin, this->_secret)) return EXIT_FAILURE;
    return EXIT_SUCCESS;
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