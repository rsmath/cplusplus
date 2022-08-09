#include<iostream>

using std::string;


class A {
    public:
        int a;
        string b;

        string print() {
            return "wassup\n";
        }
};

class B: public A {
    public:
        int num;
};

class Uncle {
    public:
        string thisprint();
    protected:
        int age;
};

string Uncle::thisprint() {
    return "Uncle class";
}

class C: public B {};
class D: public C {};
class E: public D, public Uncle {
    public:
        // age can be accessed from parent Uncle because it is protected
        void setage(int a) {
            age = a;
        }
        int getage() {
            return age;
        }
};

int main() {
    //inheritance

    B ob;
    ob.num = 10;
    ob.a = 15;
    ob.b = "Ram";

    E another;

    std::cout << ob.num << "\n";
    std::cout << ob.a << "\n";
    std::cout << ob.b << "\n";
    std::cout << ob.print() << "\n";
    std::cout << "With E: " << another.print() << "\n";
    std::cout << "With E: " << another.thisprint() << "\n";

    another.setage(100);
    std::cout << "Age is: " << another.getage() << "\n";
}
