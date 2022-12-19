#include <bits/stdc++.h>
using namespace std;

void testFunction(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << endl;
    return;
}

int main()
{
    int size;
    // int arr[99];
    int digit = 2001;

    // cout << digit % 10 << endl;
    // digit = digit / 10;
    // cout << digit % 10 << endl;
    // cout << digit % 10 << endl;
    // digit = digit / 10;

    // cout << digit;
    int digiLen = 0;
    while (digit > 0)
    {
        cout << digit % 10 << endl;
        digit = digit / 10;
        digiLen++;
    }
    cout << "DigiLen:" << digiLen;
    // cout << "Enter size of the array:";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    //     cin >> arr[i];

    // testFunction(arr, size);
    // char testString[9] = {'S', 't', '\0', 's'};
    // string s = {'a', 'b', '\0', 'b'};
    // cout << testString << "|" << s;
    return 0;
}