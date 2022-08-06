#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;


int main() {

    string first = "playing with ";
    std::cout << first.append("strings") << '\n';

    std::cout << "\nconcatenation\n";

    string n = "concat ";
    string f = first + n;
    std::cout << '\n' << f;

    std::cout << "length is " << n.length() << '\n';

    std::cout << "\nTesting string indexing\n";

    std::cout << n[0] << endl;
    std::cout << n[2] << endl;

    std::cout << n << endl;
    n[4] = 'g';
    std::cout << n << endl;

    /* input from user in string */
    
    string user = "";

    std::cout << "gimme it: ";
    std::cin >> user;

    std::cout << "you actually gave me: " << user;
    // but this will contain only one word because of how cin works

    std::cout << "\n\nlets try again gimme it: ";

    cin.ignore(); // needs to be called so that the trailing character '\n' from previous input does not make getline discard the input we want below
    getline(cin, user);

    std::cout << "this time you actually gave me: " << user << endl;

}
