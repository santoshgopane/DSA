#include <iostream>
using namespace std;
int main()
{
    int a, b, ans;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    char operation;
    cout << "Enter your choice: ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;
    case '%':
        ans = a % b;
        break;

    default:
        cout << "Invalid operation requested!";
        break;
    }
    cout << "Answer: " << ans;
}