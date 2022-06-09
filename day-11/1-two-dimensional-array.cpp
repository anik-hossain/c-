#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("./in-out/1-input.txt", "r", stdin);
    freopen("./in-out/1-output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    cout << "Matrix is: \n";
    cout << "-------------------------------- \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] > 9 ? cout << arr[i][j] << " " : cout << "0" << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Searching in a matrix
    cout << "Searching in a matrix:" << endl;
    cout << "-------------------------------- \n";
    int x;
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Element found in row:" << i + 1 << " and column: " << j + 1 << "\n";
                flag = true;
            }
        }
    }

    if (flag)
        cout << x << " Element is found" << endl;
    else
        cout << x << " Element is not found" << endl;

    return 0;
}
