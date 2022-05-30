#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int result = 0;
    int x = 1;

    while (n > 0)
    {
        int y = n % 10;
        result += x * y;
        x *= 2;
        n /= 10;
    }
    return result;
}

int octalToDecimal(int n)
{
    int result = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        result += x * y;
        x *= 8;
        n /= 10;
    }
    return result;
}

int32_t main()
{
    int n;
    cin >> n;

    cout << binaryToDecimal(n) << endl;
    cout << octalToDecimal(n) << endl;
}
