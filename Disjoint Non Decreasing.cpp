#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M = 998244353;
ll add(ll x, ll y)  { return (x%M + y%M)%M; }
ll sub(ll x, ll y)  { return (x%M - y%M + M)%M;}
ll mul(ll x, ll y)  { return (x%M * y%M)%M; }
ll binexp(ll a,ll b){
ll res = 1;
while(b){
if(b&1)res = ((res%M)*(a%M)%M);
a = ((a%M)*(a%M)%M);
 b>>=1LL;
}
return res%M;
}
void Radhe(){
 ll t;
 cin>>t;
 while(t--){
     ll n;
     cin>>n;
     vector<ll>v1(n);
     for(int i=0;i<n;i++)cin>>v1[i];
     ll added = 0;
     vector<bool>isAdd(n,false);
     for(int i=1;i<n;){
        if(v1[i]<v1[i-1]){
            added = max(added,v1[i-1]-v1[i]);
            isAdd[i] = true;
            i+=2;
        }
        else i++;
     }
    //  for(auto x:isAdd)cout<<x<<" ";
    //  cout<<endl;
     for(int i=0;i<n;i++){
        if(isAdd[i])v1[i]+=added;
     }
     bool is = true;
     for(int i=0;i<n-1;i++){
        if(v1[i]>v1[i+1])is = false;
     }
     is?cout<<"Yes":cout<<"No";
     cout<<endl;

 }
}
int main(){
Radhe();
return 0;
}
