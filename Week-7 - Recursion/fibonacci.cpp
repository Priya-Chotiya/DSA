#include <iostream>
using namespace std;

int findFibonacci(int n)
{
    // Base Case
    if (n == 1)
    {
        return 0;
    };

    if( n == 2){
        return 1;
    }

     int ans = findFibonacci(n - 1) + findFibonacci(n-2);
     return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int ans = findFibonacci(n);
    cout << "Factorial of " << n << " is " << ans << endl;

    return 0;
}

// Same question and same solution for find a way to climb stair