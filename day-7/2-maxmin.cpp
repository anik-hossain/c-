#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    int maxNum = INT_MIN;
    int minNum = INT_MAX;

    cin >> n;
    int numArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numArr[i];
    }

    for (int i = 0; i < n; i++)
    {
        maxNum = max(maxNum, numArr[i]);
        minNum = min(minNum, numArr[i]);
    }
    cout << "max number: " << maxNum << " min number: " << minNum << endl;
    return 0;
}
