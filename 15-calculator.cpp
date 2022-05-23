#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    int result = 0;

    cout << "Enter two number: ";
    cin >> a >> b;
    cout << "Input an operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;

    default:
        cout << "Enter another operator" << endl;
        break;
    }
    cout << result;
    return 0;
}
