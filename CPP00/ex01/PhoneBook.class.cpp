#include "PhoneBook.class.hpp"

Contact    &PhoneBook::Contacts(int index){
    return this->_Contacts[index];
}

PhoneBook::PhoneBook(void) {
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}