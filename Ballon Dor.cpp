#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        
        int count_1s = 0, count_2s = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] == 2) count_2s++;
            else count_1s++;
        }
        
        if(count_1s == n || count_2s % 8 == 0) cout<<"YES\n";
        else cout<<"NO\n";

    }
}
