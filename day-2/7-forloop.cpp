#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int stop = 100;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "Summation of 0 to " << stop << " is " << sum << endl;

    return 0;
}
