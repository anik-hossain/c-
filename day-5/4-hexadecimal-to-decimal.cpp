#include <bits/stdc++.h>
using namespace std;

int hexaDecimalToDecimal(string str)
{
    int result = 0;
    int x = 1;
    int s = str.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result += x * (str[i] - '0');
        }
        else if (str[i] >= 'A' && str[i] <= 'F')
        {
            result += x * (str[i] - 'A' + 10);
        }
        x *= 16;
    }
    return result;
}

int32_t main()
{
    string str;
    cin >> str;
    cout << hexaDecimalToDecimal(str) << endl;
}
