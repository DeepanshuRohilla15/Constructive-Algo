#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, k;
    cin>>s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' && s[i] != 'A' && s[i] != 'E' && s[i] != 'O' && s[i] != 'I' && s[i] != 'U' && s[i] != 'Y' )
        {
            k = k+'.';
            k = k+(char) tolower(s[i]);
        }
    } 
     cout<<k;
}
