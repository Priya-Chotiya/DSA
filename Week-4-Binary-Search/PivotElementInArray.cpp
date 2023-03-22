// What is pivot element = which mean from order get breaks like 3/4/5/6/7/1/3 => pivot is 7
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findPivotElement(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        cout << "mid. " << arr[mid] << endl;
        if (arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        };

        if (arr[mid - 1] > arr[mid])
        {
            return arr[mid - 1];
        };

        if (arr[s] < arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> v{1,7,3,6,5,6};

    int ans = findPivotElement(v);
    cout << "Pivot element is. " << ans << endl;
}