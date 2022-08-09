#include<iostream>

using std::string;

class M {
    public:
        int a;
        string b;
        void print(string str) {
            std::cout << str << "\n";
        }
        void print() {
            std::cout << "No string provided." << "\n";
        }
        void another(); // declared inside class
        void another(string randomstringname); // declared inside class, with any parameter name
}; // classes definitions need ; at the end

void M::another() {
    std::cout << "Defined outside class.\n";
}

void M::another(string s) {
    std::cout << s << ". Defined outside class.\n";
}

class HJ {
    public:
        HJ() {
            // constructor
            std::cout << "HJ class, constructor called.\n";
        }
        HJ(int a, string name) {
            // constructor
            std::cout << "Hi " << name << ", you passed in int value " << a << ".\n";
        }
        // CONSTRUCTOR SHOULD ALWAYS HAVE SAME NAME AS CLASS, BE PUBLIC, AND RETURN NOTHING (NO RETURN TYPE IN CONSTRUCTOR DEFINITION LINE)
        HJ(int b);
};

HJ::HJ(int a) {
    std::cout << "Constructor defined outside class.\nPassed in int value: " << a << ".\n";
}

int main() {
    // object oriented programming
    

    M ob;
    ob.a = (int)2.99999999;
    ob.b = "Asdf";

    std::cout << ob.a << "\n";
    std::cout << ob.b << "\n";

    ob.print();
    ob.print("wassup");
    ob.another();
    ob.another("random string");
    // ob.print('b'); will give error because char isn't converted to string
    
    HJ a;
    HJ b(4, "Ram");
    HJ c(4);
}
