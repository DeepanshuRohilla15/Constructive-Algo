#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
	ll t,n,m,i,j,k;
// 	cin >> t;
    t=1ll;
	while(t--)
	{
	    cin >> n >> m;
	    vector<pair<ll,ll>>diff;
	    for(i=0;i<n;i++)
	    {
	        vector<pair<ll,ll>>vp;
	        for(j=0;j<m;j++)
	        {
	            cin >> k;
	            vp.push_back(make_pair(k,0));
	        }
	        for(j=0;j<m;j++)
	        {
	            cin >> k;
	            vp[j].second=k;
	        }
	        sort(vp.begin(),vp.end());
	        ll ans=0ll;
	        for(j=0;j<m-1;j++)
	        {
	            if(vp[j].second>vp[j+1].second)
	                ans++;
	        }
	        diff.push_back(make_pair(ans,i+1));
	    }
	    sort(diff.begin(),diff.end());
	    for(auto x:diff)
	        cout << (x.second)<<"\n";
	}
	return 0;
}
void pushZerosToEnd(int arr[], int n)
{
    int count = {0};  // Count of non-zero elements
 
    // Traverse the array. If element encountered is non-
    // zero, then replace the element at index 'count'
    // with this element
    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i]; // here count is
                                   // incremented
 
    // Now all non-zero elements have been shifted to
    // front and  'count' is set as index of first 0.
    // Make all elements 0 from count to end.
    while (count < n)
        arr[count++] = 0;
}
int findPlatform(int arr[], int dep[], int n)
{
 
    // plat_needed indicates number of platforms
    // needed at a time
    int plat_needed = 1, result = 1;
    int i = 1, j = 0;
 
    // run a nested  loop to find overlap
    for (int i = 0; i < n; i++) {
        // minimum platform
        plat_needed = 1;
 
        for (int j = i + 1; j < n; j++) {
            // check for overlap
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||
           (arr[j] >= arr[i] && arr[j] <= dep[i]))
                plat_needed++;
        }
 
        // update result
        result = max(result, plat_needed);
    }
 
    return result;
}
