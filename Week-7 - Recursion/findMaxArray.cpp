#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

void findMaxEleInArray(vector<int> arr , int i , int n , int& max)
{
     if(i >= n){
        return;
     };

     if(arr[i] > max){
        max = arr[i];
     };
    
    findMaxEleInArray(arr , i+1 , n , max);

}

int main()
{
    vector<int> v{10,30,15,21,44,26,17};
    int i = 0;
    int n = v.size();
    int max = INT_MIN;
     findMaxEleInArray(v , i , n, max);
    cout << "Max valus is " << max << endl;

    return 0;
}

// Same question and same solution for find a way to climb stair