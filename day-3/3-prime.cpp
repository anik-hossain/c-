#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int n1;
    bool flag = 0;
    cin >> n1;

    for (int i = 2; i <= sqrt(n1); i++)
    {
        if (n1 % i == 0)
        {
            cout << "Non prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime" << endl;
    }

    int n2;
    cin >> n2;
    int reverse = 0;
    while (n2 > 0)
    {
        int last_digit = n2 % 10;
        reverse = reverse * 10 + last_digit;
        n2 = n2 / 10;
    }
    cout << reverse << endl;

    int n3;
    cin >> n3;
    int sum = 0;
    int original_n = n3;

    while (n3 > 0)
    {
        int last_digit = n3 % 10;
        sum += pow(last_digit, 3);
        n3 = n3 / 10;
    }

    if (sum == original_n)
    {
        cout << "armstrong number" << endl;
    }
    else
    {
        cout << "not armstrong" << endl;
    }

    return 0;
}
