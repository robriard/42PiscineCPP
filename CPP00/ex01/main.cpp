#include <iostream>
#include <sstream>
#include "PhoneBook.class.hpp"
int    searchContact(PhoneBook phonebook);
int    addContact(int &index, Contact &Contact);

int     main( void) {
    std::string input;
    int last = 0;
    PhoneBook phonebook;
    std::cout << ">>> ";
    while ( getline(std::cin, input) ) {
        if ( input == "EXIT")
            return (EXIT_SUCCESS);
        else if ( input == "ADD"){
            if (addContact(last, phonebook.Contacts(last)))
                break;
        }
        else if ( input == "SEARCH")
            if (searchContact(phonebook))
                break;
        std::cout << ">>> ";
    }
    std::cout << std::endl;
    return EXIT_FAILURE;
}