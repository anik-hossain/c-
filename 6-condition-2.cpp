#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int oddOrEvent;

    cout << "Enter three number with space: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            oddOrEvent = a;
            cout << a << endl;
        }
        else
        {
            oddOrEvent = c;
            cout << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            oddOrEvent = b;
            cout << b << endl;
        }
        else
        {
            oddOrEvent = c;
            cout << c << endl;
        }
    }

    if (oddOrEvent % 2 == 0)
    {
        cout << "And the largest number is Even";
    }
    else
    {
        cout << "And the largest number is Odd";
    }

    return 0;
}
