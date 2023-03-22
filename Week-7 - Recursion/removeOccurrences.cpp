#include <iostream>
using namespace std;

void removeOcc(string&str , string&part)
{
    
    int partFind = str.find(part);
   
   if(partFind != -1){
    string left_part = str.substr(0 , partFind);
    string right_part = str.substr(partFind + part.size() , str.size());

    str = left_part + right_part;
    removeOcc( str, part);

   }else{
    return;
   }
}
 
int main()
{
    string str;
    cout << "Enter the string" << endl;
    cin >> str;

    string part;
    cout << "Enter the remove part" << endl;
    cin >> part;

    removeOcc(str , part);
    cout<< str << endl;

    return 0;
 
}