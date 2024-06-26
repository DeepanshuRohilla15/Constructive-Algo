#include <bits/stdc++.h>

#define ls (u<<1)
#define rs (ls|1)
#define mid (L+R>>1)
#define PQ priority_queue<pii, vector<pii>, greater<pii> >
using namespace std;

typedef long long INT;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;

template<class T>inline void gn(T &x) {char c, sg=0; while (c=getchar(), (c>'9' || c<'0') && c!='-');for((c=='-'?sg=1, c=getchar():0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0';if (sg) x=-x;}
template<class T>inline void print(T x) {if (x<0) {putchar('-');return print(-x);}if (x<10) {putchar('0'+x);return;} print(x/10);putchar(x%10+'0');}
template<class T>inline void printsp(T x) {print(x); putchar(' ');}
template<class T>inline void println(T x) {print(x); putchar('\n');}
template<class T>inline void gn(T &x , T &y){gn(x); gn(y);}
template<class T>inline void print(T x , T y){printsp(x); println(y);}

const int NN = (1<<20) + (1<<4);
const int mod = 1e9 + 7;

int A[NN] , B[NN] , C[NN];
int n , m , k;
vector<int> adj[NN];

int tot = 0 , cnt = 0;

int power(int a, int b, int ans = 1){
	for(; b; b >>= 1, a = 1ll*a*a%mod) if(b&1) ans = 1ll*ans*a%mod;
	return ans;
}

void dfs(int u , int fa = 0){
	if(A[u] == 1){
		tot += adj[u].size() - 1;
	}
	for(auto v : adj[u]){
		if(v == fa) continue;
		if(A[v] == 1 && A[u] == 1) cnt += 1;
		dfs(v , u);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif
	
	C[0] = 1;
	
	for(int i = 1; i < NN; i ++){
		C[i] = 1ll * C[i - 1] * i % mod;
	}
	
	int t; cin >> t; while(t --)
	{
		scanf("%d%d", &n , &k);
		
		for(int i = 1; i <= k; i ++){
			int x; scanf("%d", &x);
			A[x] = 1;
		}
		
		for(int i = 1; i < n; i ++){
			int u , v; scanf("%d%d", &u , &v);
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		tot = 0 , cnt = 0;
		
		dfs(1);
		
		for(int i = 1; i <= k; i ++){
			
			int ans = tot , etc = 1 , tem = cnt , add = 1;
			
			ans = 1ll * ans * C[k - 1] % mod;
			ans = 1ll * ans * power(C[i - 1] , mod - 2) % mod;
			ans = 1ll * ans * power(C[k - i] , mod - 2) % mod;
			
			etc = 1ll * etc * C[k] * power(C[k - i] , mod - 2) % mod;
			etc = 1ll * etc * power(C[i] , mod - 2) % mod;
			
			ans = (1ll * ans + etc) % mod;
			
			if(i > 1){
				tem = 1ll * tem * C[k - 2] % mod * power(C[i - 2] , mod - 2) % mod;
				tem = 1ll * tem * power(C[k - i] , mod - 2) % mod;
				
				ans -= tem;
				if(ans < 0) ans += mod;
			}
			
			ans = 1ll * ans * power(etc , mod - 2) % mod;
			
			printf("%d ", ans);
		}
		puts("");
		for(int i = 1; i <= n; i ++) adj[i].clear() , A[i] = 0;
	}
	return 0;
}
