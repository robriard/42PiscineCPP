#include <iostream>

char *capilizer(char *arg)
{
    for (int i = 0; arg[i] != '\0'; i++)
        if (arg[i] >= 'a' && arg[i] <= 'z') arg[i] -= 32;
    return arg;
}

int main(int ac, char *arg[]) {
    if (ac == 1) {std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; return (0);}

    int i = 1;
    while (i < ac) {
        std::cout << capilizer(arg[i]);
        i++;
    }
    std::cout << std::endl;
    return 0;
}