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
    // write code
    int n;
    cin>>n;
    int a[2*n];
    for(int i = 0; i < 2*n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n*2);
    cout<<abs(a[n-1]- a[n])<<"\n";
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
