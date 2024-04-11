#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        
        if(x > y) swap(x, y);
        if(x > z) swap(x, z);
        if(y > z) swap(y, z);
        
        if(y != z) cout<<"NO\n";
        else cout<<"YES\n"<<x<<" "<<x<<" "<<z<<"\n";
    }
}
