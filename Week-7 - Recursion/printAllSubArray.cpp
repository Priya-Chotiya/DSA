#include <iostream>
#include <vector>
using namespace std;

void printSubArrUtil(vector<int>&nums , int start , int end) {
    //base case
    if(end == nums.size()){
        return;
    }

    for (int i = start; i <= end; i++)
    {
        cout << nums[i] << " ";
    }

    cout<<endl;
    printSubArrUtil(nums , start  , end + 1 );
    
}

void printSubArr(vector<int>&nums) {
    for (int start = 0; start < nums.size(); start++)
    {
        printSubArrUtil(nums , start, start);
    }
    
}

 
int main(){

    vector<int>nums{1,2,3,4,5};
    printSubArr(nums );
    return 0;
 
}