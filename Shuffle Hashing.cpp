#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string p, h, n;
        cin>>p>>h;
        sort(p.begin(), p.end());
        int n1 = p.length(), n2 = h.length();
        
        bool flag = false;
        
        for(int i = 0; i <= n2 - n1; i++)
        {
            n = h.substr(i, n1);
            sort(n.begin(), n.end());
            if(n == p)
            {
                flag = 1;
                break;
            }
        }
        
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
