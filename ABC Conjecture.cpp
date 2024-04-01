#include <bits/stdc++.h>
using namespace std;
#define int long long

inline bool solve(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int> a,b,c;
    bool fl=true;
    for(int i=0;i<n;i++){
        if(s[i]=='b' && t[i]=='b') b.push_back(i);
        else if(s[i]=='a' && t[i]=='c') a.push_back(i);
        else if(s[i]=='c' && t[i]=='a') c.push_back(i);
        else if(s[i]==t[i]) continue;
        else return false;
    }
    if(a.size()!=c.size()) return false;
    for(int i=0;i<a.size();i++){
        auto lb=upper_bound(b.begin(),b.end(),a[i]);
        if(lb==b.end()) return false;
        if((*lb)>c[i]) return false;
    }
    return true;
}

signed main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while(t--){
        if(solve()) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
