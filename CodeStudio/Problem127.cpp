// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
#include <iostream>
#include <climits>
using namespace std;
// needs to be implemented with Vectors(STL)
int main()
{
    int n = 6, m = 4;
    int i = 0, j = 0;
    vector<int> ans;
    int arr1[99] = {1, 2, 2, 2, 3, 4};
    int arr2[99] = {2, 2, 3, 3};
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++, j++;
        }
        else
        {
            j++;
        }
    }
    // cout << ans; // AFTER STL
}