#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        char str[n+1][m+1];
        int x = 0, y = 0;
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin>>str[i][j];
            }
        }
        
        for(int i = 1; i <= n-1; i++)
        {
            if(str[i][m] != 'D')
            {
                x++;
            }
        }
        
        for(int j = 1; j <= m-1; j++)
        {
            if(str[n][j] != 'R')
            {
                y++;
            }
        }
        cout<<x+y<<"\n";
    }
}
