#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            int k = abs(s[i] - s[n-i-1]);
            if(k > 2 || k % 2 == 1)
            {
                flag = false;
                break;
            }
        }
        
        cout<< (flag ? "YES" : "NO")<<"\n";
    }
}
