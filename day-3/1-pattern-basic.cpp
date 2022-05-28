#include <iostream>
using namespace std;

int main()
{
    cout << "--------------------------------------------" << endl;
    cout << "***** Patter-1 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int row1, col1;
    cout << "Enter the number of row: ";
    cin >> row1;
    cout << "Enter the number of column: ";
    cin >> col1;

    for (int i = 1; i <= row1; i++)
    {
        for (int j = 1; j <= col1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Pattern-2 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int row2, col2;
    cout << "Enter the number of row: ";
    cin >> row2;
    cout << "Enter the number of col: ";
    cin >> col2;

    for (int i = 1; i <= row2; i++)
    {
        for (int j = 1; j <= row2; j++)
        {
            if (i == 1 || i == row2 || j == 1 || j == col2)
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
    cout << "--------------------------------------------" << endl;
    cout << "***** Pattern-3 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n1;
    cout << "Enter a number: ";
    cin >> n1;
    for (int i = n1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Pattern-4 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n2;
    cout << "Enter a number: ";
    cin >> n2;
    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (j <= n2 - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Pattern-5 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n3;
    cout << "Enter a number: ";
    cin >> n3;
    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Pattern-6 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n4;
    cout << "Enter a number: ";
    cin >> n4;
    int count1 = 1;
    for (int i = 1; i <= n4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count1 << " ";
            count1++;
        }
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "***** Pattern-7 *****" << endl;
    cout << "--------------------------------------------" << endl;
    int n5;
    cout << "Enter a number: ";
    cin >> n5;
    for (int i = 1; i <= n5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n5 - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n5 - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
