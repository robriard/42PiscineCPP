#include <iostream>
#include "Contact.class.hpp"

void    addContact(int &index, Contact &contact){
    index+=1;
    if (index > 8){
        std::cout << "Maximun number of contacts" << std::endl;
        return;    
    }
    if (contact.getCreated()){return;}
    contact.setVar(index);
}