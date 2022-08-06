#include<iostream>
#include<math.h>
using namespace std;

int main(){

    cout << "asdfasdf" << endl;
    /* cout << "asdfasdf"; */
    /* cout << "asdfasdf"; */
    /* cout << "asdfasdf"; */

    bool b = true;
    cout << b << "\n";

    b = false;
    cout << b << "\n";

    int a, bb = 10, c = 45, d;

    a = bb + b + (c * 100);
    cout << a << '\n';

    cout << a + bb + pow(c, 2) << '\n';

    float x, y;
    x = y = 10.;
    /* cout << y; */

    const int h = 4;

    // h = 2; will result in error because h is defined as const
    

    const string g = "asdfasdfasdf";

    cout << g << '\n';

    cout << "Practicing user input now\n";

    int input;
    /* cout << "Gimme it: "; */
    /* cin >> input; */
    /* cout << "Your number is " << input << '\n'; */

    double rtrt = 4.5e4;
    cout << rtrt;

    cout << rtrt / a << endl;
    cout << 45 / 4 << endl;
    cout << 45.4 / 4 << endl;
    cout << 8 / 4 << endl;
    cout << 9 % 4 << endl;
    cout << "\n\naksdjf\n\n";
    cout << "checking " << (4 & 10) << endl;
    cout << "checking agian " << (1 | 10) << endl;
    cout << "Asdfasdkfj:w" << endl;

    cout << x << endl;
    cout << --x << endl;
    cout << x << endl;
    cout << ++x << endl;
    cout << "\n\ndifference\n";

    x = 10, y = 12;

    cout << (x == y) << endl;
    cout << (x < y) << endl;
    cout << (x > y) << endl;
    cout << (x <= y) << endl;
    cout << (x >= y) << endl;
    cout << "(x >= y && x != y) " << (x >= y && x != y) << endl;
    cout << "(x >= y || x != y) " << (x >= y || x != y) << endl;
}
