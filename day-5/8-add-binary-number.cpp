#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int res = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n /= 10;
    }
    return res;
}

int addBinary(int a, int b)
{
    int result = 0;
    int prevCarry = 0;

    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            result = result * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
        {
            if (prevCarry == 1)
            {
                result = result * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                result = result * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            result = result * 10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a > 0)
    {
        if (prevCarry == 1)
        {
            if (a % 2 == 1)
            {
                result = result * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                result = result * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            result = result * 10 + (a % 2);
        }
        a /= 10;
    }
    while (b > 0)
    {
        if (prevCarry == 1)
        {
            if (b % 2 == 1)
            {
                result = result * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                result = result * 10 + 1;
                prevCarry = 0;
            }
        }
        else
            result = result * 10 + (b % 2);
        b /= 10;
    }
    if (prevCarry == 1)
    {
        result = result * 10 + 1;
    }
    result = reverse(result);
    return result;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << addBinary(a, b) << endl;

    return 0;
}
