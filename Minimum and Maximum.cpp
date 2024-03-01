#include <bits/stdc++.h>

using namespace std;

void solution()
{
    long long n;
    cin>>n;
    long long x = n/2;
    long long ans = x * (x + 1);
    if(n%2 == 1)
    {
        ans += (n / 2) + 1;
        
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    ll t = 1;
    while (t <= tt)
    {
        
        solution();
        t++;
    }
    return 0;
}
