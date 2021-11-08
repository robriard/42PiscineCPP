#include <random>
#include "Point.hpp"
bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
    // Point   a;
    // Point   b(Fixed((float)18.7), Fixed((float)207.3));
    // Point   c(Fixed((int)42), Fixed((int)24));
    // Point   d(Fixed(10), Fixed(10));
    
    // if (bsp(a, d, c, b) == true)
        // std::cout << "TRUE" << std::endl;
    // else 
        // std::cout << "FALSE" << std::endl;
    // return 0;

    for (int i = 0; i < 10; i++){
        std::random_device lhs, rhs;
        rhs(), lhs();
        Point *a = new Point(Fixed((int)lhs()), Fixed((int)rhs()));
        std::cout << "A: [" << a->getX() << ", "
            << a->getY() << "]" << std::endl;


        rhs(), lhs();
        Point *b = new Point(Fixed((int)lhs()), Fixed((int)rhs()));
        std::cout << "B: [" << b->getX() << ", "
            << b->getY() << "]" << std::endl;

        rhs(), lhs();
        Point *c = new Point(Fixed((int)lhs()), Fixed((int)rhs()));
        std::cout << "C: [" << c->getX() << ", "
            << c->getY() << "]" << std::endl;

        rhs(), lhs();
        Point *d = new Point(Fixed((int)lhs()), Fixed((int)rhs()));
        std::cout << "D: [" << d->getX() << ", "
            << d->getY() << "]" << std::endl;
                
        if (bsp(*a, *b, *c, *d) == true)
            std::cout << "TRUE" << std::endl;
        else 
            std::cout << "FALSE" << std::endl << std::endl;
        delete a;
        delete b;
        delete c;
        delete d;
    }
}