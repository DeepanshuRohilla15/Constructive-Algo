#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 100000007;
// int binExp(int n,int power){
//     int ans=1;
//     while(power>0){
//         if(power%2==1){
//             ans=ans*power;
//             power=power-1;
//         }else{
//             power=power/2;
//             //x=x*x;
//             n=n*n;
//         }
//     }return ans;
// }
int binExp(int n, int power){
    if (power == 0)
        return 1;

    int temp = binExp(n, power / 2);
    int result = temp * temp;
    result %= MOD;
    if (power % 2)
        result *= n;

    result %= MOD;
    return result;
}
int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int r1 = binExp(3, n) + 1 - binExp(2, n + 1);
        r1 %= MOD;
        r1 = (r1 + MOD) % MOD;
        r1 *= binExp(2, MOD - 2);
    
        int r2 = binExp(4, n) - binExp(3, n + 1) + 3ll * binExp(2, n) - 1;
        r2 %= MOD;
        r2 = (r2 + MOD) % MOD;
        r2 *= binExp(2, MOD - 2);
    
        cout << r1 % MOD << " " << r2 % MOD << endl;
	}

}
