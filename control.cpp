#include<iostream>
#include<math.h>


int main() {

    int a = 4, t = 5;

    if (a < t && 0) { // you can use true or 1, or, 0 or false, interchangeably
        std::cout << "a is less than t";
    }
    else if (a % 2 == 0) {
        std::cout << "a is even, wow";
    }
    else {
        std::cout << "nope it isn't";
    }

    // shorthand if else
    int h = 10;
    std::string res = (h % 2 == 0) ? "ok, even": "ok, not even, its odd";
    std::cout << res;

}
