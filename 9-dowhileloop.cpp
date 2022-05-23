#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive number to continue: ";
    cin >> n;
    int i = 0;
    do
    {
        i++;
        cout << "Hello World - " << i << endl;
    } while (n > 0);

    return 0;
}
