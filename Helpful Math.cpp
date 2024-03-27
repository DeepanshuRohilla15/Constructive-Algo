#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int one = 0, two = 0, three = 0;
    for(char ch : s)
    {
        if(ch == '1') one++;
        else if(ch == '2') two++;
        else if(ch == '3') three++;
    }
    
    string res = "";
    for(int i = 0; i < one; ++i) res += "1+";
    for(int i = 0; i < two; ++i) res += "2+";
    for(int i = 0; i < three; ++i) res += "3+";
    
    for(int i=0; i < res.size()-1; i++)
    {
        cout<<res[i];
    }
}
