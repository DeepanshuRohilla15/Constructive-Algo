#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef unsigned long long ull;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<":"; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*---------------------------------------------------------------------------------------------------------------------------*/
map<ll,ll> mp;
void dfs(ll node , vector<ll> &depth , vector<ll> &vis, vector<ll> tree[]){
    vis[node] = 1;
    for(auto it : tree[node]){
        if(vis[it]  == -1){
            mp[it] = node;
            depth[it] = 1 + depth[node];
            dfs(it,depth,vis,tree);
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    // freopen("diamond.in", "r", stdin);
    // freopen("diamond.out", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        mp.clear();
        ll n;
        cin >> n;
        vector<ll> tree[n+1];
        for(ll i = 0 ; i < n-1 ; i++){
            ll a , b;
            cin >> a  >> b;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }
        vector<ll> depth1(n+1,0), depth2(n+1,0), vis(n+1,-1);
        dfs(1,depth1,vis,tree);
        mp.clear();
        ll maxi = 0 , idx1 = 1;
        for(ll i = 1; i <= n ; i++){
            if(depth1[i] > maxi){
                idx1 = i;
                maxi = depth1[i];
            }
            vis[i] = -1;
            depth1[i] =  0;
        }
        dfs(idx1,depth2,vis,tree);
        maxi = 0;
        ll idx2 = 0;
        for(ll i = 1 ; i <= n ;i++){
            if(depth2[i] > maxi){
                idx2 = i;
                maxi = depth2[i];
            }
        }
        
        vector<ll> vec;
        ll x = idx2;
        // cout << idx1 << " " << idx2 << "\n";
        debug(mp);
        vec.push_back(x);
        while(mp[x] != 0){
            vec.push_back(mp[x]);
            x = mp[x];
        }
        debug(vec);
        ll cnt_r = vec.size()/2  , cnt_b = (vec.size()+1)/2;
        string s = "";
        for(ll i = 0 ; i < n ;i++){
            s.push_back('.');
        }
        for(ll i = 0 ; i < vec.size();i++){
            if(i+1 <= cnt_r){
                s[vec[i]-1] = 'R';
            }
            else{
                s[vec[i]-1] = 'B';
            }
        }
        sort(all(vec));
        for(ll i = 0 ; i < n ;i++){
            if(!(binary_search(all(vec),i+1))){
                if(cnt_b<=cnt_r){
                    s[i] = 'B';
                    cnt_b++;
                }else{
                    s[i]='R';
                    cnt_r++;
                }
                // cout<<">";
            }
        }
        cout<<s<<"\n";
    }
}
