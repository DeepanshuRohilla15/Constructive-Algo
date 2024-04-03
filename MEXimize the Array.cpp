#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
ll mx = INT64_MAX;
ll mn = INT64_MIN;

void solved()
{
    ll n, res = 0;
    cin>>n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] != i)
        {
            res += abs(v[i] - i);
        }
    }
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    int n;
    cin >> n;
    while (n--)
        solved();
}
