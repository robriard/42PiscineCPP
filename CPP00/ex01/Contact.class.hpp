
#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# define EXIT_BOF 0

#include <string>

class Contact{
public:
/*
 * ====== BTP =======
 */
    Contact(void);
    ~Contact(void);

/*
 * ====== Jet 20set =======
 */
    int        setVar(int index);


/*
 * ====== Guetteurs =======
 */ 
    int         getIndex(void) const;
    bool        getCreated(void) const;
    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickname(void) const;
    std::string getPhoneNumber(void) const;
    std::string getSecret(void) const;

private:
    int            _index;
    bool           _created;
    std::string    _firstName;
    std::string    _lastName;
    std::string    _nickname;
    std::string    _phoneNumber;
    std::string    _secret;
};

#endif