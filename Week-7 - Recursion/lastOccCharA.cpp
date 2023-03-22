    #include <iostream>
    #include <vector>
    using namespace std;

    void findLastOccOfCharLtoR(string&s , char x , int i , int&ans)
    {
        // base case
        if(i >= s.size()){
            return;
        };

        // One Solution
        if(s[i] == x){
            ans = i;
        };
        
        findLastOccOfCharLtoR(s ,x , i+1 ,ans);

    }

    void findLastOccOfCharRtoL(string&s , char x , int i , int&ans)
    {
        // base case
        if(i < 0){
            return;
        };

        // One Solution
        if(s[i] == x){
            ans = i;
            return;
        };
        
        findLastOccOfCharRtoL(s ,x , i - 1 ,ans);

    }

    int main()
    {
        string s;
        cout << "Enter the value of string " << endl;
        cin>>s;
        char x;
        cout << "Enter the value of chard " << endl;
        cin>>x;
        int ans = -1;
        int i = 0;
        // findLastOccOfCharLtoR(s ,x ,i,ans);
        findLastOccOfCharRtoL(s ,x ,s.size() - 1,ans);
        cout<< "Last occurrence of" << x << " is " << ans << endl;

        return 0;
    }
