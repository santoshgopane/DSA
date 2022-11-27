class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        // 1, 1, 1, 2, 2, 2, 3

        // 0, 0, 0, 1,
        sort(arr.begin(), arr.end());
        int arr1[99] = {0}; //
        int count = 1;
        for (int i = 0; i < arr.size(); i++)
        {

            if (arr[i] == arr[i + 1])
            {
                count++;
                // new arry may contain the count
            }
            else if (arr[i] != arr[i + 1])
            {
                if (arr1[count] != 0)
                {
                    return false;
                }
                else
                {
                    arr1[count] = arr[i];
                    count = 1;
                }
            }
            // else if(arr1[count]!=0){
            //     return false;
            // }
            // else{
            //     arr1[count]=arr[i-1];
            //     count=1;
            // }
        }
        return false;
    }
};