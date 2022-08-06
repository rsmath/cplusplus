#include<iostream>

using std::string;

/*
 * functions need to be declared before main function, they can be optionaly defined later
 *
*/

void print(string str) {
    std::cout << "I am printing this string: " << str << '\n';
}

void another(int a=5, string s="default declaration");

double add(int a, double b) {
    return a + b;
}

void swap(int &a, int &b) {
    // taking in the reference (address) of the parameters
    int temp;
    temp = b;
    b = a;
    a = temp;
}

void printarr(int arr[4]) {
    for (int i = 0; i < 4; i++) {
        std::cout << arr[i] << " ";
    }
}

int add(double a, double b) {
    return a + b;
}

int main() {

    // functions

    string name = "ramansh";

    print(name);
    another(4, "ramansh sharma");
    another(4);
    another();
    double val = add(5, 3.3);
    std::cout << val << '\n';
    std::cout << add(5.6, 5.9) << '\n';

    int a = 10, b = 20;

    std::cout << "\nbefore function: a = " << a << " b = " << b << '\n';
    swap(a, b);
    std::cout << "after function: a = " << a << " b = " << b << '\n';

    int arr[] = {1, 2, 3, 4};
    printarr(arr);
}

// default arguments must be defined at declaration time
void another(int a, string s) {
    for (int i = 0; i < a; i++) {
        std::cout << s << "\n";
    }
    std::cout << "\n===\n";
}

// results in print not being found if it's only here
/* void print(string str) { */
/*     std::cout << "I am printing this string: " << str << '\n'; */
/* } */
