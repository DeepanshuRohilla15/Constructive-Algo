#include <bits/stdc++.h>

using namespace std;

void solution()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if (a == b)
    {
        if (n > a)
        {
            if ((n - (a + 1)) % (a + 1) == 0)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
    else if (a < b)
    {
        if (n <= a)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    else
    {
        cout << "Alice" << endl;
    }
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
