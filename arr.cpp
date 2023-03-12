#include<iostream>

using std::string;

/* void printarr(string &arr) { */

/*     for (int i = 0; i < arr.length; i++) { */
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

    string temp = "hello";
    std::cout << "Just testing length of string: " << temp.length() << std::endl;

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
    std::cout << "size of string array: " << sizeof(t) / sizeof(std::string) << "\n\n\n\n";

    // std::cout << ("\n"*4); //can't do this lol

    int a[3] = {1, 2, 123123};

    std::cout << a << std::endl;
    std::cout << &a[0] << std::endl;
    std::cout << &a[1] << std::endl;
    std::cout << &a[2] << std::endl;
    /* printarr(t); */

    for (int i = 0; i < 3; i++) {
        /* std::cout << a[i] << " "; */
        std::cout << sizeof(i) << std::endl;
        /* std::cout << (a + i) << " "; */
    }
    std::cout << std::endl;
    for (int i = 0; i < 3; i++) {
        /* std::cout << a[i] << " "; */
        std::cout << *(a + i) << " ";
    }
    std::cout << std::endl;

}

