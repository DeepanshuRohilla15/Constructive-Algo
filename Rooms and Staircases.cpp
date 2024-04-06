#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int l = -1, r = -1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                l = i+1;
                break;
            }
        }
        
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                r = i+1;
                break;
            }
        }
        int ans = 1;
        
        if(l != -1)
        {
            int k = 2*(r - l + 1);
            k += 2*max(l-1, n-r);
            ans = max(ans, k);
        }
        cout<<ans<<"\n";
    }
}
