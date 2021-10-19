
#ifndef USER_CLASS_H
# define USER_CLASS_H

class User{

public:
    User(void);
    ~User();

private:
    char *first_name;
    char *last_name;
    char *nickname;
    char *phone;
    char *secret;
};

#endif