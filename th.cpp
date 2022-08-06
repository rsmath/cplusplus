#include<iostream>
using namespace std;

int main(){
    char a = 's';
    string p = "adfasdf";
    char b = 'b';
    int v = 123123123;
    float g = 12.2222222;
    double t = 12.2222222222222222222222222222222222;

    cout << a << endl;
    cout << b << endl;
    cout << v << endl;
    cout << g << endl;
    cout << t << endl;
    cout << p << endl;

    int &l = v;
    cout << l << endl;

    g = 4E10;
    cout << g << endl;

    g = 3.4;
    cout << g << endl;


    string m = "adfadsfadfj";
    cout << m << endl;
}
