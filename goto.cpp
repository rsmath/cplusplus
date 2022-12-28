#include<iostream>

using std::string;

int main() {

    bool huh = 1;
whatif:
    std::cout << "Inside whatif\n";

    int a = 10;

    while (a > 1) {
        if (a == 5 and huh) {
            huh = 0;
            goto whatif;
        }
        std::cout << a << "\n";
        --a;
    }
}
