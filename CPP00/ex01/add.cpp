#include <iostream>
#include "Contact.class.hpp"

int    addContact(int &index, Contact &contact){
    index+=1;
    if (index > 8){
        std::cout << "Maximun number of contacts" << std::endl;
        return EXIT_BOF;    
    }
    if (contact.getCreated()){return EXIT_FAILURE;}
    return (contact.setVar(index));
}