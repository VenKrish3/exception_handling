#include <iostream>
using namespace std;
class Excp1 : public exception {
    virtual const char *what() const throw()
    {
        return "argumentoneisnogood";
    }
    
} e1;
class Excp2 : public exception {
    virtual const char *what() const throw()
    {
        return "theycantbethesame";
    }
    
} e2;
class Excp3 : public exception {
    virtual const char *what() const throw()
    {
        return "theycantadd";
    }
    
} e3;

void my_exceptions(int &num1, int &num2, int &num3) {
    
}
int main() {


    return 0;
}