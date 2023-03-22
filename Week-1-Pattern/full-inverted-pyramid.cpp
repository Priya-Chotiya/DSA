#include <iostream>
using namespace std;

int main()
{
    int n = 6;
 for(int row=0; row<n; row=row+1)
    {
       for (int col=0; col<row+n; col=col+1)
       {
         cout<<"  ";

            }
        for( int col=0; col<n-row; col=col+1){
            cout<<" *  ";
        }
        cout<<endl;
    }
    cout << endl;
    return 0;
}