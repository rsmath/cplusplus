#include<iostream>
#include<math.h>

int main(){

    std::cout << "asdfasdf" << std::endl;
    std::cout << "asdfasdf";
    std::cout << "asdfasdf";
    std::cout << "asdfasdf" << std::endl;

    bool b = true;
    std::cout << b << std::endl;

    b = false;
    std::cout << b << std::endl;

    int a, bb = 10, c = 45, d;

    a = bb + b + (c * 100);
    std::cout << a << std::endl;

    std::cout << a + bb + pow(c, 2) << std::endl;

    float x, y;
    x = y = 10.;
    std::cout << "y is: " << y << std::endl;

    const int h = 4;

    // h = 2; will result in error because h is defined as const
    

    const std::string g = "asdfasdfasdf";

    std::cout << g << std::endl;

    std::cout << "Practicing user input now\n";

    int input;
    std::cout << "Gimme it: ";
    std::cin >> input;
    std::cout << "Your number is " << input << std::endl;

    double rtrt = 4.5e4;
    std::cout << rtrt;

    std::cout << rtrt / a << std::endl;
    std::cout << 45 / 4 << std::endl;
    std::cout << 45.4 / 4 << std::endl;
    std::cout << 8 / 4 << std::endl;
    std::cout << 9 % 4 << std::endl;
    std::cout << "\n\naksdjf\n\n";
    std::cout << "checking " << (4 & 10) << std::endl;
    std::cout << "checking agian " << (1 | 10) << std::endl;
    std::cout << "Asdfasdkfj:w" << std::endl;

    std::cout << x << std::endl;
    std::cout << --x << std::endl;
    std::cout << x << std::endl;
    std::cout << ++x << std::endl;
    std::cout << "\n\ndifference\n";

    x = 10, y = 12;

    std::cout << (x == y) << std::endl;
    std::cout << (x < y) << std::endl;
    std::cout << (x > y) << std::endl;
    std::cout << (x <= y) << std::endl;
    std::cout << (x >= y) << std::endl;
    std::cout << "(x >= y && x != y) " << (x >= y && x != y) << std::endl;
    std::cout << "(x >= y || x != y) " << (x >= y || x != y) << std::endl;
    std::cout << "(x >= y && x != y) " << (x >= y && x != y) << std::endl;
}
