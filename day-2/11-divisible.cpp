#include <iostream>
using namespace std;

int main()
{
    int pocketMoney = 3000;
    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
            continue;
        cout << i << endl;
    }
    return 0;
}
