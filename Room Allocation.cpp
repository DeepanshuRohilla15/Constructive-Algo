#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <algorithm>
#include <sstream>
#include <stack>
#include <iomanip>
#include <climits>
#include <assert.h>
#include <chrono>

#define ll long long
#define ull unsigned long long
#define ld long double
#define vii vector<ll>
#define pii pair<ll, ll>
#define vvi vector<vii>
#define vpi vector<pair<ll, ll>>
#define mll map<ll, ll>
#define pql priority_queue<ll, vii>
#define pqg priority_queue<ll, vii, greater<ll>>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) x.size();
#define yn(flag) cout << (flag ? "YES" : "NO");

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

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= 2) ans += 1;
        else{
            ans += a[i]/2 + a[i]%2;
        }
    }
    cout<<ans<<"\n";
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
