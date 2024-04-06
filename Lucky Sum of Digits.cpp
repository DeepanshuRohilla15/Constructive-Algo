#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s = "";
    while(n > 0 && n%7 != 0)
    {
        n -= 4;
        s.push_back('4');
    }
    
    while(n > 0 && n%7 == 0)
    {
        n -= 7;
        s.push_back('7');
    }
    
    if(n == 0) cout<<s;
    else cout<<-1;
}
