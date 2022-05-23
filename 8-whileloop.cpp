#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number to check is it odd or even ";
    cin >> n;

    while (n % 2 == 0)
    {
        cout << n << " is a even number" << endl;
        cin >> n;
    }
    return 0;
}
