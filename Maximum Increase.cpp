#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
 
    int maxi = 0, len = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i+1] > arr[i])
        {
            len++;
        }
        else len = 0;
 
        maxi = max(maxi, len);
    }
 
    cout<<maxi + 1;
}
