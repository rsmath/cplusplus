#include<iostream>

using std::string; // so that we do not need to write std::string

int main() {

    // references

    int a = 10;

    std::cout << a << '\n';
    std::cout << &a << '\n';

    std::cout << "setting b ref to int a\n";

    int &b = a;

    std::cout << "b is " << b << '\n';
    std::cout << "&b is " << &b << '\n';
    b = 4;
    std::cout << "b is " << b << '\n';
    std::cout << "a is " << a << "\n\n\n\n";

    /* string temp; */
    /* std::getline(std::cin, temp); */

    /* std::cout << "Temp string is: " << temp << std::endl; */
    /* temp = "asdfsadf"; */
    /* std::cout << "Temp string is: " << temp << std::endl; */

    // pointer are variables that store the memory address
    
    string name = "Ramansh";
    string* ptr = &name;
    string** ptr1 = &ptr; // double ** to make pointer of pointer
    string*** ptr2 = &ptr1; // triple *** to make pointer of pointer of pointer
    
    std::cout << "string: " << name << std::endl;
    std::cout << "Pointer: " << ptr << std::endl;

    std::cout << "Pointer's pointer: " << ptr1 << std::endl;
    std::cout << "Pointer's pointer's pointer: " << ptr2 << std::endl;

    // converting everything back
    std::cout << "\n\nEvaluating pointer's pointer's pointer: " << *ptr2 << '\n';
    std::cout << "Evaluating pointer's pointer: " << *ptr1 << '\n';
    std::cout << "Evaluating pointer: " << *ptr << '\n';

    // when * is used in definition, string *, it makes a pointer
    // when it is used in front of a variable, it deferences in the pointer
    
    *ptr = "sharma";

    std::cout << ptr << '\n';
    std::cout << name; // this does something weird with the original variable, don't change pointers
}

