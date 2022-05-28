#include <iostream>
using namespace std;

int main()
{
    cout << "--------------------------------------------" << endl;
    cout << "***** Patter-1 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n1;
    cout << "Enter the number: ";
    cin >> n1;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n1 + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Patter-2 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n2;
    cout << "Enter the number: ";
    cin >> n2;
    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << " 1";
            }
            else
            {
                cout << " 0";
            }
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Patter-3 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n3;
    cout << "Enter the number: ";
    cin >> n3;
    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= n3 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n3; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Patter-4 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n4;
    cout << "Enter the number: ";
    cin >> n4;
    for (int i = 1; i <= n4; i++)
    {
        for (int j = 1; j <= n4 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Patter-5 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n5;
    cout << "Enter the number: ";
    cin >> n5;
    for (int i = 1; i <= n5; i++)
    {
        int j;
        for (j = 1; j <= n5 - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= n5; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= n5 + i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Patter-6 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n6;
    cout << "Enter the number: ";
    cin >> n6;
    for (int i = 1; i <= n6; i++)
    {
        for (int j = 1; j <= n6 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n6; i >= 1; i--)
    {
        for (int j = 1; j <= n6 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Patter-7 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n7;
    cout << "Enter the number: ";
    cin >> n7;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n7; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
