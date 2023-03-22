#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOcc(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
         cout << "mid " << mid << endl;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            ans = mid;
            return ans;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
     cout << "ans is. " << ans << endl;
    return ans;
}

int main()
{
    vector<int> v{0, 10, 5,1, 2};

    int ans = firstOcc(v);
    cout << "ans is. " << ans << endl;
}