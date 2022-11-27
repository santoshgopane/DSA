#include <bits/stdc++.h>
using namespace std;
bool checkSortedAndRotated(vector<int> &nums)
{
    int i = 1, n = nums.size() - 1;
    int count = 0;
    for (; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            count++;
        }
    }
    if (nums[n - 1] > nums[0])
        count++;
    cout << "Count: " << count;
    return count <= 1;
}

int main()
{
    vector<int> v;
    // v.push_back(4);
    // v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // v.push_back(5);
    cout << "Answer: " << checkSortedAndRotated(v);
}