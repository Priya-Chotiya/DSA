#include <iostream>
using namespace std;

void reverseString(int s , int e, string&str)
{
    // Base Case
    if (s >= e)
    {
        return;
    };

    swap(str[s] , str[e]);
    // s++;
    // e--;

    reverseString(s+1 ,e-1 ,str);
}
 
int main()
{
    string str;
    cout << "Enter the value of n " << endl;
    
    cin >> str;

    reverseString(0 , str.size() -1 , str);
    cout<< "Last occurrence of " << str << endl;

    return 0;
 
}