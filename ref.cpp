#include<iostream>

using std::string;

int main() {

    // references

    int a = 10;

    std::cout << a << '\n';
    std::cout << &a << '\n';

    std::cout << "setting a ref to int a\n";

    int &b = a;

    std::cout << "b is " << b << '\n';
    b = 4;
    std::cout << "b is " << b << '\n';
    std::cout << "a is " << a << "\n\n\n\n";

    // pointer are variables that store the memory address
    
    string name = "Ramansh";
    string* ptr = &name;
    string** ptr1 = &ptr; // double ** to make pointer of pointer
    string*** ptr2 = &ptr1; // triple *** to make pointer of pointer
    
    std::cout << "string: " << name << '\n';
    std::cout << "Pointer: " << ptr << "\n\n\n";

    std::cout << "Pointer's pointer: " << ptr1 << '\n';
    std::cout << "Pointer's pointer's pointer: " << ptr2 << '\n';

    // converting everything back
    std::cout << "\n\nEvaluating pointer's pointer's pointer: " << *ptr2 << '\n';
    std::cout << "Evaluating pointer's pointer: " << *ptr1 << '\n';
    std::cout << "Evaluating pointer: " << *ptr << '\n';

    // when * is used in definition, string *, it makes a pointer
    // when it is used in front of a variable, it deferences in the pointer
    
    *ptr = "askdfasdf";

    std::cout << *ptr << '\n';
    std::cout << name; // this does something weird with the original variable, don't change pointers
}

