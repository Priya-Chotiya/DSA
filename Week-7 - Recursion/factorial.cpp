#include <iostream>
using namespace std;

int findFactorial(int n)
{
    // Base Case
    if (n == 1)
    {
        return 1;
    };

    int ans = n * findFactorial(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int ans = findFactorial(n);
    cout << "Factorial of " << n << " is " << ans << endl;

    return 0;
}