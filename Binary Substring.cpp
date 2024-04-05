#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define ll long long
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
#define SZ(x) ((int)x.size())
#define LEN(x) ((int)x.length())
#define ALL(x) begin(x), end(x)
#define RSZ resize
#define ASS assign
#define REV(x) reverse(x.begin(), x.end());
#define trav(a, x) for (auto &a : x)
typedef pair<LL, LL> PL;
typedef vector<LL> VL;
typedef vector<PL> VPL;
typedef vector<VL> VVL;
typedef vector<VVL> VVVL;
typedef vector<VVVL> VVVVL;
typedef vector<string> VS;
typedef pair<int, int> PI;
typedef vector<int> VI;
typedef vector<PI> VPI;
typedef vector<vector<int>> VVI;
typedef vector<vector<PI>> VVPI;
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FOR1(i, n) for (int i = 1; i <= n; i++)
#define SORT(x) sort(x.begin(), x.end())
#define RSORT(x) sort(x.rbegin(), x.rend())
#define SUM(x) accumulate(x.begin(), x.end(), 0LL)

void solve()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        unordered_map<string, ll> m;

        string s;
        cin>>s;

        for(int i = 0 ; i < n ; i = i + 2) {
            string t;
            t.push_back(s[i]);
            t.push_back(s[i + 1]);
            m[t]++;
        }

        ll ans = 0;

        for(auto it : m) {

            string t = it.first;
            if(t == "00" || t == "11")
            {
                ans = ans + it.second * 2; 
            }
        }

        if(m.find("01")!=m.end()) 
        ans = ans+2;
        if(m.find("10")!=m.end()) 
        {
            if(m["10"] > 1)
            ans = ans + 2;
            else ans = ans + 1;
        }

        cout<<ans<<endl;

        }

    }


int main()
{
    solve();
    return 0;
}
