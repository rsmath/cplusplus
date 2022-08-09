#include<iostream>

using std::string;

int main() {
    // learning exceptions

    int a = 10, i = 10;

    // lol
    /* while (i > 1) { */
    /*     if (i < 5) { */
    /*         break; */
    /*     } */
    /*     std::cout << i << "\n"; */
    /*     i -= 1; */
    /* } */

    while (i > 1) {
        try {
            if (i > 5) {
                std::cout << i << ", you may pass.\n";
            }
            else {
                throw i;
            }
        }
        catch (int i) {
            std::cout << i << ", you may not pass.\n";
            break;
        }
        i -= 1;
    }

    // CATCH can also take ellipsis, ... , if the type of object being taken in catch is unknown.
}
