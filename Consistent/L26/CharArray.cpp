#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr1[99] = {1, 2};
    // int *p = &arr1[0]; // or "arr" only
    // cout << *p;

    char arr[] = "abc";
    cout << arr << endl;

    char *ptr = &arr[0]; // or "arr"
    cout << "*ptr: " << *ptr << endl;
    cout << "ptr: " << ptr << endl;

    char temp = 'z';
    char *test = &temp;
    cout << "test: " << test;
}