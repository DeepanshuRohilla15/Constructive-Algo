#include <bits/stdc++.h>
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
// 7. Min/Max Spanning Tree.
// 8. Topo sort ? if there is something related to relative ordering.
// 9. Try calculating it in reverse order?
// 10. All elements in L,R should be distinct?
// 11. To check if a number is a power of 2, check if n&(n-1)=0

void solve(){
    int n,l;
    cin>>n>>l;
    if (l>=2000) {
        for (int i = 1; i <= n; i++) {
            cout<<i<<" ";
        }
        cout<<endl;
    } else {
        int cur = 1;
        for (int i = 1; i <= n; i++) {
            cur+=l;
            cout<<cur<<" ";
        }
        cout<<endl;
    }
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
    
    #ifndef ONLINE_JUDGE
        function<bool(string,string)> compareFiles = [](string p1, string p2)->bool {
            std::ifstream file1(p1);
            std::ifstream file2(p2);
            if (!file1.is_open() || !file2.is_open()){
                return false;
            }
            cerr<<"checking.... ";
            std::string line1, line2;
            while (std::getline(file1, line1) && std::getline(file2, line2)) {
                if (line1 != line2)
                    return false;
            }
            return file1.eof() || file2.eof();
        };
        bool check = compareFiles("output.txt","expected.txt");
        if (check) cerr<<"OK\n";
        else cerr<<"Failed!\n";
    #endif

    return 0;
}
