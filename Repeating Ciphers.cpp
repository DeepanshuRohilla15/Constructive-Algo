#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    return (n*(n+1))/2;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    vector<char> ans;
    int place = 0;
    for(int i = 1; place < n; i++)
    {
        place = place + i;
        ans.push_back(s[place-1]);
    }
    
    for(int i = 0; i < ans.size(); i++) cout<<ans[i];

}
