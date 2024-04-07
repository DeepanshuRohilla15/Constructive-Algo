#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll x;
    cin>>x;
    // cout<<log2(x)<<endl;
    ll ans1=pow(2,(ll)log2(x)+1)*x;
    ll ans2=ans1+x;
    cout<<ans1<<" "<<ans2<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)solve();
	// your code goes here
	return 0;
}
