#include <iostream>
using namespace std;
int main()
{
    int arr[99] = {10, 5, 5, 5, 2}; //-26 32 4 17 -16 18 1 8 6 8 3 -13 || 10
    int K = 12;
    // cout << "Some";
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                // cout << i << j << k << endl;
                if (arr[i] + arr[j] + arr[k] == K) // there will be one more condition.
                {
                    // int t1, t2, t3;
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    // break;
                }
            }
        }
    }
}