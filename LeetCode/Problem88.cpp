#include <bits/stdc++.h>

using namespace std;
void mergeArray(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    if (nums2.empty())
    {
        cout << "Nums2 is empty";
        return;
    }

    vector<int> master(nums1);
    nums1.clear();
    cout << "Size: " << nums1.size() << endl;
    int i = 0, j = 0;
    while (i < m + n)
    {
        if (i >= m)
        {
            for (; j < n; j++)
            {
                nums1.push_back(nums2[j]);
                master.pop_back();
            }
            break;
        }
        if (master[i] < nums2[j])
        {
            // something;
            nums1.push_back(master[i++]);
            // i++;
        }
        else // if (master[i] > nums2[j])
        {
            // if (master[i] == nums2[j])
            // {
            //     nums1.push_back(master[i]);
            //     i++;
            // }
            nums1.push_back(nums2[j++]);
            // j++;
        }
        // else
        // {
        //     nums1.push_back(nums2[j]);
        //     nums1.push_back(master[i]);
        //     i++, j++;
        // }
        cout << "i: " << i << endl;
    }
    cout << "Size: " << nums1.size() << endl;
    for (int i : nums1)
        cout << i << " ";
}

int main()
{
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);

    nums2.push_back(1);
    nums2.push_back(5);
    nums2.push_back(6);
    int m = 3, n = 3;
    mergeArray(nums1, nums2, m, n);
}