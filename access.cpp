#include<iostream>

using std::string;

class A {
    public:
        int a;
    private:
        int b;
    int x; // by defauly is private

    public:
       void setb(int a) {
            b = a; // not recommended but can use local variable a, this will not invoke the class parameter a
       }
       int getb() {
            return b;
       }
};

int main() {
    A ob;

    ob.a = 4;

    std::cout << "a value: " << ob.a << "\n";

    // errors because b and x are private
    /* ob.b= 4; */
    /* std::cout << "b value: " << ob.b << "\n"; */

    /* ob.x = 4; */
    /* std::cout << "x value: " << ob.x << "\n"; */

    ob.setb(341234);
    ob.a = 123123;
    std::cout << "a is " << ob.a << "\n";
    std::cout << ob.getb() << "\n";
}
