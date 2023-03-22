#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printReverseCounting(int n)
{
    // Base Case
     if(n == 0){ 
        return;
         };

     cout << "Element is. " << n % 10 << endl;

     n = n / 10;
     printReverseCounting(n);

}

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

   printReverseCounting(n);
    return 0;

}