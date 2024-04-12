#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, n;
        cin>>n>>m;
        int res = n*(m/2);
        if(m%2) res += ceil(1.0*n/2);
        cout<<res<<"\n";
    }
}
