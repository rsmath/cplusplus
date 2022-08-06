#include<iostream>
#include<iostream>

/* void printarr(int arr[]) { */

/*     /1* for (int i = 0; i < arr.length; i++) { *1/ */
/*         std::cout << arr[i] << " "; */
/*     } */
/* } */

int main() {
    // arrays

    int arr[4] = {1, 2, 3, 4};
    /* std::cout << arr[0] << '\n'; */

    for (int i = 0; i < 4; i++) {
        std::cout << i << ": " << arr[i] << "\n";
    }
    std::cout << '\n';

    // in C++, size of array is defined. If you want extra space in future, preallocate more elements in the size

    arr[0] = 23423423;

    for (int i = 0; i < 4; i++) {
        std::cout << i << ": " << arr[i] << "\n";
    }
    std::cout << '\n';

    // sizeof, both approaches work
    std::cout << "sizeof array: " << sizeof(arr) / sizeof(arr[0]) << '\n';
    std::cout << "using int instead of first element\n";
    std::cout << "sizeof array: " << sizeof(arr) / sizeof(int) << '\n';

    std::string g[5] = {"Asdf", "ss"};
    std::cout << "Array having allocated 5 elements, but only 2 given.\n";
    std::cout << "size of string array: " << sizeof(g) / sizeof(g[0]) << '\n';
    std::cout << "size of string array: " << sizeof(g) / sizeof(std::string) << '\n';

    std::string t[] = {"Asdf", "ss"};
    std::cout << "Array having 2 given elements.\n";
    std::cout << "size of string array: " << sizeof(t) / sizeof(t[0]) << '\n';
    std::cout << "size of string array: " << sizeof(t) / sizeof(std::string) << '\n';

    // std::cout << ("\n"*4); //can't do this lol

    const int a[2][2] = {{1, 2}, {3, 4}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << '\n';
    }

}

