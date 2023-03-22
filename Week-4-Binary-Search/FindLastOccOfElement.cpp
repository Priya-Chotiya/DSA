#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findLastOcc(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start < end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1; //  check in right
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    vector<int> arr1{1, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 6};
    int target = 3;

    int ans = findLastOcc(arr1, target);
    cout << "ans is. " << ans << endl;
    return 0;
}