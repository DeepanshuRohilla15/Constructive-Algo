#include <bits/stdc++.h>

using namespace std;

void solution()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    int sum = a[0] + a[1];
    for(int i = 2; i < n; i++)
    {
        sum += (a[i]*2);
    }
    cout<<sum<<"\n";
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
