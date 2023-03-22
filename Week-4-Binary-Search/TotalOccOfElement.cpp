#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// logic check first occ, then last occ then simply minus last - first then +1 becaus of index
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
            ans = mid;   // storing the index
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

int lastOcc(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
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
    vector<int> v{1, 2, 2, 4, 4, 4, 4, 4, 6};
    int target = 2;

    int fistOccIndex = firstOcc(v, target);
    int lastOccIndex = lastOcc(v, target);
    int ans = firstOcc(v, target);

    int ans1 = lastOcc(v, target);
    cout << "Total no of occ " << (lastOccIndex - fistOccIndex + 1) << endl;
}
