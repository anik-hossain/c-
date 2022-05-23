#include <iostream>
using namespace std;

int main()
{
    int savings;
    cout << "Enter the amount of money that you have: ";
    cin >> savings;

    if (savings > 5000)
    {
        cout << "Lots of Money :)\n";
    }
    else if (savings > 2000)
    {
        cout << "Enough Money";
    }
    else
    {
        cout << "Not Enough :(";
    }

    return 0;
}
