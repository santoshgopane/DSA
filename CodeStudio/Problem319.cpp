// Find Unique
#include <iostream>
using namespace std;
// 1, 2 ,3, 1, 3
// Do XOR: 0 0 - 0 || 1 1 - 0 ||  Else - 1
int main()
{
    int ans = 0, size = 5;
    int arr[99] = {1, 2, 3, 1, 3};
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    cout << ans;
}