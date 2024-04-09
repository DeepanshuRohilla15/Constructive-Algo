#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, l ,r;
    cin>>t;
    while(t--)
    {
        cin >> l >>r;
        int x = l;
        int y = 2*l;
        if(y <= r) cout<<x<<" "<<y<<"\n";
        else cout<<-1<<" "<<-1<<"\n";
    }
}
