#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

void solve(){
    int n,k;
    cin>>n>>k;
    int mn = n*(n-1)/2;
    int mx = (n-1)*(n-1);
    if (k<mn || k>mx){
        cout<<-1<<endl;
        return;
    }
    vector<int> a;
    for (int i = 0; i <n; i++) {
        a.push_back(i);
    }
    for (int i = n - 1; i >= 0; i--) {
        int x = min(n-1-a[i],k-mn);
        a[i]+=x;
        mn +=x;
    }
    vector<bool> mark(n+1,false);
    vector<int> ans ={1};
    mark[1] = true;
    for (int i = 1; i < n; i++) {
        int x = 1+a[i];
        ans.push_back(x);
        mark[x] = true;
        if (mark[n]) break;
    }
    for (int i = 1; i <= n; i++) {
        if (!mark[i]) ans.push_back(i);
    }
    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
