#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, n;
        cin>>x>>y>>n;
        
        int rem = n % x;
        if(rem - y >= 0)
        {
            n = n - rem + y;
        }
        else
        {
            n = n - rem - x + y;
        }
        cout<<n<<"\n";
    }
}
