#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin>>n>>x>>y;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    
    
    for(int i = 0; i < n; i++)
    {
        bool flag = false;
        for(int j = i-1; j>=i-x && j>=0 && !flag; j--)
        {
            if(arr[j] <= arr[i]) flag = true;
        }
    
        if(flag) continue;
    
        for(int j = i+1; j<n && j<= i+y && !flag; j++)
        {
            if(arr[j] <= arr[i]) flag = true;
        }
    
        if(!flag)
        {
            cout<<i+1;
            return 0;
        }
    }
    
    
}
