#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[99] = {1, 2, 3, 4, 5};

    cout << "Getting Address 1: " << arr << " | " << &arr[0] << endl;
    cout << "Getting Value: " << *arr << " | " << *&arr[0] << endl;
    cout << "Getting Address 3: " << (arr + 1) << " | " << &arr[1] << endl;
    cout << "deferencing the array 1st index: " << &arr << endl;

    cout << "Checking: " << arr << " | " << &arr;
    /*
    Something new:

    arr[i] = *(arr+i)

    ALSO

    i[arr] = *(i+arr)
    */

    return 0;
}