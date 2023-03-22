#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOcc(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (target == arr[mid])
        {
            ans = mid; // storing the index
            e = mid - 1; // for check in left side
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 2, 4, 4, 4, 4, 4, 6};
    int target = 6;

    int ans = firstOcc(v, target);
    cout << "ans is. " << ans << endl;
}