#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;


// Common Mistakes:
// 1. Use sqrtl() instead of sqrt() for long long
// 2. if a[i] goes to 10^9, you only need to check for primes till sqrt(10^9) i.e. 31623
// 3. GCD of |x-y|?
// 4. should pairity of x and y be equal?
// 5. Huffman Coding? Merging 2 smallest elements?
// 6. Coordinate Compression? 

void solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin>>p[i];
    }
    deque<int> window;
    int window_sum = 0;
    vector<int> ans(n+1,0);
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = i; j < n; j++) {
            s += p[j];
            if (s<=n){
                ans[s]++;
            }else {
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
