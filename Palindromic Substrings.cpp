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
	    
	    if(n == 1)
	    {
	        cout<<"BOB\n";
	        continue;
	    }
	    
	    int zeroes = 0, ones = 0;
	    for(char c : s)
	    {
	        if(c == '0') zeroes++;
	        else ones++;
	    }
	    
	    int diff = abs(zeroes - ones);
	    if(n % 2 == 0)
	    {
	        if(diff >= 2)
	        {
	            cout<<"Alice\n";
	            
	        }
	        else cout<<"BOB\n";
	    }
	    else 
	    {
	        if(diff >= 2) cout<<"Bob\n";
	        else cout<<"Alice\n";
	    }
	    
	    
	}
}
