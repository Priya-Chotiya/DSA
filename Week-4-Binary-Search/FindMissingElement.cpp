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
         if (mid + 1 == arr[mid])
        {
            s = mid + 1;
 
        }
        else
        {
            ans = mid + 1;
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1,3, 4, 5, 6, 7, 8, 9};

    int ans = firstOcc(v);
    cout << "ans is. " << ans << endl;
}