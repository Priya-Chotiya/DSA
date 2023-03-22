#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int row = 0; row < n; row++)
    {
        
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << row+1;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}