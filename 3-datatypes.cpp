#include <iostream>
using namespace std;

int main()
{
    // declaration
    int a;
    float b;
    char c;
    bool d;

    short int si;
    long int li;

    // intialisation
    a = 50;

    // Print
    cout << "size of int (" << sizeof(a) << "bytes)" << endl;
    cout << "size of float (" << sizeof(b) << "bytes)" << endl;
    cout << "size of char (" << sizeof(c) << "bytes)" << endl;
    cout << "size of bool (" << sizeof(d) << "bytes)" << endl;
    cout << "size of shortint (" << sizeof(si) << "bytes)" << endl;
    cout << "size of longint (" << sizeof(li) << "bytes)" << endl;
    return 0;
}