#include<iostream>


int main() {
    // while
    int a = 10;

    while (a < 100) {
        std::cout << "It is: " << a << '\n';
        a += 2;
    }

    a = 5;
    do {
        std::cout << a << '\n';
        a -= 1;
    } while (a > 0);


    // for loop
    for (a = 0; a < 10; a += 1) {
        if (a == 4) {
            std::cout << "byeeeeeee" << '\n';
            continue;
        }
        std::string b = (a % 2 == 0) ? "even": "odd";
        std::cout << "Value of a is " << a << " and it is " << b << '\n';
    }
}
