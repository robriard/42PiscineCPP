#ifndef PHONEBOOK_CLASS_HPP
 # define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
public:
    PhoneBook(void);
    ~PhoneBook(void);
    Contact     &Contacts(int index);

private:
    Contact _Contacts[8];
};

#endif