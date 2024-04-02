#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define all(p) p.begin(), p.end()
#define sort(p) sort(all(p))

vector<int> arr1, arr2;

bool possible(int val, int k)
{
    priority_queue<int> pq;
    int currIncl = 0, canDo = 0;
    for (int i = arr2.size() - 1; i >= 0; i--)
    {
        int x = arr2[i];
        if (x >= val)
        {
            currIncl++;
            while ((x % k == 0) && (x / k >= val))
                canDo++, x /= k;
            int extra = 0;
            while ((x % k == 0) && (x > 0))
                extra++, x /= k;
            if (extra > 1)
                pq.push(extra);
        }
        else
        {
            while ((x % k == 0) && (x > 0))
                canDo++, x /= k;
        }
    }

    int i = arr1.size() - 1;
    while (i >= 0 && arr1[i] >= val)
        currIncl += 1, i--;
    int canGrow = 0;
    while (i >= 0 )
    {
        int x = arr1[i];
        if (x * k < val)
            break;
        canGrow++, i--;
    }
    if (canGrow <= canDo)
    {
        currIncl += canGrow;
        return currIncl >= val;
    }
    currIncl += canDo;
    canGrow -= canDo;

    int rem = 0, sum = 0;
    while (!pq.empty() && sum < canGrow)
    {
        rem++;
        sum += pq.top();
        pq.pop();
    }
    currIncl += min(sum, canGrow) - rem;
    return currIncl >= val;
}
void solve()
{
    arr1.clear(), arr2.clear();
    int n, k;
    cin >> n >> k;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        (x % k == 0) ? arr2.push_back(x) : arr1.push_back(x);
    }
    sort(arr1);
    sort(arr2);
    int ans = 1;
    int low = 1, high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        (possible(mid, k)) ? ans = mid, low = mid + 1 : high = mid - 1;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
