#include<bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row = -n; row <=n; row++)
    {
        int spaces = 2*abs(row);
        for(int i = 0; i < spaces; i++)
        {
            cout<<" ";
        }
        
        int max = n - abs(row);
        
        for(int i =0; i < max; i++) cout<<i<<" ";
        
        for(int i = max; i > 0; i--) cout<<i<<" ";
        
        cout<<"0\n";
    }
}
