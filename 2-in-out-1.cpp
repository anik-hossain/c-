#include <iostream>
using namespace std;

int main()
{
#ifndef TEST
    freopen("./in-out/input.txt", "r", stdin);
    freopen("./in-out/output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";
    return 0;
}