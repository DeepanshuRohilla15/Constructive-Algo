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
	    string s;
	    cin>>s;
	    
	    int cnt = 0;
	    for(int i = 0; i < n; i++)
	    {
	        if(s[i] == '1')
	        {
	            cnt++;
	        }
	    }
	    
	    int cnt2 = 0;
	    int maxi = 0;
	    for(int i = 0; i < n; i++)
	    {
	        if(s[i] == '0')
	        {
	            cnt2++;
	        }
	        else
	        {
	            cnt2 = 0;
	        }
	        maxi = max(cnt2, maxi);
	    }
	    
	    cout<<(maxi + cnt)<<"\n";
	}

}
