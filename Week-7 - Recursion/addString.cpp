#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void addString(string &num1, int p1, string &num2, int p2, string &ans, int carry)
{
    // base case
    if(p1 < 0 && p2 < 0){
        if(carry != 0){
            ans.push_back(carry + '0');
        }

        return;
    }

    // one solution
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? num1[p2] : '0') - '0';
    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    ans.push_back(digit + '0');

    //RE
    addString( num1, p1 -1,  num2, p2 - 1,  ans,  carry);
}

int main()
{
    string num1 = "123";
    string num2 = "10";

    string ans = "";
    int carry = 0;
    addString(num1, num1.size() - 1, num2, num2.size() - 1, ans, carry);

    // string abc = reverse(ans.begin() , ans.end());
    cout << ans << endl;
    return 0;
}