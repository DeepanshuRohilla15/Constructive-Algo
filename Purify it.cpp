#include<bits/stdc++.h>
#define INT long long
#define pii pair<int, int>
#define x first
#define y second
#define inf INT_MAX
#define INF LONG_LONG_MAX
#define VI vector<int>
#define ls (u << 1)
#define rs (ls | 1)
#define mid (L + R >> 1)
using namespace std;
const int NN = 3e5 + 100;
int a[NN], b[NN], chk[NN], n, m, k;
vector<pii> lst[NN];
VI vec[NN];
INT sum0 = 0;
int gcd(int a, int b){
	while(b){
	sum0 ++;
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int calc_lcm(int u, int v){
//	sum0 ++;
	return 1ll * u * v / gcd(u, v);
}
struct SUB_LCM{
	VI pre, lcm[9];
	int sz;
	void init(int cnt){
		sz = cnt;
		pre.resize(cnt + 10, 0);
		for(int i = 0; i <= 8; i++) lcm[i].resize(cnt + 10, 0);
	}
	void build(){
		for(int i = 0; i < sz; i++) lcm[0][i] = pre[i];
		for(int i = 1; i <= 8; i++){
			for(int j = 1; j < sz; j++){
				lcm[i][j] = calc_lcm(lcm[i - 1][j], lcm[i - 1][min(sz - 1, j + (1 << (i - 1)))]);
			}
		}
	}
	int calc(int a, int b){
		int l = (b - a + 1);
		l = 31 - __builtin_clz(l);
		return calc_lcm(lcm[l][a], lcm[l][b-(1<<l)+1]);
	}
}slcm[NN];
int st[NN], pos[NN], ssz[NN];
INT ans[NN], c[NN];
void add(int u, int v){
	for(; u < NN; u += u & -u) c[u] += v;
}
INT calc(int u){
	INT ans = 0;
	for(; u ; u -= u & -u) ans += c[u];
	return ans;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif
	for(int i = 1; i < NN; i++){
		for(int j = i; j < NN; j += i) vec[j].push_back(i);
	}
	for(int i = 1; i < NN; i ++){
//		slcm[i].init(vec[i].size());
//		slcm[i].pre = vec[i];
		ssz[i] = vec[i].size();
//		slcm[i].build();
	}
	for(int i = 1; i < NN; i ++){
		int tmp = 1;
		for(int j = 0; j < ssz[i]; j++){
			tmp = calc_lcm(tmp, vec[i][j]);
			if(tmp == i){
				add(i, vec[i][j]);
				pos[i] = j;
				break;
			}
		}
	}
	cin >> n;
	int mx1 = 0, mx2 = 0;
	for(int i = 1; i <= n; i++){
		int l, r;
		scanf("%d%d", &l, &r);
		lst[l].push_back({r, i});
		mx1 = max(mx1, l);
		mx2 = max(mx2, r);
	}
	for(int i = 1; i <= mx1; i++){
		INT dec = calc(i - 1);
		for(pii v : lst[i]){
			ans[v.y] = calc(v.x) - dec;
		}
		for(int j = 2 * i; j <= mx2; j += i){
			st[j] ++;
			INT val = vec[j][pos[j]];
			pos[j] = st[j] - 1;
			INT tmp = 1;
			while(tmp != j){
				pos[j] ++;
				tmp = calc_lcm(tmp, vec[j][pos[j]]);
			}
			add(j, vec[j][pos[j]] - val);
		}
	}
	for(int i = 1; i <= n; i++){
		printf("%lld\n", ans[i]);
	}
}


