#include <iostream>
using namespace std;

bool palindromeCheck(int s , int e, string&str)
{
    // Base Case
    if (s >= e)
    {
        return true;
    };

    if(str[s] != str[e]){
        return false;
    }
    
    palindromeCheck(s+1 ,e-1 ,str);
    return true;
   
}
 
int main()
{
    string str;
    cout << "Enter the value of n " << endl;
    
    cin >> str;

     bool abc =  palindromeCheck(0 , str.size() -1 , str);
    cout<< ( abc == 1  ? "String is palindrome" : "String is not palindrome") << endl;

    return 0;
 
}