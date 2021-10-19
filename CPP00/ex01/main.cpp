#include <iostream>
#include "User.class.hpp"

Users addUser(User users[8])
{

}

int main( void) {
    char *input;
    User users[8];

    while ( true ) {
        std::cin >> input;
        if ( input == "EXIT")
            return (EXIT_SUCCESS);
        else if ( input == "ADD")
            addUser(users);
    }

}