#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];

    int l = 0, r = 1;
    int res = 1;
    while(r < n)
    {
        if(arr[r] > arr[r-1])
        {
            res = max(res, r-l+1);
            r++;
        }
        else{
            l = r;
            r++;
        }
    }
    cout<<res;

}
