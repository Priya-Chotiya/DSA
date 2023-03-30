#include <iostream>
using namespace std;

void findAllPermutation(string &str, int i)
{
    // Base case
    if (i >= str.size())
    {
        cout << str << endl;
        return;
    }

    // for loop for each charcter
    // j = i beacuse we do not ne go back
    for (int j = i; j < str.size(); j++)
    {
        // swap
        swap(str[i], str[j]);
        // cout << j << endl;
        // cout << str << endl;

        // recursion
        findAllPermutation(str, i + 1);

        // backtracking - after go up forms str into original state
        swap(str[i], str[j]);
    }
}

int main()
{
    string n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    string str = n;

    int index = 0;
    findAllPermutation(str, index);

    return 0;
}