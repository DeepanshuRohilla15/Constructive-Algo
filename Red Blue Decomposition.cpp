#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define rng(i,c,n) for(int i=c;i<n;i++)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) ((int) a.size())
#define vec(...) vector<__VA_ARGS__>
#define _49vEjP0 ios::sync_with_stdio(0),cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
void print(){cout<<'\n';}
template<class h,class...t>
void print(const h&v,const t&...u){cout<<v<<' ',print(u...);}

void slv(){
	int n;
	cin>>n;

	vec(vi) adj(n);
	rep(i,n-1){
		int u,v;
		cin>>u>>v;
		u-=1,v-=1;
		adj[u].pb(v),adj[v].pb(u);
	}

	vi par(n),chs(n);
	auto dfs=[&](auto self,int v)->void{
		chs[v]=1;
		for(auto u:adj[v]){
			if(u==par[v]) continue;
			par[u]=v;
			self(self,u);
			chs[v]+=chs[u];
		}
	};
	dfs(dfs,0);

	vi qs(n),fs(n);
	auto rfs=[&](auto self,int v)->void{
		vi evs;
		for(auto u:adj[v]){
			if(u==par[v]) continue;
			self(self,u);
			if(chs[u]%2){
				evs.pb(u);
			}
		}
		for(int i=1;i<sz(evs);i+=2){
			fs[evs[i]]=1;
		}
		if(sz(evs)%2){
			qs[v]=1;
		}else{
			qs[v]=0;
		}
	};
	rfs(rfs,0);

	vi pns(n);
	auto rfs1=[&](auto self,int v,int t)->void{
		t^=fs[v];
		pns[v]=qs[v]^t;
		for(auto u:adj[v]){
			if(u==par[v]) continue;
			self(self,u,t);
		}
	};
	rfs1(rfs1,0,0);

	rep(i,n){
		cout<<(pns[i]?"B":"R");
	}
	print();
}

signed main(){
_49vEjP0;
	int __t;
	cin>>__t;
	rep(cs,__t){
		slv();
	}	
}
