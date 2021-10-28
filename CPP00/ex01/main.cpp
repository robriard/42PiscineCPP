#include <iostream>
#include <sstream>
#include "PhoneBook.class.hpp"
void    searchContact(PhoneBook phonebook);
void    addContact(int &index, Contact &Contact);

int     main( void) {
    std::string input;
    int last = 0;
    PhoneBook phonebook;

    while ( true ) {
        std::cout << ">>> ";
        getline(std::cin, input);
        if (std::ios_base::eofbit)
            break;
        if ( input == "EXIT")
            return (EXIT_SUCCESS);
        else if ( input == "ADD")
            addContact(last, phonebook.Contacts(last));
        else if ( input == "SEARCH")
            searchContact(phonebook);
    }

}