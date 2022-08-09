#include<iostream>

using std::string;

class A {
    public:
        void print() {
            std::cout << "heyy\n";
        }
};

class B: public A {
    public:
        void print() {
            std::cout << "Why\n";
        }
};

class C: public A {
    public:
        void print() {
            std::cout << "okayy\n";
        }
};

class D: public A {};
class E: public B {};

int main() {
    // polymorphism

    A a;
    B b;
    C c;
    D d;
    E e;
    
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();

}
