#include <iostream>
#include <sstream>
#include "PhoneBook.class.hpp"

static void crop(std::string &elem) {
    if (elem.size() > 10){
        elem.resize(9);
        elem.append(".");
    }
    else {
        elem.insert(0, std::string(10 - elem.size(), ' '));
    }
}

static void    resume(Contact &contact){
    std::string firstName = contact.getFirstName(); crop(firstName);
    std::string lastName = contact.getLastName(); crop(lastName);
    std::string nickname = contact.getNickname(); crop(nickname);
    std::cout << "|         " << contact.getIndex() << "|" << firstName << "|" << lastName << "|" << nickname << "|" << std::endl;
    std::cout << "*----------*----------*----------*----------*" << std::endl;
    return;
}

static void printvar(Contact contact) {
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Secret: " << contact.getSecret() << std::endl;
}

int    searchContact(PhoneBook phonebook) {
    std::string input;
    std::cout << "*----------*----------*----------*----------*" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "*----------*----------*----------*----------*" << std::endl;
    int index = 0;
    while (phonebook.Contacts(index).getCreated()) {
        resume(phonebook.Contacts(index));
        index++;
    }
    if (index == 0) return EXIT_BOF;
    index = 0;
    std::cout << "Select an index: ";
    if (!getline (std::cin, input)) return EXIT_FAILURE; 
    std::stringstream(input) >> index;
    if (index <= 0 || index > 8 || !phonebook.Contacts(index - 1).getCreated()) return EXIT_BOF;
    printvar(phonebook.Contacts(index - 1));
    return EXIT_SUCCESS;
}