#include<iostream>
using std::string;

int main() {
    // structs, lol

    const int c = 4;
    std::cout << "c is " << c << '\n';

    struct one {
        int a;
        string b;
    };

    one g;
    g.a = 4;

    std::cout << g.a << std::endl;
    std::cout << "g.b is: " << g.b << std::endl; // will print an empty space

    std::cout << "\ntrying something else\n";

    // one can also directly initialize struct variables are defining them
    // one cannot initialize variables in the definition
    struct {
        int g;
        string l;
    } first, second;

    first.g = 1;
    first.l = "i am ram";
    second.g = 1e9;
    second.l = "asdf";
    std::cout << first.g << " " << first.l << "\n";
    std::cout << second.g << " " << second.l << "\n";
}
